/*
 * BinderStudyClientmain.cpp
 *
 *  Created on: 2014-2-21
 *      Author: sjf
 */

#include <stdio.h>
#include "BinderStudyClient.h"

using namespace android;

int main(void )
{
	printf("%s->%d\n", __FILE__, __LINE__);
	BinderStudyClient *pClient = new BinderStudyClient();
	printf("%s->%d\n", __FILE__, __LINE__);
	printf("%s\n", pClient->binderTest(1));
	return 0;
}
