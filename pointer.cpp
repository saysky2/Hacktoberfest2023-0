// Initializing an pointer
// use of malloc() function in c and new function in cpp



#include<iostream>
#include<stdio.h>
#include<stdlib.h>


using namespace std;

int main()
{
// intializing an array 
   int a =23;
   int *p;
   p=&a;
   cout << a << endl;
   cout << *p << endl;
   cout << p << endl;

//   use of malloc() function in c array
   int *p;
   p = (int *)malloc(5*sizeof(int));
   p[0] =672, p[1] =12, p[2] =2, p[3] =182, p[4] =34;
   for (int i = 0; i < 5; i++)
     cout << p[i] << endl;
      free(p);

// use of new function in cpp
   int *p;
   p=new int[5];
   p[0] =672, p[1] =12, p[2] =2, p[3] =182, p[4] =34;
   for (int i = 0; i < 5; i++)
     cout << p[i] << endl;
   delete[] p;
   
}
 
