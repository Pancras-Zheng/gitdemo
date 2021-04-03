#include <stdio.h>
// void PrintN(int N)
// { int i;
//   for (i=1; i<=N; i++)
//     printf("%d\n",i);
//   return;
// };
void PrintN (int N)
{ if (N)
  {
    PrintN(N-1);  //递归空间复杂度
    printf("%d\n",N);
  }
 return;  
}
int main()
{int N;
 scanf("%d",&N);
 PrintN(N);
 return 0;
 }