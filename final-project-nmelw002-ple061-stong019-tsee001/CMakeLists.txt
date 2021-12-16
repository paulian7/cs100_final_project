CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(quiz
    ./src/quiz.cpp
    ./src/factory.cpp
    ./src/frq.cpp
    ./src/matching.cpp
    ./src/mc.cpp
    ./src/tf.cpp
    ./src/txtInput.cpp
)
ADD_EXECUTABLE(test
	test.cpp
)
TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
