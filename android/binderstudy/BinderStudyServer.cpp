/*
 * BinderstudyServer.cpp
 *
 *  Created on: 2014-2-19
 *      Author: sjf
 */

#include "BinderStudyServer.h"
#include <string.h>
#include <utils/RefBase.h>
#include <binder/MemoryHeapBase.h>
#include <binder/ProcessState.h>
#include <binder/IInterface.h>
#include <binder/Parcel.h>
#include <binder/BinderService.h>
#include "BinderStudyService.h"

BinderstudyServer::BinderstudyServer() {
	// TODO Auto-generated constructor stub

}

BinderstudyServer::~BinderstudyServer() {
	// TODO Auto-generated destructor stub
}


using namespace android;

int main(int argc, char** argv)
{
    sp<ProcessState> proc(ProcessState::self());
    sp<IServiceManager> sm = defaultServiceManager();
    ALOGI("ServiceManager: %p", sm.get());
    BinderStudyService::instantiate();
    printf("BinderStudyServer: Server running ...\n");
    ProcessState::self()->startThreadPool();
    IPCThreadState::self()->joinThreadPool();
    printf("BinderStudyServer: Server exited.\n");
}
