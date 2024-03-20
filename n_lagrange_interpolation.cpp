#include<bits/stdc++.h>
using namespace std;
class Lagrange
{
    public:
    void solve()
    {
        double x[100], y[100], xp, yp=0.0, p;
        cout<<"enter number of data : "<<endl;
        int n;
        cin>>n;
        cout<<"\n enter data : "<<endl;

        for(int i=0; i<n; i++)
        {
            cout<<"x["<< i <<"] =";
            cin>>x[i];
            cout<<"y["<< i <<"] =";
            cin>>y[i];
        }
        cout<<"enter interpolation point : "<<endl;
        cin>>xp;

        for(int i=0; i<n; i++)
        {
            p=1;
            for(int j=0; j<n; j++)
            {
                if(j!=i)
                {
                    p=p*(xp-x[j])/(x[i]-x[j]);
                }
            }
            yp+=(y[i]*p);
        }
        cout<<"\n\ninterpolated value at" <<xp<<" is "<<yp<<endl;

    }
};
int main()
{
    Lagrange lagrange;
    lagrange.solve();
    return 0;
}
