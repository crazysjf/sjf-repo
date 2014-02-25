/*
 * BinderStudyClient.cpp
 *
 *  Created on: 2014-2-19
 *      Author: sjf
 */

#include "BinderStudyClient.h"
#include <binder/IServiceManager.h>

namespace android {

BinderStudyClient::BinderStudyClient() {
	sp<IServiceManager> sm = defaultServiceManager();
	printf("defaultService got: %p\n", sm.get());

	sp<IBinder> binder = sm->getService(String16("media.sjf"));
	printf("binder for study.binder got: %p\n", binder.get());
	mBinderStudyService = interface_cast<IBinderStudyService>(binder);
	printf("mBinderStudyService: %p\n", mBinderStudyService.get());
}

BinderStudyClient::~BinderStudyClient() {
	// TODO Auto-generated destructor stub
}

const char *BinderStudyClient::binderTest(int i)
{
	return mBinderStudyService->binderTest(i);
}

}
