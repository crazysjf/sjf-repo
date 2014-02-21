/*
 * IBinderStudyService.cpp
 *
 *  Created on: 2014-2-19
 *      Author: sjf
 */

#include "IBinderStudyService.h"

namespace android {

class BpBinderStudyService: public BpInterface<IBinderStudyService>
{
public:
	BpBinderStudyService(const sp<IBinder>& impl)
	: BpInterface<IBinderStudyService>(impl)
	{
	}

	virtual const char *binderTest(int i)
	{
		Parcel data, reply;
		data.writeInterfaceToken(IBinderStudyService::getInterfaceDescriptor());
		data.writeInt32(i);
		remote()->transact(BnBinderStudyService::BINDER_TEST, data, &reply);
		return reply.readCString();
	}
};

IMPLEMENT_META_INTERFACE(BinderStudyService, "android.hardware.IBinderStudyService");

status_t BnBinderStudyService::onTransact(uint32_t code, const Parcel& data, Parcel* reply, uint32_t flags)
{
	switch(code)
	{
		case BINDER_TEST: {
			CHECK_INTERFACE(IBinderStudyService, data, reply);
			int i = data.readInt32();
			reply->writeCString(binderTest(i));
			return NO_ERROR;
		}
		break;
		default:
			return BBinder::onTransact(code, data, reply, flags);
	}
}

}
