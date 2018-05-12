////
////  8.5.cpp
////  ss8_exercise
////
////  Created by 王星洲 on 2018/4/9.
////  Copyright © 2018年 王星洲. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//#include "cstring"
//template <typename T>
//T maxn(T *,int length = 5);
//template <> char* maxn(char **p,int number)
//{
//    int max = strlen(p[0]);
//    char *maxp = p[0];
//    for(int i=1;i<number;i++)
//    {
//        if(strlen(p[i])>max)
//        {
//            max=strlen(p[i]);
//            maxp = p[i];
//        }
//    }
//    return (maxp);
//}
//int main()
//{
//    
//    int array1 [6]
//    {
//        2,5,2,1,-1,10
//    };
//    double array2 [4]
//    {
//        1.3,5.2,221.1,-34.241
//    };
//    char a[]="Hello world";
//    char b[]="Long time no see";
//    char c[]="Oh my goodness";
//    char d[]="Wang xingzhou";
//    char e[]="Littel Cute";
//    char *p[]={a,b,c,d,e};
//    cout<<maxn(array1,6)<<endl;
//    cout<<maxn(array2,4)<<endl;
//    cout<<maxn(p)<<endl;
//    return 0;
//}
//template <typename T>
//T maxn(T *test,int length)
//{
//    T max = test[0];
//    for(int i=1;i<length;i++)
//    {
//        if(test[i]>max)
//        {
//            max=test[i];
//        }
//    }
//    return max;
//}
