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
    static char const*              getServiceName() {return "study.binder";}
	const char *binderTest(int i);
    BinderStudyService();
    virtual ~BinderStudyService();
};

}

#endif /* BINDERSTUDYSERVICE_H_ */
