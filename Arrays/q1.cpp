//move all negative numbers to the left side of an array.


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,-4,5,-6,77,8};
    
    int l, h;
    l=0;
    h=v.size()-1;
    while(l<=h){
        if(v[l]<0){
            l++;
        }
        else if(v[h]>=0){
            
            h--;
            
        }
        else{
            swap(v[l],v[h]);
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}