#include<iostream>
#include"arraymax.h"
using namespace std;
void Array_max::set_value(){
    int i;
    for (i=0;i<10;i++)
        cin>>array[i];
}
void Array_max::max_value(){
    int i;
    max=array[0];
    for (i=1;i<10;i++)
        if (array[i]>max)
            max=array[i];
}
void Array_max::show_value(){
    cout<<"max="<<max;
}
void Array_max::ave_value(){
    int sum=0;
    for (int i=1;i<=10;i++)
        sum+=array[i];
    cout<<"ave="<<sum/10;
}
void Array_max::sum_value(){
   int sum=0;
    for (int i=1;i<=10;i++)
        sum+=array[i];
    cout<<"ave="<<sum; 
}