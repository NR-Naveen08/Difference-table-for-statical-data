#include<stdio.h>
#include<string.h>
int main()
{
 float x[30], y[30][30],d=2;
 int i,j, n;
 char str1[10];
 printf("backward or forward difference table\n(input only in 'backward' or 'forward')\n");
 scanf("%s",str1);
 printf("Enter number of data\n");
 scanf("%d",&n);
 printf("Enter data:\n");

 for(i = 0; i < n ; i++)
 {
  printf("x[%d]=", i);
  scanf("%f", &x[i]);
 }
  printf("\n");
  for(i = 0; i < n ; i++)
 {
  printf("y[%d]=", i);
  scanf("%f", &y[i][0]);
 }
 if(strcmp(str1,"forward")==0)
{
 for(i = 1; i < n; i++)
 {
  for(j = 0; j < n-i; j++)
  {
   y[j][i] = y[j+1][i-1] - y[j][i-1];
  }
 }
 
 printf("\nFORWARD DIFFERENCE TABLE\n\n");
 for(i = 0; i < n; i++)
 {
  printf("%0.2f", x[i]);
  for(j = 0; j < n-i ; j++)
  {
   printf("\t%0.2f", y[i][j]);
  }
  printf("\n");
 }
}
  
 else if(strcmp(str1,"backward")==0)
{
 for(i = 1; i < n; i++)
 {
  for(j = n-1; j > i-1; j--)
  {
   y[j][i] = y[j][i-1] - y[j-1][i-1];
  }
 }

 printf("\nBACKWARD DIFFERENCE TABLE\n\n");
 for(i = 0; i < n; i++)
 {
  printf("%0.2f", x[i]);
  for(j = 0; j <= i ; j++)
  {
   printf("\t%0.2f", y[i][j]);
  }
  printf("\n");
 }
}

 else
{ 
   printf("enter 'backward' or 'forward'(case sensitive)");
}
 return 0;
}