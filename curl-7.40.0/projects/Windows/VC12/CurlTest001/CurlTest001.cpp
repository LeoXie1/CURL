// CurlTest001.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "HttpClient.h"

int main()
{
	CHttpClient hc;
	hc.SetDebug(true);
	std::string strres;
	//hc.Post("www.baidu.com", "", strres);
	hc.Get("www.baidu.com",strres);
	return 0;
}

