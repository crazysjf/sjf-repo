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
	sp<IBinder> binder = sm->getService(String16("study.binder"));
	mBinderStudyService = interface_cast<IBinderStudyService>(binder);
}

BinderStudyClient::~BinderStudyClient() {
	// TODO Auto-generated destructor stub
}

const char *BinderStudyClient::binderTest(int i)
{
	return mBinderStudyService->binderTest(i);
}

}
