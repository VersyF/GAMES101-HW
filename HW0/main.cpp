#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>


int main(){
    //const
    const double PI = 3.14159265358979323846;
    float theta = 45.0f;
    theta = theta * PI / 180.0f;

    //Cordinate
    Eigen::Vector3f p (2.0f, 1.0f, 1.0f);

    Eigen::Matrix3f m, n;
    m << std::cos(theta), -std::sin(theta), 0,
         std::sin(theta), std::cos(theta) , 0,
         0              , 0               , 1;

    n << 1, 0, 1,
         0, 1, 2,
         0, 0, 1;

    Eigen::Vector3f q = n * (m * p);
    
    std::cout << "P(2,1),绕原点旋转45度，再平移(1, 2)：" << std::endl;
    std::cout << "得到Q(" << q.x() << "," << q.y() << ")" << std::endl;
    return 0;
}