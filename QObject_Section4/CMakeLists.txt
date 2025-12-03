cmake_minimum_required(VERSION 3.16)

project(QObject_Section4 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Core)

add_executable(QObject_Section4
  main.cpp
  myqobject1.h myqobject1.cpp
  myqobject2.h myqobject2.cpp
)

target_link_libraries(QObject_Section4 Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS QObject_Section4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
