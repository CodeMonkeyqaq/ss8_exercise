////
////  8.4.cpp
////  ss8_exercise
////
////  Created by 王星洲 on 2018/4/9.
////  Copyright © 2018年 王星洲. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//#include "cstring"
//struct stringy
//{
//    char *str;
//    int ct;
//};
//void set(stringy &,const char *);
//void show(const stringy &,int n = 1);
//void show(const char *,int n = 1);
//int main()
//{
//    stringy beany;
//    char testing[] = "Reality isn't what it used to be.";
//    set(beany, testing);
//    show(beany);
//    show(beany, 2);
//    testing[0] = 'D';
//    testing[1] = 'u';
//    show(testing);
//    show(testing,3);
//    show("Done!");
//    return 0;
//}
//void set(stringy &stry,const char *szTest)
//{
//    stry.ct = strlen(szTest) + 1;
//    stry.str = new char [stry.ct];
//    strcpy(stry.str, szTest);
//}
//void show(const stringy &stry,int n)
//{
//    for(int i=0;i<n;i++)
//    {
//        cout<<stry.str<<endl;
//    }
//}
//void show(const char * szTest,int n)
//{
//    for(int i=0;i<n;i++)
//    {
//        cout<<szTest<<endl;
//    }
//}
//
