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
#include <iostream>
#include <math.h>


using namespace std;




int _tmain(int argc, _TCHAR* argv[]) 
{  system ("chcp 1251>nul") ;
   int N,M;
   cout<<"������� ������ ������� N*M :  "<<endl;
   cout<<"N = ";
   cin>>N;
   cout<<"M = ";
   cin>>M;
   int **arr = new int*[N]; // �������� ������� ����������
   for (int i = 0; i < N; i++)  /*������*/ //�������� �������� ����������, �� ������� ��������� ���������
	  { arr[i] = new int [M]; /*�������*/

	  }


   for (int i = 0; i < N; i++)
	  { for (int j = 0; j < M; j++)
		   { arr[i][j]=rand()%2;

		   }

	  }




	  for (int i = 0; i < N; i++)
	  { for (int j = 0; j < M; j++)
		   {cout<<arr[i][j]<<"\t";

		   }cout<<endl;

	  }cout<<endl;


	  for (int j = 0; j < M; j++)
		 { for (int i = N-1; i >= 0; i--)
			  { cout<<arr[i][j]<<"\t";

			  } cout<<endl;

		 }


	for (int i = 0; i < N ; i++)   /*������*/
	   {
		 delete [] arr[i]; /* ������� ���������� ������� , �� ������� ��������� ���������*/
	   }


   delete [] arr; /* ������� ������ �����������*/
   getch(); return 0;
}