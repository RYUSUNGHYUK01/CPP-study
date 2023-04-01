#include<iostream>
#include<cmath>
using namespace std;
/*클래스 선언*/
class Line
{
    public:
        int sx, sy=0;
        int ex, ey=0;
        Line();
        void setTowpoint();
        double getLineLength(); 
};
/*클래스 구현부*/
Line::Line()
{

}

void Line::setTowpoint()
{
    cout<<"시작점 좌표 정수 두 개흫 입력하세요."<<endl;
    cin>>sx>>sy;
    cout<<"끝점 좌표 정수 두 개를 입력하세요."<<endl;
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
    cout<<"myline의 길이는 "<<myline.getLineLength()<<" 입니다."<<endl;
}
