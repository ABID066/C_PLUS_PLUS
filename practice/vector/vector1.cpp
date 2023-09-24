
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
    cout<<v.front()<<" "<<v.back()<<endl;
    v.pop_back();
    cout<<v.front()<<" "<<v.back()<<endl;
    v.erase(v.begin()+2,v.end()-2);

    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    v.clear();
    if(v.empty())
        cout<<"The vector is empty";
    else
        cout<<"The vector isn't empty";


}
