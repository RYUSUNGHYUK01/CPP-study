#include<iostream>
#include<cmath>
using namespace std;

class Line
{
  public:
    int sx, sy=0;
    int ex, ey=0;
    
};

int main()
{
    Line myline;

    cout << "������ ��ǥ ���� �� ���� �Է��ϼ���."<<endl;
    cin >> myline.sx >> myline.sy;
    cout << "���� ��ǥ ���� �� ���� �Է��ϼ���."<<endl;
    cin >> myline.ex >> myline.ey;

    double d = sqrt(pow(myline.ex - myline.sx, 2) + pow(myline.ey - myline.sy, 2));
    cout<<"myline�� ���̴� "<<d<<" �Դϴ�.";
}