Insertion and sort :
#include<stdio.h>
void select(int a[],int n)
{
for(int i=0;i<n- 1;i++)
{
int index = i;
for(int j=i+ 1;j<n;j++)
{
if(a[j]<a[index])
{
index=j;
}
}
int temp=a[index];
a[index]=a[i];
a[i]=temp;
}
}
void insert(int a[],int n)
{
for(int i=1;i<n;i++)
{
int key=a[i];
int j=i- 1;
while(j>=0 && key<a[j])
{
a[j+ 1]=a[j];
j=j- 1;
}
a[j+ 1]=key;
}
}
void printArr(int a[],int n)
{
for(int i=0;i<n;i++)
{
printf("\t%d",a[i]);
}
}
int main()
{
int n,opt;
printf("Enter the number of elements: ");
scanf("%d",&n);
int a[n];
printf("Enter the elements: ");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Unsorted array: \n");
printArr(a,n);
printf("\n**MENU**");
printf("\n1. Selection Sort");
printf("\n2. Insertion Sort");
printf("\nEnter the option: ");
scanf("%d",&opt);
switch(opt)
{
case 1 : select(a,n);
break;
case 2 : insert(a,n);
break;
}
printf("\nSorted Array: \n");
printArr(a,n);
return 0;
}

Insertion and sort :
#include<stdio.h>
void select(int a[],int n)
{
for(int i=0;i<n- 1;i++)
{
int index = i;
for(int j=i+ 1;j<n;j++)
{
if(a[j]<a[index])
{
index=j;
}
}
int temp=a[index];
a[index]=a[i];
a[i]=temp;
}
}
void insert(int a[],int n)
{
for(int i=1;i<n;i++)
{
int key=a[i];
int j=i- 1;
while(j>=0 && key<a[j])
{
a[j+ 1]=a[j];
j=j- 1;
}
a[j+ 1]=key;
}
}
void printArr(int a[],int n)
{
for(int i=0;i<n;i++)
{
printf("\t%d",a[i]);
}
}
int main()
{
int n,opt;
printf("Enter the number of elements: ");
scanf("%d",&n);
int a[n];
printf("Enter the elements: ");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Unsorted array: \n");
printArr(a,n);
printf("\n**MENU**");
printf("\n1. Selection Sort");
printf("\n2. Insertion Sort");
printf("\nEnter the option: ");
scanf("%d",&opt);
switch(opt)
{
case 1 : select(a,n);
break;
case 2 : insert(a,n);
break;
}
printf("\nSorted Array: \n");
printArr(a,n);
return 0;
}

