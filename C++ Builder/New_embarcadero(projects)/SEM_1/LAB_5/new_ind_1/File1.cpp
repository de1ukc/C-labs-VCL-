int** DinamicArray (int N, int M) {


   int **arr = new int*[N]; // �������� ������� ����������
   for (int i = 0; i < N  ; i++) /*������*/  //�������� �������� ����������, �� ������� ��������� ���������
	  { arr[i] = new int [M]; /*�������*/

	  }
	

   return arr;
}
   int* get_1 ( int n)
 { int* b = new int [n];

   return b;
 }

 int* get_2 ( int n)
 { int* c = new int [n];

	return c;
 }