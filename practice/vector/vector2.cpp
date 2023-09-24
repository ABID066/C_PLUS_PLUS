#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    v.push_back(450);
    v.push_back(451);
    v.push_back(452);
    v.push_back(453);
    v.push_back(454);
    v.push_back(455);
    v.push_back(456);

    cout<<"The size of the vector: "<<v.size()<<endl;

    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    v.insert(v.begin(),449);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+6,7,449);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }cout<<endl;cout<<endl;
    vector<int>v1;
    vector<int>v2;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    swap(v1,v2);
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    vector <int> v3;
    v3.push_back(50);
    v3.push_back(41);
    v3.push_back(2);
    v3.push_back(43);
    v3.push_back(54);
    v3.push_back(15);
    v3.push_back(66);
    for(int i=0; i<v3.size(); i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;
    sort(v3.begin(),v3.end());
    for(int i=0; i<v3.size(); i++)
    {
        cout<<v3[i]<<" | ";
    }
    cout<<endl;
    sort(v3.end(),v3.begin());
    for(int i=0; i<v3.size(); i++)
    {
        cout<<v3[i]<<" | ";
    }
    cout<<endl;
}
