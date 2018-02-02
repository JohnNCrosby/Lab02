#include <iostream>

using namespace std;

int main()
{
    int x, y;
    y = 0;
    x = 0;
    cin>>x;
    do    
    {
        if(x %2 == 0)
        {
          
        }
        else
        {
            y = 1;
        }
    } while(cin>>x);   

    if(y == 1)
    {
        cerr<<"not all even"<<endl;
        return 1;
    }
    if(y == 0)
    {
        cout<<"all even"<<endl;
        return 0;
    }
}
