#include <iostream>
using namespace std;
int main() {
  cout<<"problem1"<<endl;
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int sum=a+b+c+d+e;
    cout<<"sum is: "<<sum<<endl;



cout<<"problem2"<<endl;
    int studentid;
    cout<<"Enter Student ID"<<endl;
    cin>>studentid;
    cout<<"Student ID "<<studentid<<endl;
    float studengpa;
    cout<<"Enter GPA"<<endl;
    cin>>studengpa;
    cout<<"student GPA is: ="<<studentid<<endl;
    int yearofstudy;
    cout<<"Enter Year of student"<<endl;
    cin>>yearofstudy;
    cout<<"Year of student is "<<yearofstudy<<endl;
int studentstudyfee;
    cout<<"Enter Year of student is "<<endl;
    cin>>studentstudyfee;
    cout<<"Year of student is "<<studentstudyfee<<endl;



cout<<"problm3"<<endl;
int temperatureincelcius;
    cout << "Enter temperature in celcius: ";
    cin >> temperatureincelcius;
    float temperatureinfahrenhit=(temperatureincelcius*9/5)+32;
    cout<<"temperature in fahrenhit is: "<<temperatureinfahrenhit<<endl;



cout<<"problem4"<<endl;
    double costperitem;
    cout<<"enter the cost of the item"<<endl;
    cin>>costperitem;
    int numberofitems;
    cout<<"enter the number of items"<<endl;
    cin>>numberofitems;
    double totalcost= costperitem*numberofitems;
    cout<<"total cost= "<<totalcost<<endl;


    cout<<"problem5";
    int fatherage;
    cout<<"enter father's age ";
    cin>>fatherage;
    int motherage;
    cout<<"enter mother's age ";
    cin>>motherage;
    int myage;
    cout<<"enter your age";
    cin>>myage;
    int brotherage;
    cout<<"enter brother's age ";
    cin>>brotherage;
    int averageage=(fatherage+motherage+myage+brotherage)/4;
    cout<<"average age for my family  is "<<averageage<<endl;

    cout<<"problem6";
    int length;
    cout<<"enter the length ";
    cin>>length;
    int width;
    cout<<"enter the width ";
    cin>>width;
    int perimeter=2*(length+width);
    cout<<"perimeter="<<perimeter<<endl;
    int area=length*width;
    cout<<"area="<<area<<endl;

    cout<<"problem7";
    int divident;
    cout<<"enter dividend: ";
    cin>>divident;
    int divisor;
    cout<<"enter divisor: ";
    cin>>divisor;
int quotient=divident/divisor;
    int remainder=divident%divisor;
cout<<"quotient: "<<quotient<<endl;
    cout<<"remainder: "<<remainder;

    cout<<"problem8";
    int amountinusd;
    cout<<"enter amount in dollars ";
    cin>>amountinusd;
    int amountinuzb=amountinusd*12500;
    cout<<"amount in UZB is " <<amountinuzb<<endl;

cout<<"problem9"<<endl;
    int radius;
    cout<<"enter radius ";
    cin>>radius;
    double area=3.14*radius*radius;
    cout<<"area is "<<area<<endl;

cout<<"problem10"<<endl;
    int rad;
    cout<<"enter the radius "<<endl;
    cin>>rad;
    int height;
    cout<<"enter the height "<<endl;
    cin>>height;
    double volume = 3.14*rad*height*height;
    cout<<"the volume is "<<volume<<endl;


    cout<<"problemm11"<<endl;
    int distance;
    cout<<" enter a distance ";
    cin>>distance;
    int time;
    cout<<"enter a time ";
    cin>>time;
    double averagespeed=distance/time;
    cout<<"average speed "<<averagespeed<<" miles/hour";

    cout<<"problem12"<<endl;
    int minutes;
    cout<<"Enter minutes: ";
    cin>>minutes;
    int hours=minutes/60;
    int restminutes=minutes-hours*60;
    cout<<"hours: "<<hours<<", "<<restminutes<<" minutes"<<endl;

    cout<<"problem13"<<endl;
    int sppu;
    cout<<"Enter selling price per unit: ";
    cin>>sppu;
    int vcpu;
    cout<<"Enter Variable cost per unit: ";
    cin>>vcpu;
    int bep=10000/(sppu-vcpu);
cout<<"break even point is :"<<bep<<endl;

    cout << "problem 14" << endl;
    int bs;
    cout << "Enter the basic salary: ";
    cin >> bs;
    int ta;
    cout << "Enter the tax amount: ";
    cin >> ta;
    int totalsalary=bs-bs*ta/100;
    cout <<"total salary is "<< totalsalary << endl;


    cout << "problem 15" << endl;
    int originalprice;
    cout << "original price: " ;
    cin >> originalprice;
    int discountpercentage;
    cout << "discount percentage: "  ;
    cin >> discountpercentage;
    int finalprice= originalprice -originalprice*discountpercentage/100;
    cout << "final price: " << finalprice << endl;








    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.