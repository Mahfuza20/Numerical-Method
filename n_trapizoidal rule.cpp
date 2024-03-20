#include<bits/stdc++.h>
using namespace std;
class Trapizoidal
{
    public:
    double function(double x)
    {
        return (sqrt(x*x+1));
    }
    double a, b, n, h;
    Trapizoidal()
    {
        cout<<"enter lower limit : "<<endl;
        cin>>a;
        cout<<"enter upper limit : "<<endl;
        cin>>b;
        cout<<"enter sub-interval : "<<endl;
        cin>>n;

    }
    void solve()
    {
        h=(b-a)/n;
        double i_val = function(a);
        for(int i=1; i<n; i++)
        {
            double x=a+i*h;
            i_val+=2*function(x);
        }
        i_val += function(b);

        i_val = (i_val * h) / 2;

        cout<< endl << "Required value of integration is: " << i_val;
    }
};
int main()
{
    Trapizoidal trapizoidal;
    trapizoidal.solve();
    return 0;
}
