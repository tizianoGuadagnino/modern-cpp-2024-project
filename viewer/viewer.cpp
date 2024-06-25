#include "viewer.hpp"
#include <algorithm>
#include <open3d/Open3D.h>
#include <utility>
#include <vector>

void viewCloud(const std::vector<Eigen::Vector2d> &pcd) {
  std::vector<Eigen::Vector3d> pts(pcd.size());
  std::transform(pcd.cbegin(), pcd.cend(), pts.begin(), [](const auto &p) {
    return Eigen::Vector3d(p.x(), p.y(), 0.0);
  });
  open3d::visualization::DrawGeometries(
      {std::make_shared<open3d::geometry::PointCloud>(pts)});
}
