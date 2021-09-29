#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
int num;
float sum;
int chance;
int a;
int b;
int ek;
int i, j;
float r,h,l,s;
int result;
float w;
float pi=3.14159;
float ans;
int mat1[1100][100], mat2[100][100], rmat[100][100];
int ch, ch1, ch2;
class basic_operator
{
    public:
    void add()
    {
       cout<<"How many number addition you want to do ";
                    cin>>chance;
                    for(i=0;i<chance;i++)
                    {
                        cout<<"Enter Number ";
                        cin>>num;
                        sum=sum+num;
                    }
                    cout<<"Addition= "<<sum<<endl;
    }
    void subtraction()
    {

                    cout<<"How many number subtraction you want to do";
                    cin>>chance;
                    cout<<"Enter number 1 : "<<endl;
                     cin>>ek;
                     sum=ek;
                    for(i=1;i<chance;i++)
                    {
                        cout<<"Enter Number "<<i+1<<endl;
                        cin>>num;
                        sum=sum-num;
                    }
                    cout<<"subtraction= "<<sum<<endl;
    }
    void multiplication()
    {

                    cout<<"How many number multiplication you want to do";
                    cin>>chance;
                    cout<<"Enter number 1 : "<<endl;
                     cin>>ek;
                     sum=ek;
                    for(i=1;i<chance;i++)
                    {
                        cout<<"Enter Number"<<i+1<<endl;
                        cin>>num;
                        sum=sum*num;
                    }
                    cout<<"multiplication= "<<sum<<endl;
    }

    void divide()
    {

                    cout<<"How many number division you want to do";
                    cin>>chance;
                    cout<<"Enter number 1 : "<<endl;
                     cin>>ek;
                     sum=ek;
                    for(i=1;i<chance;i++)
                    {
                        cout<<"Enter Number"<<i+1<<endl;
                        cin>>num;
                        sum=sum/num;
                    }
                    cout<<"division="<<sum<<endl;
    }
    void mod()
    {
        cout<<"Enter numerator"<<endl;
        cin>>a;
        cout<<"Enter denominator"<<endl;
        cin>>b;
        result=a%b;
        cout<<"Result is "<<result<<endl;
    }

};
class adv_operator
{
public:
    float result;
    public:
    void exponent()
    {

                    cout<<"Enter base: ";
                    cin>>a;
                    cout<<"Enter exponent: ";
                    cin>>b;
                    result = pow(a, b);
                    cout << a << "^" << b << " = " << result<<endl;
    }




                void sqroot()
                {
                    cout<<"Enter the number you want square root of: ";
                    cin>>a;
                    result = sqrt(a);
                    cout<<"Result is "<<result<<endl;

                }

                 void ident1()
                 {
                    cout<<"Enter a: ";
                    cin>> a;
                    cout<<"Enter b: ";
                    cin>> b;
                     result=a*a + 2*a*b + b*b;
                    cout<<"Result is "<<result<<endl;

                 }

                void ident2()
                {
                    cout<<"Enter a: ";
                    cin>> a;
                    cout<<"Enter b: ";
                    cin>> b;
                     result=a*a*a + b*b*b + 3*a*a*b + 3*a*b*b;
                    cout<<"Result is "<<result<<endl;

                }
                void ident3()
                {
                    cout<<"enter a"<<endl;
                    cin>>a;
                    cout<<"enter b"<<endl;
                    cin>>b;
                    result=(a*a)-(2*a*b)+(b*b);
                    cout<<"Result is "<<result<<endl;

                }
                void ident4()
                {

                    cout<<"enter a"<<endl;
                    cin>>a;
                    cout<<"enter b"<<endl;
                    cin>>b;
                    result=(a*a*a)-(3*a*a*b)+(3*a*b*b)-(b*b*b);
                    cout<<"Result is "<<result<<endl;


                }

};

class area
{
    public:
    void circle()
    {
        cout<<"Please enter radius"<<endl;
        cin>>r;
        ans=pi*r*r;
        cout<<"Area of circle is "<<ans<<endl;


    }
    void square()
    {
        cout<<"Please enter length of square"<<endl;
        cin>>l;
        ans=l*l;
        cout<<"area of square is = "<<ans<<endl;
    }
    void triangle()
    {
        cout<<"Please enter height of triangle"<<endl;
        cin>>h;
        cout<<"Please enter breadth of triangle"<<endl;
        cin>>w;
        ans=0.5*h*w;
        cout<<"Area of triangle is = "<<ans<<endl;
    }
    void rectangle()
    {
        cout<<"Please enter length of rectangle"<<endl;
        cin>>l;
        cout<<"Please enter width of rectangle"<<endl;
        cin>>w;
        ans=l*w;
        cout<<"Area of rectangle is = "<<ans<<endl;
    }
    void parallelogram()
    {
        cout<<"enter value for base "<<endl;
        cin>>w;
        cout<<"enter value for height "<<endl;
        cin>>h;
        ans=w*h;
        cout<<"Area of parellelogram is = "<<ans<<endl;

    }

    void rhombus()
    {
        cout<<"enter diagonal 1 "<<endl;
        cin>>l;
        cout<<"enter diagonal 2"<<endl;
        cin>>w;
        ans=(l*w)/2;
        cout<<"Area of rhombus is = "<<ans<<endl;
    }
    void semicircle()
    {
        cout<<"enter radius for semicircle"<<endl;
        cin>>r;
        ans=(pi*r*r)/2;
        cout<<"area of semicircle is = "<<ans<<endl;
    }
};
float vol;
class volume
{
    public:

    void Vcone()
    {
    cout<<"enter radius"<<endl;
    cin>>r;
    cout<<"enter height"<<endl;
    cin>>h;
    vol=1/3*(3.14*r*r*h);
    }

    void Vsphere()
    {
    cout<<"enter radius"<<endl;
    cin>>r;
    vol=4/3*(3.14*r*r*r);
    }

    void Vcube()
    {
    cout<<"enter side"<<endl;
    cin>>s;
    vol=s*s*s;
    }

    void Vcuboid()
    {
    cout<<"enter length"<<endl;
    cin>>l;
    cout<<"enter breadth"<<endl;
    cin>>b;
    cout<<"enter height"<<endl;
    cin>>h;
    vol=l*b*h;
    }

    void Vhemisphere()
    {
    cout<<"enter radius"<<endl;
    cin>>r;
    vol=2/3*(3.14*r*r*r);
    }

    void Vcylinder()
    {
    cout<<"enter radius"<<endl;
    cin>>r;
    cout<<"enter height"<<endl;
    cin>>h;
    vol=3.14*r*r*h;
    }
};
class surface_area
{
public:
    void SACone()
    {
        cout<<"Enter radius of bass"<<endl;
        cin>>r;
        cout<<"Enter height of the cone"<<endl;
        cin>>h;
        result = pi*r*(r+sqrt(h*h+r*r));
        cout<<"Result is "<<result<<endl;

    }
    void SASphere()
    {
        cout<<"Enter radius of the sphere"<<endl;
        cin>>r;
        result= pi*r*r*4;
        cout<<"Result is "<<result<<endl;
    }
    void SACube()
    {
        cout<<"Enter the length of side "<<endl;
        cin>>a;
        result = 6*a*a;
        cout<<"Result is "<<result<<endl;
    }
    void SACuboid()
    {
        cout<<"Enter length "<<endl;
        cin>>l;
        cout<<"Enter breadth "<<endl;
        cin>>b;
        cout<<"Enter height "<<endl;
        cin>>h;
        result = 2*(b*h+h*l+b*l);
        cout<<"Result is "<<result<<endl;
    }
    void SAHemisphere()
    {
        cout<<"Enter radius of the hemisphere"<<endl;
        cin>>r;
        result= pi*r*r*2;
        cout<<"Result (without base) is "<<result<<endl;
        ans =pi*r*r*3;
        cout<<"Result (with base) is "<<ans<<endl;
    }
    void SACylinder()
    {
        cout<<"Enter radius of the base"<<endl;
        cin>>r;
        cout<<"Enter height of the cylinder"<<endl;
        cin>>h;
        result = 2*pi*r*h+2*pi*r*r;
        cout<<"Result is "<<result<<endl;
    }
};
class matrix
{
public:
    void addmat()
    {
        cout<<"Enter the number of rows of the matrices"<<endl;
        cin>>a;
        cout<<"Enter the number of columns of the matrices"<<endl;
        cin>>b;
        cout<<"For the first matrix: "<<endl;
        for (i=0;i<a;i++)
        {
            for (j=0;j<b;j++)
            {
                cout<<"Enter the element "<<endl;
                cin>>mat1[i][j];
            }
        }
        cout<<"For the second matrix: "<<endl;
        for (i=0;i<a;i++)
        {
            for (j=0;j<b;j++)
            {
                cout<<"Enter the element "<<endl;
                cin>>mat2[i][j];
            }
        }
        for (i=0;i<a;i++)
        {
            for (j=0;j<b;j++)
            {
                rmat[i][j] = mat1[i][j]+mat2[i][j];
            }
        }
        cout<<"After addition, matrix is:"<<endl;
        for (i=0;i<a;i++)
        {
            for (j=0;j<b;j++)
            {
                cout<<rmat[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    void submat()
    {
        cout<<"Enter the number of rows of the matrices"<<endl;
        cin>>a;
        cout<<"Enter the number of columns of the matrices"<<endl;
        cin>>b;
        cout<<"For the first matrix: "<<endl;
        for (i=0;i<a;i++)
        {
            for (j=0;j<b;j++)
            {
                cout<<"Enter the element "<<endl;
                cin>>mat1[i][j];
            }
        }
        cout<<"For the second matrix: "<<endl;
        for (i=0;i<a;i++)
        {
            for (j=0;j<b;j++)
            {
                cout<<"Enter the element "<<endl;
                cin>>mat2[i][j];
            }
        }
        for (i=0;i<a;i++)
        {
            for (j=0;j<b;j++)
            {
                rmat[i][j] = mat1[i][j]-mat2[i][j];
            }
        }
        cout<<"After subtraction, matrix is:"<<endl;
        for (i=0;i<a;i++)
        {
            for (j=0;j<b;j++)
            {
                cout<<rmat[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
};
int main()
{
    basic_operator obj1;
    adv_operator obj2;
    area obj3;
    volume obj4;
    surface_area obj5;
    matrix obj6;


    cout<<"****Welcome to our calculator!!****"<<endl;
    do
    {
    cout<<"What do you want to do?"<<endl<<"To view index, press 1"<<endl<<"To carry out basic functions, press 2"<<endl<<"To carry out advanced functions, press 3"<<endl<<"To find areas of 2D shapes, press 4"<<endl<<"To find volume of 3D figures, press 5"<<endl<<"To find surface areas of 3D figures, press 6"<<endl<<"To carry out matrix calculations, press 7"<<endl<<"To exit, press 8"<<endl;
    cin>>ch;
    switch (ch)
    {
        case 1:
            cout<<"***BASIC FUNCTIONS***"<<endl<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl<<"5. Modulus"<<endl;
            cout<<"***ADVANCED FUNCTIONS***"<<endl<<"1. Square root"<<endl<<"2. Exponent"<<endl<<"3. (A+B)^2"<<endl<<"4. (A+B)^3"<<endl<<"5. (A-B)^2"<<endl<<"6. (A-B)^3"<<endl;
            cout<<"***AREAS***"<<endl<<"1. Circle"<<endl<<"2. Square"<<endl<<"3. Triangle"<<endl<<"4. Parallelogram"<<endl<<"5. Rectangle"<<endl<<"6. Rhombus"<<endl;
            cout<<"***VOLUMES***"<<endl<<"1. Cone"<<endl<<"2. Sphere"<<endl<<"3. Cube"<<endl<<"4. Cuboid"<<endl<<"5. Hemisphere"<<endl<<"6. Cylinder"<<endl;
            cout<<"***SURFACE AREAS***"<<endl<<"1. Cone"<<endl<<"2. Sphere"<<endl<<"3. Cube"<<endl<<"4. Cuboid"<<endl<<"5. Hemisphere"<<endl<<"6. Cylinder"<<endl;
            cout<<"***MATRIX CALCULATIONS***"<<endl<<"1. Addition"<<endl<<"2. Subtraction"<<endl;
            break;
        case 2:
            do
            {
                cout<<"***BASIC FUNCTIONS***"<<endl<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl<<"5. Modulus"<<endl;
            cout<<"Which function would you like to carry out? (to go back, press 6)"<<endl;
            cin>>ch2;
            switch (ch2)
                {
                    case 1:
                        obj1.add();
                        break;
                    case 2:
                        obj1.subtraction();
                        break;
                    case 3:
                        obj1.multiplication();
                        break;
                    case 4:
                        obj1.divide();
                        break;
                    case 5:
                        obj1.mod();
                        break;
                    case 6:
                        cout<<"Loop exited."<<endl;
                        break;
                    default:
                        cout<<"Enter valid choice"<<endl;
                        break;
                }
            }while (ch2!=6);
            break;
        case 3:
            do
            {
            cout<<"***ADVANCED FUNCTIONS***"<<endl<<"1. Square root"<<endl<<"2. Exponent"<<endl<<"3. (A+B)^2"<<endl<<"4. (A+B)^3"<<endl<<"5. (A-B)^2"<<endl<<"6. (A-B)^3"<<endl;
            cout<<"Which function would you like to carry out? (to go back, press 7)"<<endl;
            cin>>ch2;
            switch (ch2)
                {
                    case 1:
                        obj2.sqroot();
                        break;
                    case 2:
                        obj2.exponent();
                        break;
                    case 3:
                        obj2.ident1();
                        break;
                    case 4:
                        obj2.ident3();
                        break;
                    case 5:
                        obj2.ident2();
                        break;
                    case 6:
                        obj2.ident4();
                    case 7:
                        cout<<"Loop exited."<<endl;
                        break;
                    default:
                        cout<<"Enter valid choice"<<endl;
                        break;
                }
            }while (ch2!=7);
            break;
        case 4:
            do
            {
            cout<<"***AREAS***"<<endl<<"1. Circle"<<endl<<"2. Square"<<endl<<"3. Triangle"<<endl<<"4. Parallelogram"<<endl<<"5. Rectangle"<<endl<<"6. Rhombus"<<endl;
            cout<<"Which function would you like to carry out? (to go back, press 7)"<<endl;
            cin>>ch2;
            switch (ch2)
                {
                    case 1:
                        obj3.circle();;
                        break;
                    case 2:
                        obj3.square();
                        break;
                    case 3:
                        obj3.triangle();
                        break;
                    case 4:
                        obj3.parallelogram();
                        break;
                    case 5:
                        obj3.rectangle();
                        break;
                    case 6:
                        obj3.rhombus();
                    case 7:
                        cout<<"Loop exited."<<endl;
                        break;
                    default:
                        cout<<"Enter valid choice"<<endl;
                        break;
                }
            }while (ch2!=7);
            break;
        case 5:
            do
            {
                cout<<"***VOLUMES***"<<endl<<"1. Cone"<<endl<<"2. Sphere"<<endl<<"3. Cube"<<endl<<"4. Cuboid"<<endl<<"5. Hemisphere"<<endl<<"6. Cylinder"<<endl;
                cout<<"Which function would you like to carry out? (to go back, press 7)"<<endl;
                cin>>ch2;
                switch (ch2)
                {
                    case 1:
                        obj4.Vcone();
                        break;
                    case 2:
                        obj4.Vsphere();
                        break;
                    case 3:
                        obj4.Vcube();
                        break;
                    case 4:
                        obj4.Vcuboid();
                        break;
                    case 5:
                        obj4.Vhemisphere();
                        break;
                    case 6:
                        obj4.Vcylinder();
                    case 7:
                        cout<<"Loop exited."<<endl;
                        break;
                    default:
                        cout<<"Enter valid choice"<<endl;
                        break;
                }
            }while (ch2!=7);
            break;
        case 6:
            do
            {
                cout<<"***SURFACE AREAS***"<<endl<<"1. Cone"<<endl<<"2. Sphere"<<endl<<"3. Cube"<<endl<<"4. Cuboid"<<endl<<"5. Hemisphere"<<endl<<"6. Cylinder"<<endl;
                cout<<"Which function would you like to carry out? (to go back, press 7)"<<endl;
                cin>>ch2;
                switch (ch2)
                {
                    case 1:
                        obj5.SACone();
                        break;
                    case 2:
                        obj5.SASphere();
                        break;
                    case 3:
                        obj5.SACube();
                        break;
                    case 4:
                        obj5.SACuboid();
                        break;
                    case 5:
                        obj5.SAHemisphere();
                        break;
                    case 6:
                        obj5.SACylinder();
                    case 7:
                        cout<<"Loop exited."<<endl;
                        break;
                    default:
                        cout<<"Enter valid choice"<<endl;
                        break;
                }
            }while (ch2!=7);
            break;
        case 7:
            do
            {
                cout<<"***MATRIX CALCULATIONS***"<<endl<<"1. Addition"<<endl<<"2. Subtraction"<<endl;
                cout<<"Which function would you like to carry out? (to go back, press 3)"<<endl;
                cin>>ch2;
                switch (ch2)
                {
                    case 1:
                        obj6.addmat();
                        break;
                    case 2:
                        obj6.submat();
                        break;
                    default:
                        cout<<"Enter valid choice"<<endl;
                        break;
                }
            }while (ch2!=3);
            break;
        case 8:
            cout<<"Thank you for using our Calculator!!!"<<endl;
            exit(0);
            default:
            cout<<"Enter valid choice"<<endl;
            break;
    }
    }while (ch!=8);
}
