#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif


#include <conio.h>
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

 int rek_1 (int  arr[] , int N, int min, int x, int &b);
 int rek_2 (int  arr[] , int N, int min, int y, int &c);


int _tmain(int argc, _TCHAR* argv[])
{       system ("chcp 1251>nul") ;
  srand(time(0));
  int b =0,c = 0;
  const int N = 10;
  int arr[N];
  int min=100000;
  int i = 0, j = 5;
  for (int i = 0; i < N; i++)
	 { arr[i]=rand() %100 +1;
	   cout<<arr[i]<<" ";
	 } cout<<endl;

	 if (rek_1( arr, N/2, min, i, b) >= rek_2 (arr,N, min, j, c ))
	   { cout<<"���������� ������� ������� ��� ������� "<<c<<" ����� "<<  rek_2 (arr,N, min, j, c );

	   }else cout<<"���������� ������� ������� ��� ������� "<<b<<" ����� "<<rek_1( arr, N/2, min, i, b);

 //cout<<rek_1( arr, N/2, min, i, b)<<endl;
 //cout<<rek_2 (arr,N, min, j, c)<<endl;
 //cout<<b<<endl;
 //cout<<c;
  getch();	return 0;
}

int rek_1 (int  arr[] , int N, int min, int x, int &b)
 { if (N == 0)
	 { return min;

	 } else if (arr[x] <= min )
			  { min = arr[x++];
				b=x;
			   return rek_1 ( arr,--N,min,x,b);

			  } else return rek_1 ( arr,--N,min, ++x,b);


 }

 int rek_2 (int  arr[] , int N, int min, int y, int &c)
 { if (N == 5)
	 { return min;

	 } else if (arr[y] <= min )
			  { min = arr[y++];
				c=y;
			   return rek_2 ( arr,--N,min,y,c);

			  } else return rek_2 ( arr,--N,min, ++y,c);


 }