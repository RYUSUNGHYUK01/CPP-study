#include<iostream>
#include<cmath>
using namespace std;
/*Ŭ���� ����*/
class Line
{
    public:
        int sx, sy=0;
        int ex, ey=0;
        Line();
        void setTowpoint();
        double getLineLength(); 
};
/*Ŭ���� ������*/
Line::Line()
{

}

void Line::setTowpoint()
{
    cout<<"������ ��ǥ ���� �� ��ň �Է��ϼ���."<<endl;
    cin>>sx>>sy;
    cout<<"���� ��ǥ ���� �� ���� �Է��ϼ���."<<endl;
    cin>>ex>>ey;
}

double Line::getLineLength()
{
    return sqrt(pow(ex-sx,2)+pow(ey-sy,2));
}

int main()
{
    Line myline;
    myline.setTowpoint();
    cout<<"myline�� ���̴� "<<myline.getLineLength()<<" �Դϴ�."<<endl;
}
