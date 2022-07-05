/*
 * @Author: 残月溪冰 yangshuo2018@foxmail.com
 * @Date: 2022-07-05 21:12:37
 * @LastEditors: 残月溪冰 yangshuo2018@foxmail.com
 * @LastEditTime: 2022-07-05 22:30:43
 * @FilePath: /gxl-groups.github.io/CG/GAMES101/PA/pa0/main.cpp
 * @Description: GAMES101 PA0 
 * 
 * Copyright (c) 2022 by 残月溪冰 yangshuo2018@foxmail.com, All Rights Reserved. 
 */
#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>
using namespace std;
using namespace Eigen;
double const kdPi = acos(-1);

int main(int argc, char** argv){
    Vector3d p {2, 1, 1};
    cout << "p is (" << p.transpose() << ")" << endl;
    double theta = kdPi / 4;
    MatrixXd rotation { {cos(theta), -sin(theta), 0},
                    {sin(theta), cos(theta), 0},
                    {0, 0, 1}};
    MatrixXd translation { {1, 0, 1}, {0, 1, 2}, {0, 0, 1}};
    MatrixXd transformation = translation * rotation;
    Vector3d result = transformation * p;
    cout << "After transformation: " << result.transpose() << endl;
    return 0;
}