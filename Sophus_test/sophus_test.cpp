#include <iostream>
#include <cmath>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Geometry>
#include "/home/deforest/Sophus/sophus/so3.hpp"
#include "/home/deforest/Sophus/sophus/se3.hpp"

using namespace std;

int main()
{
    Eigen::Matrix3d R = Eigen::AngleAxisd(M_PI/2, Eigen::Vector3d(0,0,1)).toRotationMatrix();

    Eigen::Quaterniond q(R);
    Sophus::SO3d SO3_q(q);

    cout << "SO(3) from quaternion:" << endl;
    cout << SO3_q.log() << endl;
}