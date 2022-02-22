#include <stdio.h>
#include<math.h>
void input(float*x1, float*x2, float*y1, float*y2)
{
  printf("Enter the value\n");
  scanf("%f%f%f%f",x1,x2,y1,y2);
}
void find_output(float x1, float x2, float y1,float y2, float*area)
{
  *area=sqrt (pow(x2-x1,2)+pow(y2-y1,2));
}
void output(float x1, float x2, float y1, float y2, float area)
{
  printf("therefore the distance between points are %f",area);

  
}
int main()
{
  float x1,x2,y1,y2,area;
  input(&x1,&x2,&y1,&y2);
  find_output(x1,x2,y1,y2,&area);
  output(x1,x2,y1,y2,area);
  return 0; 

}