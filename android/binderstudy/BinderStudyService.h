/*
 * BinderStudyService.h
 *
 *  Created on: 2014-2-19
 *      Author: sjf
 */

#ifndef BINDERSTUDYSERVICE_H_
#define BINDERSTUDYSERVICE_H_

#include <binder/BinderService.h>
#include "IBinderStudyService.h"

namespace android {

class BinderStudyService;

class BinderStudyService  :
public BinderService<BinderStudyService>,
public BnBinderStudyService
{
	friend class                    BinderService<BinderStudyService>;
public:
    static char const*              getServiceName() {return "media.sjf";}
	const char *binderTest(int i);
    BinderStudyService();
    virtual ~BinderStudyService();
    virtual status_t                onTransact(uint32_t code, const Parcel& data,Parcel* reply, uint32_t flags);
    virtual void                    onFirstRef();
};

}

#endif /* BINDERSTUDYSERVICE_H_ */
