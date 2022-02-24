#include<stdio.h>

void input(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("Enter the points\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
  int a,istriangle;
  a=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  if(a>0)
  {
    istriangle=1;
    }
  else
    {
    istriangle=0;
    }
    return istriangle;
}
void output(int istriangle)
{
  if(istriangle==1)
    printf("It is a Triangle");
  else if(istriangle==0)
    printf("It is not Triangle");
}
int main()
{
  float x1,y1,x2,y2,x3,y3;
  int istriangle;
  input(&x1,&y1,&x2,&y2,&x3,&y3);
  istriangle=is_triangle(x1,y1,x2,y2,x3,y3);
  output(istriangle);
  return 0;
}