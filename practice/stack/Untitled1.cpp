#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st;
    st.push(1);
    st.push(4);
    st.push(13);
    st.push(5);
    st.push(11);
    st.push(7);

    cout<<"Size :"<<st.size()<<"\n"<<endl;

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();

    }
}
