#include <iostream>

using namespace std;

float area(int radius)
{
    cout<<"Area of Circle is "<<(radius*radius*3.14);
}
int area(int length, int breadth)
{
    cout<<"Area of Rectangle is "<<(length*breadth);
}
double area(double height,double base)
{
    cout<<"Area of Triangle is "<<(height*base*0.5);
}
int main()
{
    while (1)
    {

    int choice,radius,length,breadth;
    double height,base;
    cout << " \nArea of different Shapes" << endl;
    cout << " 1. Circle" << endl;
    cout << " 2. Rectangle" << endl;
    cout << " 3. Right Triangle" << endl;
    cout << " 4. Exit" << endl;
    cout << " Enter your Choice : ";
    cin >> choice;
    switch(choice)
    {
        case 1:cout<<"Enter the Radius of Circle : ";
                cin>>radius;
               area(radius);
               break;
        case 2:cout<<"Enter the Length of Rectangle : ";
                cin>>length;
                cout<<"Enter the Breadth of Rectangle : ";
                cin>>breadth;
            area(length,breadth);
            break;
        case 3:cout<<"Enter the Height of Triangle : ";
                cin>>height;
                cout<<"Enter the base of Triangle : ";
                cin>>base;
                area(height,base);
                break;
        case 4:break;
        default:cout<<"Invalid Response";
    }
    if(choice==4)
    {
        break;
    }
    }

    return 0;
}
