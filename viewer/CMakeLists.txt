add_library(viewer STATIC viewer.cpp)
target_link_libraries(viewer PUBLIC Open3D::Open3D)
target_include_directories(viewer PUBLIC ${PROJECT_SOURCE_DIR}/open3d)
