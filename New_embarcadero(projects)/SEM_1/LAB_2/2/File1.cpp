#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])

{
 float d;
int a,b;
char sing,y; m1:
cout<<"sing=";
cin>>sing;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
//b!=0;
switch (sing)  {
case '+' : d=a+b;break;
 case '-' : d=a-b;cout<<"d="<<d; break;
 case '*' : d=a*b;cout<<"d="<<d; break;
 case '/' : if (b==0) {cout<<"nelzja delit na 0"; break;

			}  else d=a/b;cout<<"d="<<d;break;
default: cout<<"Nepravilny vvod/n";
}
cout<<" if you want to continue press y "; cin>>y; if (y=='y') { goto m1;

		}
getch();
	return 0;
}
//��� ������ �������� �� ����
