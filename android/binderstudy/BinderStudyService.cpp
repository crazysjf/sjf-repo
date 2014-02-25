/*
 * BinderStudyService.cpp
 *
 *  Created on: 2014-2-19
 *      Author: sjf
 */

#include "BinderStudyService.h"
namespace android {

static char s[100] = "This is a binder test:   \n";

BinderStudyService::BinderStudyService() {
	// TODO Auto-generated constructor stub

}

BinderStudyService::~BinderStudyService() {
}

const char *BinderStudyService::binderTest(int i)
{
	sprintf(s, "This is a binder test: %d\n", i);
	return (const char*)s;
}

void BinderStudyService::onFirstRef()
{
    BnBinderStudyService::onFirstRef();
}

status_t BinderStudyService::onTransact(uint32_t code, const Parcel& data, Parcel* reply, uint32_t flags)
{
    return BnBinderStudyService::onTransact(code, data, reply, flags);
}

}
