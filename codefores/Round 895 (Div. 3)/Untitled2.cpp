
#include <iostream>
using namespace std;
int countwater(float a, float b, float c)
{
    if(a==b)
        return 0;
    while(a != b)
    {
        int m=0;
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
}



main()

{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        float a, b, c;
        cin>>a>>b>>c;

        int result = countwater(a,b,c);
        cout<<result<<endl;
    }
}
