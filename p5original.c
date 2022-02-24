#include <stdio.h>
int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}

void int_array(int n, int a[n])
{
   for(int i=0;i<n;i++)
     a[i] = i;
  a[1]=0;
}

void ets(int n, int a[n])
{
  int i=0;
  while(i<=sqrt(n)){
  while(a[i] == 0) i++;
  for(int k = i+i; k < n ; k+=i)
    a[k]=0;
  i++;
   }