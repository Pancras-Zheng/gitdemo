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
       L.data[i] = 0;  // 将所有数据元素设置为默认初始值
       L.length = 0;   //顺序表初始长度为0
    } 
}

void ListInsert(SqList &L, int i, int e)
{
    for (int j = L.length; j >= i; j--)
    {
       L.data[j] = L.data[j-1]; // 将第i个元素及以后元素后移一位
    } 

    L.data[i-1] = e;  //位置i处放入e元素
    L.length++;   //顺序表长度加1
}

int main()
{
       SqList L;  //声明一个顺序表
     InitList(L); //初始化顺序表
      L.length = 5;   //顺序表长度设置为5
     for (int i = 0; i < L.length; i++)
    {
       L.data[i] = i;  // 将数据元素设置为0-4
    } 
     ListInsert(L, 3, 3);
    for (int i = 0; i < MaxSize; i++) //打印data数组
        printf("data[%d] = %d\n", i, L.data[i]);
        return 0;
}  