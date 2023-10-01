#include<bits/stdc++.h>
using namespace std;

int main()
{

    set <int>s;
    s.insert(1);
    s.insert(8);
    s.insert(7);
    s.insert(12);
    s.insert(30);
    s.insert(15);
    s.insert(13);
    s.insert(2);
    s.insert(2);
    s.insert(20);
    s.insert(3);
    s.insert(1);

    s.erase(20); //delete 20

    auto ot2=s.begin();
    advance(ot2,3); //delete 3rd position= 7
    s.erase(ot2);


    cout<<"Size: "<<s.size()<<endl;
    cout<<"MAXSize of the Set: "<<s.max_size()<<endl;

    cout<<"\n";

    set<int>::iterator ot;
    for(ot=s.begin(); ot!=s.end(); ot++)
    {
        cout<<*ot<<" "; //print the set
    }
    cout<<"\n";
    cout<<"\n";

    set<int, greater <int> >s1;
    s1.insert(12);
    s1.insert(44);
    s1.insert(440);
    s1.insert(230);
    s1.insert(77);
    s1.insert(01);
    s1.insert(7);
    s1.insert(44);

    for(auto ot1 : s1)
        cout<<ot1<<" "; //short cut print

    cout<<"\n";
    cout<<"\n";

    auto it=s1.find(7);
    if(it!=s1.end())
        cout<<"Found"<<endl; //find 7
    else
        cout<<"Not Found"<<endl;
    cout<<"\n";

    if( int c=s1.count(444))
        cout<<"FOUND"<<endl; //find 444
    else
        cout<<"NOT FOUND"<<endl;

    cout<<"\n";

    s1.clear();
    if(s1.empty())
        cout<<"Empty"<<endl;
    else
        cout<<"Not Empty<"<<endl;

}
