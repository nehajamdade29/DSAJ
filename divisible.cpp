// divisible by 3
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=10;i++)
//     {
//         if(i%3==0){
//         cout<<i<<endl;
//         }
//     }
// }

// divisible by 3 n 5
#include<iostream>
using namespace std;
int main()
{
    int a=120;
    if(a%3==0 && a%5==0)
    {
        cout<<"it is divisible by both";
    }
else
{
    cout<<"not divisible";
}
}