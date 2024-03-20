#include<bits/stdc++.h>
using namespace std;
#define ep_s 0.0001

class Bisection
{
    private:
    double a,b;
    double function(double x)
    {
        return x*x*x + x*x -1;
    }
    public:
    void solve()
    {
        while(true)
        {
            a=-9+rand()%10;
            b=rand()%10;
            if(function(a)*function(b)<0.0) break;
        }
        if(a<b) swap(a,b);
        cout<<"a :"<< a <<"b :"<< b <<endl;

        double root =(a+b)/2;
        double prev_root = root;

        int iteration = 1;

        while(true)
        {
            double clac = function(root)*function(a);

            if(clac>0.0) a=root;
            else if(clac<0.0) b=root;
            else break;

            root=(a+b)/2;

            double ep_a = abs((root - prev_root)/root);
            if(ep_a<ep_s) break;

            prev_root = root;

            cout<<"root at iteration "<<iteration++<<" : "<<root<<endl;
            cout<<"a = "<<a<<"    b= "<<b<<endl;

        }
        cout<<"the root is : "<<root<<endl;
        cout<<"total iteration number : "<<iteration<<endl;
    }
};
int main()
{
    Bisection bisect = Bisection();
    bisect.solve();
    return 0;
}
