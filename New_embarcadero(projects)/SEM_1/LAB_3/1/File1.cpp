#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif


#include<conio.h>
#include<iostream>
#include<math.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{  float a,b,N=0,n;
int z,i=1;
//cout<<"i=1";
  while (i<=30) { if (i%2 == 0) { a=i/2;b=pow(i,3);
				   n=pow((a-b),2);
				   //cout<<"i - chetnoe, N="<<N<<endl;
				  }  else if (i%2 != 0 ) { a=i; b=pow(i,2);
										  n=pow((a-b),2);
										  //cout<<"i -nechetnoe, N="<<N<<endl;
						  }
  cout<<"i="<<i<<endl;
  cout<<"n="<<n<<endl;
 i++;
 N=N+n;
 } cout<<"N= "<<N;
   getch();	return 0;
}