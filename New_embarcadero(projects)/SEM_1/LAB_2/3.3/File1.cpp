#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <conio.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]) 
{ float a,b;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
bool f=a>b;
//a>b? f=true:f=false;
f? cout<<"bolshaya peremenna a, a="<<a: cout<<"bolshaya b,b="<<b;
   getch();	return 0;
}