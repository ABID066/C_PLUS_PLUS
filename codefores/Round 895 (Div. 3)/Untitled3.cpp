
#include <iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    while(n--)
    {


        float a, b, c;

        int m=0;
        cin>>a>>b>>c;
        if(a==b)
            cout<<m<<endl;
        else
        {


            while(a != b)
            {
                if(b>a)
                {
                    float dff= b-a;
                    if(dff>=c*2)
                    {
                        a+=c;
                        b-=c;
                        m++;
                    }
                    else if(dff<c*2)
                    {
                        a+=dff/2;
                        b-=dff/2;
                        m++;
                    }
                }
                if(a>b)
                {
                    float dff= a-b;
                    if(dff>=c*2)
                    {
                        a-=c;
                        b+=c;
                        m++;
                    }
                    else if(dff<c*2)
                    {
                        a-=dff/2;
                        b+=dff/2;
                        m++;
                    }
                }
            }
            cout<<m<<endl;
            m=0;
        }
    }
}
