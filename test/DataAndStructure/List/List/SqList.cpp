/*创建一个顺序表-----------------------------------------------------------------------------------
# include <stdio.h>
# define MaxSize 10 //定义最大长度
typedef struct{
    int data[MaxSize]; //用静态的“数组”存放数据元素
    int length; //顺序表当前长度
}SqList;        //顺序表的类型定义

//基本操作——初始化一个顺序表
void InitList(SqList &L)
{
    for (int i = 0; i < MaxSize; i++)
    {
       L.data[i] = 0; // 将所有数据元素设置为默认初始值
    L.length = 0;   //顺序表初始长度为0
    } 
}

int main()
{
       SqList L;  //声明一个顺序表
     InitList(L); //初始化顺序表
    for (int i = 0; i < MaxSize; i++) //打印data数组
        printf("data[%d] = %d\n", i, L.data[i]);
        return 0;
}  */

//顺序表的删除操作------------------------------------------------------------------------
// # include <stdio.h>
// # define MaxSize 10 //定义最大长度
// typedef struct{
//     int data[MaxSize]; //用静态的“数组”存放数据元素
//     int length; //顺序表当前长度
// }SqList;        //顺序表的类型定义

// //基本操作——初始化一个顺序表
// void InitList(SqList &L)
// {
//     for (int i = 0; i < MaxSize; i++)
//     {
//     L.data[i] = 0; // 将所有数据元素设置为默认初始值
//     L.length = 0;   //顺序表初始长度为0
//     } 
// }

// //判断删除指令是否合法
// bool ListDelete(SqList &L, int i, int &e)
// {
//     if (i < 1 || i > L.length)          //判断I的范围是否有效
//         return false;
//     e = L.data[i - 1];                  //复制要删除所处i位序的的值
//     for (int j = i; j < L.length; j++)  //将第i个位置后的元素前移一位，即删除了位序i的元素
//         L.data[j - 1] = L.data[j];
//         L.length--;                     //线性表长度减1
//         return true;
// }

// int main()
// {
//      SqList L;  //声明一个顺序表
//      InitList(L); //初始化顺序表
//      for (int i = 0; i < MaxSize; i++)
//      {
//          L.data[i] = MaxSize - i;   //给顺序表赋值
//      }
//      int e = -1;
//      L.length = 10;
//      if (ListDelete(L, 2, e))
//          printf("删除位序为i的元素，删除的值是:=%d\n", e);
//       else
//          printf("要删除的位序不合法！\n" );
//         return 0;
     
//     // for (int i = 0; i < MaxSize; i++) //打印data数组
//     //     printf("data[%d] = %d\n", i, L.data[i]);
//     //     printf("%d\n",L.length);
//     //     return 0;
// }


//顺序表按位/值查找操作------------------------------------------------------------------------
# include <stdio.h>
# define InitSize 10 //定义初始长度
typedef struct{
    int *data; //指示动态分配数组的指针
    int MaxSize; //顺序表的最大容量
    int length; //顺序表当前长度
}SeqList;        //顺序表的类型定义（动态分配）

//基本操作——初始化一个顺序表
void InitList(SeqList &L)
{
    //用malloc函数申请一片连续空间  
    L.data = {(int *)new(InitList*sizeof(int)}; // 将所有数据元素设置为默认初始值
    L.length = 0;   //顺序表初始长度为0
    L.MaxSize = InitList*sizeof(int)
}

//判断删除指令是否合法
LocateElem(SqList &L, int i, int &e)
{
    
    
    
    if (i < 1 || i > L.length)          //判断I的范围是否有效
        return false;
    e = L.data[i - 1];                  //复制要删除所处i位序的的值
    for (int j = i; j < L.length; j++)  //将第i个位置后的元素前移一位，即删除了位序i的元素
        L.data[j - 1] = L.data[j];
        L.length--;                     //线性表长度减1
        return true;
}

int main()
{
     SqList L;  //声明一个顺序表
     InitList(L); //初始化顺序表
     for (int i = 0; i < MaxSize; i++)
     {
         L.data[i] = MaxSize - i;   //给顺序表赋值
     }
     int e = -1;
     L.length = 10;
     if (ListDelete(L, 2, e))
         printf("删除位序为i的元素，删除的值是:=%d\n", e);
      else
         printf("要删除的位序不合法！\n" );
        return 0;
}
