# CMake minimum version required
cmake_minimum_required(VERSION 3.12)

# Project name
project(GenoInsight)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Find Qt5 package
find_package(Qt5 COMPONENTS Widgets REQUIRED)

# Include directories
include_directories(include)

# Add source files
set(SOURCES
    src/main.cpp
    src/gui/MainWindow.cpp
    src/gui/UploadWidget.cpp
    src/gui/VisualizationWidget.cpp
    src/gui/AnalysisWidget.cpp
    src/gui/RecommendationWidget.cpp
    src/logic/GenomicDataAnalyzer.cpp
    src/logic/RecommendationEngine.cpp
    src/scripts/GenomicDataUploader.py
)

# Create executable
add_executable(GenoInsight ${SOURCES})

# Link Qt5 libraries
target_link_libraries(GenoInsight Qt5::Widgets)

# Installation
install(TARGETS GenoInsight DESTINATION bin)
