/*
 * IBinderStudyService.h
 *
 *  Created on: 2014-2-19
 *      Author: sjf
 */

#ifndef IBINDERSTUDYSERVICE_H_
#define IBINDERSTUDYSERVICE_H_

#include <binder/IInterface.h>
#include <binder/Parcel.h>

namespace android {

class IBinderStudyService : public IInterface
{
public:
	enum {
		BINDER_TEST = IBinder::FIRST_CALL_TRANSACTION,
		OTHERS,
	};

public:
	DECLARE_META_INTERFACE(BinderStudyService);
	virtual const char *binderTest(int i) = 0;
};

// ----------------------------------------------------------------------------

class BnBinderStudyService: public BnInterface<IBinderStudyService>
{
public:
	virtual status_t onTransact( uint32_t code,const Parcel& data,Parcel* reply,uint32_t flags = 0);
};

};

#endif /* IBINDERSTUDYSERVICE_H_ */
