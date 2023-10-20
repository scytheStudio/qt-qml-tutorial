cmake_minimum_required(VERSION 3.14)

project(3-signals-and-slots-in-qt LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(3-signals-and-slots-in-qt
  main.cpp
  UserInteractor.h UserInteractor.cpp
  Firefox.h Firefox.cpp
  InternetExplorer.h InternetExplorer.cpp
)
target_link_libraries(3-signals-and-slots-in-qt Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS 3-signals-and-slots-in-qt
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
