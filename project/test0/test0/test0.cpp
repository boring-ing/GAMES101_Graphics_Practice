#include<cmath>
#include<Eigen/Core>
#include<Eigen/Dense>
#include<iostream>
#include<def.h>

int main()
{

    // Basic Example of cpp
    std::cout << "Example of cpp \n";
    float a = 1.0, b = 2.0;
    std::cout << a << std::endl;
    std::cout << a / b << std::endl;
    std::cout << std::sqrt(b) << std::endl;
    std::cout << std::acos(-1) << std::endl;
    std::cout << std::sin(30.0 / 180.0 * acos(-1)) << std::endl;

    // Example of vector
    std::cout << "Example of vector \n";
    // vector definition
    Eigen::Vector3f v(1.0f, 2.0f, 3.0f);
    Eigen::Vector3f w(1.0f, 0.0f, 0.0f);
    // vector output
    std::cout << "Example of output \n";
    std::cout << v << std::endl;
    // vector add
    std::cout << "�����ӷ� \n";
    std::cout << v + w << std::endl;
    // vector scalar multiply
    std::cout << "����1 \n";
    std::cout << v * 3.0f << std::endl;
    std::cout << "����2 \n";
    std::cout << 2.0f * v << std::endl;

    //std::cout << "�������v��w�ĳ˻� \n";
    //std::cout << w * v << std::endl;

    // Example of matrix
    std::cout << "Example of matrix \n";
    // matrix definition
    Eigen::Matrix3f i, j;
    i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
    j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
    // matrix output
    std::cout << "����i��� \n";
    std::cout << i << std::endl;

    std::cout << "����j��� \n";
    std::cout << j << std::endl;
    // matrix add i + j
    std::cout << "����i + j��� \n";
    std::cout << i + j << std::endl;
    // matrix scalar multiply i * 2.0
    std::cout << "����i  * 2��� \n";
    std::cout << i * 2 << std::endl;
    // matrix multiply i * j
    std::cout << "����i  * j��� \n";
    std::cout << i * j << std::endl;

    std::cout << "����j  * i��� \n";
    std::cout << j * i << std::endl;
    // matrix multiply vector i * v

    std::cout << "����i * v��� \n";
    std::cout << i * v << std::endl;


    Eigen::Matrix3d testMatrix3d;
    double cita = 30;
    testMatrix3d << sin(cita), sin(cita), sin(cita), sin(cita), sin(cita), sin(cita), sin(cita), sin(cita), sin(cita);

    std::cout << "���Ծ������" << std::endl;

    std::cout << testMatrix3d << std::endl;

    std::cout << "sin30Ϊ��" << sin(cita / 180.0 * PI) << std::endl;


    Eigen::Vector2i PointP(2, 1);
    
    std::cout << "���Ե����P" << std::endl;

    std::cout << PointP.x() << std::endl;


    //����Ϊtest0��������
    Eigen::Vector2i MoveVector(1, 2);

    Eigen::Matrix3d TransMatrix2D;

    Eigen::Vector3d InPos(2,1,1);
    Eigen::Vector3d FinPos;

    cita = 45;

    TransMatrix2D << cos(cita / 180.0 * PI), -1 * sin(cita / 180.0 * PI), MoveVector.x(),
        sin(cita / 180.0 * PI), cos(cita / 180.0 * PI), MoveVector.y(),
        0, 0, 1;

    std::cout << "�任�������" << std::endl;

    std::cout << TransMatrix2D << std::endl;

    FinPos = TransMatrix2D * InPos;

    std::cout << "���յ�λ���" << std::endl;

    std::cout << FinPos << std::endl;
                     

    ///asdsad

    return 0;
}