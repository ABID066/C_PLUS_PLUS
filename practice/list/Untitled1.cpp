#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    l.push_front(500);
    l.push_front(200);

    list<int>::iterator lti;
    for(lti=l.begin(); lti!=l.end(); lti++)
        cout<<*lti<<endl;
    cout<<endl;

    cout<<"First Value: "<<l.front()<<endl;;
    cout<<"Last Value: "<<l.back()<<endl;
    cout<<endl;

    list<int>list1{8,9,10,11,12,13,14};

    list1.pop_front();
    list1.pop_back();

    for(auto li :list1)
        cout<<li<<endl;
    cout<<endl;
    cout<<"Size of list1: "<<list1.size()<<endl;

    //clear(),empty()
        cout<<endl;
    list1.clear();
    if(list1.empty())
        cout<<"Empty"<<endl;
    cout<<endl;

    //insert the value in list
    list<int>::iterator insrt;
    insrt=l.begin();
    advance(insrt,3);// 3 define the position
    l.insert(insrt, 5);
    for(auto insrt :l)
        cout<<insrt<<endl;



}
