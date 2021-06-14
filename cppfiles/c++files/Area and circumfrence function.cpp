#include<iostream>
using namespace std;
float area(float);
float circum(float);

float area(float radius)
{
        return (3.142 * radius * radius);
}
float circum(float radius)
{
        return(2 * 3.142 * radius);
}

int main()
{
        int radius;   
        cout<<"\n Enter Radius of Circle: ";
        cin>>radius;
        cout<<"\n Area of Circle : "<<area(radius);
        cout<<"\n Circumference of Circle : "<<circum(radius);
}



