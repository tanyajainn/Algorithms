#include  <iostream> 
#include  <stdio.h>
 #include  <stdlib.h> 
 #include  <time.h>

using namespace std; template  <class  T>

class sorting
{
T *data; int  n;

public:
unsigned  int  count;

sorting()
{
n  =  0;
}

~sorting()
{
delete[]  data; n  =  0;
}

int  getsize()
{
return  n;
}

void  insert(); void  insort(); void  display();
};

template  <class  T>
void  sorting<T>::insert()
{
count  =  0; int ch, l;
cout  <<  "\nInsertion  Sort  Program  by  Tanya Jain  \n\n------  MENU 	\n"
<<  "\n1.WORST  CASE\n"
<<  "\n2.BEST  CASE\n"
<<  "\n3.AVERAGE  CASE\n"
<<  "\n 	\n";
cout  <<  "\n\nEnter  the  no.  of  elements  in  array:  "; cin  >>  n;
data  =  new  T[n]; srand(time(NULL));

cout  <<  "\nEnter  your  choice:  "; cin >> ch;

switch (ch)
{
case  1:
cout  <<  "\nEnter  the  elements  of  array\n"; for  (int  i  =  0,  l  =  n;  i  <  n;  i++,  l--)
{
cin  >>  data[i];
}
break;

case  2:
cout  <<  "\nEnter  the  elements  of  array\n"; for  (int  i  =  0;  i  <  n;  i++)
{
cin  >>  data[i];
}
break;

case  3:
cout  <<  "\nEnter  the  elements  of  array\n"; for  (int  i  =  0,  l  =  n;  i  <  n;  i++,  l--)
{
cin  >>  data[i];
}
break;

default:
cout  <<  "\nWrong  choice!!!";
}
}

template  <class  T>
void  sorting<T>::insort()
{
T  temp;
cout  <<  "\n\nINSERTION  SORTING\n"; for  (int  i  =  1,  j;  i  <  n;  i++)
{
temp  =  data[i];
for  (j  =  i  -  1;  j  >=  0;  j--)
{
count++;
if  (temp  <  data[j])
{
data[j  +  1]  =  data[j];
}
else
break;
}
data[j  +  1]  =  temp;
cout  <<  "\nArray  after  "  <<  i  <<  "  pass:	"; display();
}
cout  <<  "\n\nNumber  of  comparisons=  "  <<  count;
}

template  <class  T>
void  sorting<T>::display()
{
for  (int  i  =  0;  i  <  n;  i++)
{
cout  <<  data[i]  <<  "  ";
}
}

int main()
{
int  s,  choice,  n,  el,  index,  index2; char ch;
sorting<int>  ob; do
{
ob.insert();
ob.insort();
cout  <<  "\nDo  you  want  to  do  more(Y/N)?	"; cin >> ch;
}  while  (ch  ==  'Y'  ||  ch  ==  'y'); return  0;
}

