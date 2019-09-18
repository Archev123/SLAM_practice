#include <iostream>
#include <ctime>
#include <eigen3/Eigen/Core> 
#include <eigen3/Eigen/Dense>

#define MATRIX_SIZE=30

using namespace std;

int main()
{
    Eigen::Matrix<float, 2, 3> matrix_23;
    Eigen::Vector3d v_3d;
    Eigen::Matrix3d matrix_33 = Eigen::Matrix3d::Zero();
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> matrix_dynamic;

    matrix_23 << 1, 2, 3, 4, 5, 6;
    cout << "matrix_23: " << matrix_23 << endl;

    for (int i = 0; i<2; i++){
        for(int j=0; j<3; j++){
            cout << "matrix_" << i << j << ": " << matrix_23(i, j) << endl;
        }
    }

    return 0;
}