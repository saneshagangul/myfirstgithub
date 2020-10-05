#include<iostream>

using namespace std;
float averageCalculator(float a,float b,float c);
void resultSheet(string w,float a,float b,float c,float average);

int main()
{

    int recall;
    do
    {
        float a;
        float b;
        float c;
        float saverage;
        string w;

cout<<"Enter the name:";
cin>>w;

cout<<"Enter Maths marks:";
cin>>a;


cout<<"Enter Physics marks:";
cin>>b;

cout<<"Enter chemistry marks:";
cin>>c;

cout<<endl;
cout<<endl;



saverage=averageCalculator(a,b,c);
//cout<<"Average is:"<<saverage<<endl;
resultSheet(w,a,b,c,saverage);

     cout<<"1 for continue & 0 for exit:"<<endl;
     cin>>recall;

    }while(recall==1);



return 0;

}

float averageCalculator(float a,float b,float c)
{
    float average=(a+b+c)/3;

    return average;
}

void resultSheet(string w,float a,float b,float c,float average)
{




    cout<<w<<endl;
    cout<<"Maths marks:"<<a<<endl;
    cout<<"Physics marks:"<<b<<endl;
    cout<<"Chemistry marks:"<<c<<endl;
    cout<<"Average marks:"<<average<<endl;
}
