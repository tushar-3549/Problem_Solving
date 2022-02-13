#include<stdio.h>
int main()
{
  int A,B,C,s;
  double area;
  while(1)
  {
      scanf("%d",&A);
      if(A==0) break;
      scanf("%d %d",&B,&C);
      area=A*B*100.0/C;
      for(s=1;s*s<=area;s++)// X × 20 / 100 = 80
//Or, X × 20 = 80 × 100.
//Or, X = 80 × 100 / 20 = 400
//Or, X = 400
     s--;
     printf("%d\n",s);

  }
  return 0;

}
