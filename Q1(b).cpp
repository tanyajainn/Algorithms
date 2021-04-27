#include  <iostream>
 #include  <fstream> 
 using namespace std;

int  count  =  0;

void swap(int *a, int *b)
{
int t = *a;
*a = *b;
*b = t;
}

void  merge(int  arr[],  int  l,  int  m,  int  r)
{
int i, j, k;
int  n1  =  m  -  l  +  1; int n2 = r - m;
int  L[n1],  R[n2];

for  (i  =  0;  i  <  n1;  i++) L[i]  =  arr[l  +  i];
for  (j  =  0;  j  <  n2;  j++) R[j]  =  arr[m  +  1  +  j];
i  =  0;
j  =  0;
k  = l;
while (i < n1 && j < n2)
{
if  (L[i]  <=  R[j])
{
arr[k]  =  L[i]; count++;
i++;
}
else
{
arr[k]  =  R[j]; count++;
j++;
}
k++;
}
while (i < n1)
{
arr[k]  =  L[i];
i++; k++;
}
while (j < n2)
{
arr[k]  =  R[j]; j++;
k++;
}
}

void  mergesort(int  arr[],  int  l,  int  r)
{
if (l < r)
{
int  m  =  l  +  (r  -  l)  /  2; mergesort(arr,  l,  m); mergesort(arr,  m  +  1,  r); merge(arr,  l,  m,  r);
}
}

int main()
{
int  flag  =  0;
int  a[3000],  n,  temp;

cout  <<  "\n  Merge  Sort  Program  by  Tanya Jain\n\n";

cout  <<  "Enter  the  number  of  elements:  ";

cin  >>  n;

fstream  f("mergebest.txt",  ios::out);

if (!f)

cout  <<  "ERROR  ";
int  i  =  n; while (i > 0)
{
f << i;
f << endl; i--;
}

f.close();
fstream  f1("mergebest.txt",  ios::in); cout  <<  "\nElements  before  sorting:  "; for  (int  y  =  0;  y  <  n;  y++)
{
f1  >>  a[y];
cout  <<  a[y]  <<  "  ";
}
f1.close(); mergesort(a,  0,  n  -  1);
cout  <<  "\nSorted  array  is  "; for  (int  y  =  0;  y  <  n;  y++)
cout  <<  a[y]  <<  "  ";

cout  <<  "\nNumber  of  comparisons:  "  <<  count;
}

