#include<bits/stdc++.h>
using namespace std;

vector<int> p;
vector<int> l;

int binarysearch(int l, int  r, int target){
    int middle = -1;
    while( l <= r ){
        middle = l + ( r - l ) / 2;
        if(l==r && p[middle] != target)
            break;
        if( p[middle] == target ){
            return middle; 
        }else if( p[middle] < target ){
            l = middle + 1;
        }else{
            r = middle;
        }
        
    }
    return -1;
}



int main(){
    int n, m;

    cin>>m;
    p.resize(m);
    for ( auto &x : p )
        cin>>x;
    cin>>n;
    l.resize(n);
    for ( auto &x : l )
        cin>>x;
    
    for(int i=0; i<n; i++){
        int r = binarysearch(0, m-1, l[i]);
        cout<<r+1<<endl;
    }

    return 0;
}