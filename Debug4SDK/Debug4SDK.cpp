// Debug4SDK.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Interface.h"
#include <iostream>
#include <thread>

#include <string>
#include "wars.h"
void * h = 0;
void* tst();
void change(void*hh);

void Tcallback(void*hh, int cgi);
int WechatTest()
{
	h = WxInitHandle("5388bf482c9059c1efee817e5428182b",
		"iPad", 
		"<softtype><k3>9.0.2</k3><k9>iPad</k9><k10>2</k10><k19>95033752-7021-4C02-7B11-51DEE416CC6B</k19><k20>5bd15bab-8c82-37f0-e76c-2a95-936d30e4</k20><k21>neihe_5GHz</k21><k22>Beeline</k22><k24>01:2e:3d:3c:e9:53</k24><k33>\345\276\256\344\277\241</k33><k47>1</k47><k50>1</k50><k51>com.tencent.xin</k51><k54>iPad4,4</k54></softtype>", "95033752-7021-4C02-7B11-51DEE416CC6B");
	//string tt = "5388bf482c9059c1efee817e5428182b";
	//cout<<tt.substr(2)<<endl;
	//char* result;
	

	//WXUserLogin(h,"0016812020132","wwyy889900", &result);

	//cout << result << endl;
	//string strR = result;
	//
	//SafeFree((void*) result);

	SetQRCodeCallBack(Tcallback);


	 WxGetQRCode(h);
	//cout << Nresult << endl;

//	SafeFree((void*)Nresult);
	Sleep(5000);

    return 0;
}


void Tcallback(void*hh, int cgi)
{
	const char*str = (const char*)hh;
	cout << str << endl;

}

int main()
{
	//thread *t = new thread(WechatTest);
	WechatTest();
	//WechatTest();
	0xa8>>2;

	string ll= { 0x01,0x03,0x09 };
	cout <<ll.c_str()<< endl;
	cout << ll.size() << endl;
	ll.insert(1, (const char*)"i");
	cout << ll.c_str() << endl;
	cout << ll.size() << endl;
	ll.insert(1, (const char*)"ww");
	cout << ll.c_str() << endl;
	cout << ll.size() << endl;
	char x[3];
	cin >> x;

	return 0;
}
void* tst()
{
	wars *w = new wars();
	w->a = 4;
	w->b = 6;
	
	cout << w << endl;


	return (void*)w;

}
void change(void*hh)
{
	wars *w = (wars*)hh;
	cout << w->a << endl;
}