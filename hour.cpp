#include<iostream>
using namespace std;

class ConvertSecond
{
    private:
        int hour;
        int minute;
        int second;
    public:
        ConvertSecond();
        void setData();
        int getResult();
};

ConvertSecond::ConvertSecond()
{
    int hour, minue, second=0;
}

void ConvertSecond::setData()
{
    cout<<"��(hour)�Է�: ";
    cin>>hour;
    cout<<"��(minute)�Է�: ";
    cin>>minute;
    cout<<"��(second)�Է�: ";
    cin>>second;
}

int ConvertSecond::getResult()
{
    return (hour*3600)+(minute*60)+second;
}

int main()
{
    ConvertSecond a;
    a.setData();
    cout<<"�Է��Ͻ� �ð��� �� "<<a.getResult()<<" �� �Դϴ�."<<endl;

    ConvertSecond b;
    b.setData();
    cout<<"�⺻ �ð��� �� "<<b.getResult()<<" �� �Դϴ�."<<endl;
}