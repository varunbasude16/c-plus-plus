#include<iostream>
using namespace std;
int getmax(int a[],int n){
    int max=a[0];
    for(int i=1;i<n;i++)
        if(a[i]>max)
            max=a[i];
    return max;
}
void countsort(int a[],int n, int m){
    int output[n];
    int count [10]={0};

    for(int i=0;i<n;i++)
        count[(a[i]/m)%10]++;
    for(int i=1;i<10 ;i++)
        count[i]+=count[i-1];

    for(int i=n-1;i>=0;i--)
    {
        output[count[(a[i]/m)%10]-1]=a[i];
        count[(a[i]/m)%10]--;
    }

    for(int i=0;i<n;i++)
    a[i]=output[i];

}
void radix(int a[],int n){
    int m=getmax(a,n);

    for( int exp=1;m/exp>0;exp*=10)
        countsort(a,n,exp);

}
int main(){
    int a[]={3,5,4,2,1,6,7,9,8};
    int n=9;

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    radix(a,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}