/* Copyright (C) 2020 Prof. Dr. Christian Pfitzner - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license, which unfortunately won't be
 * written for another century.
 */




#if !defined(ROBOUTILS_TYPES)
#define ROBOUTILS_TYPES


#include <Eigen/Dense>

#include <vector>



enum class Axis
{
  X, Y, Z 
}; 

using Point2D      = Eigen::Vector2d; 
using Point3D      = Eigen::Vector3d; 

using PointCloud2D = std::vector<Point2D>; 
using PointCloud3D = std::vector<Point3D>; 

using RotMat2D     = Eigen::Matrix2d; 
using RotMat3D     = Eigen::Matrix3d; 



#endif // ROBOUTILS_TYPES





