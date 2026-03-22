#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void sort(float a[],int n){
    vector<float> buckets[n];

    for(int i=0;i<n;i++){
        int index=n*a[i];
        buckets[index].push_back(a[i]);
    } 
    for(int i=0;i<n;i++)
        sort(buckets[i].begin(),buckets[i].end());
    int index=0;
        for(int i=0;i<n;i++){
        for(float value: buckets[i]){
            a[index++]=value;
        }
    }
}
int main(){
    int n=7;
    float a[]={0.7,0.3,0.1,0.2,0.4,0.5,0.6};
    cout<<"Before:\n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

    sort(a,n);

    cout<<"\nAfter:\n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    
    return 0;
}

