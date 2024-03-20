#include<bits/stdc++.h>
using namespace std;
#define tolerence 0.0001

class Falsi
{
    private:

    double a,b;
    double function(double x)
    {
        return x*x*x + x*x -1;
    }
    double falsi(double a, double b)
    {
        return ((b*function(a)-a*function(b))/(function(a)-function(b)));
    }
    public:
    double root;
    int iteartion = 1;
    void solve()
    {
        while(true)
        {
            a=-9+rand()%10;
            b=rand()%10;
            if(function(a)*function(b)<0.0) break;
        }

        while(true)
        {
            root=falsi(a,b);
            cout<<"root at iteration "<<iteartion++<< " : "<<root<<endl;
            if(function(root)==0.0) break;
            if(function(root)*function(a)<0.0) b=root;
            else a = root;
            double ep_a = abs((falsi(a,b)-root)/root);
            if(ep_a < tolerence) break;
        }
        cout<<"the apprx. root is : "<<root<<endl;
    }

};
int main()
{
    Falsi false_position = Falsi();
    false_position.solve();

    return 0;
}