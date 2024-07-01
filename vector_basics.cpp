#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v;
    int p;

    for(int i=0;i<5;i++){

        cin>>p;
        v.push_back(p);

    }

    for(auto it = v.begin();it!=v.end();it++){

        cout<<*it<<" ";
    }

/*
    for(int i=0;i<5;i++){

       // cout<<v[i]<<" "; ....fact is you might not know how many elements you have


    }   */




return 0;}
