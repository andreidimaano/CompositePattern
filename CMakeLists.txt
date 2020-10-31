CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)


SET(CMAKE_CXX_STANDARD 11)


ADD_EXECUTABLE(test
        unit_test.cpp	
	      sub.cpp
        unit_test.cpp
        rand.cpp
        op.cpp
        add.cpp
        mult.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
