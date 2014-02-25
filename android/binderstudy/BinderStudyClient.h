/*
 * BinderStudyClient.h
 *
 *  Created on: 2014-2-19
 *      Author: sjf
 */

#ifndef BINDERSTUDYCLIENT_H_
#define BINDERSTUDYCLIENT_H_

#include "IBinderStudyService.h"

namespace android {

class BinderStudyClient {
public:
	BinderStudyClient();
	virtual ~BinderStudyClient();
	const char *binderTest(int i);
private:
	sp<IBinderStudyService>       mBinderStudyService;
};

}

#endif /* BINDERSTUDYCLIENT_H_ */
