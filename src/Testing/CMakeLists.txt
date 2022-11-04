#build the sub-script for the MPAGSCipher library unit tests

#most basic test
add_executable(testHello testHello.cpp)
add_test(NAME test-hello COMMAND testHello)

#create interface library for catch
add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CMAKE_CURRENT_LIST_DIR})
target_compile_features(Catch INTERFACE cxx_noexcept)

#first Catch based test
add_executable(testCatch testCatch.cpp)
target_link_libraries(testCatch Catch)
add_test(NAME test-catch COMMAND testCatch)

#test transformChar function
add_executable(testTransformChar testTransformChar.cpp)
target_link_libraries(testTransformChar MPAGSCipher)
add_test(NAME test-transformchar COMMAND testTransformChar)

#test ProcessCommandLine function
add_executable(testProcessCommandLine testProcessCommandLine.cpp)
target_link_libraries(testProcessCommandLine MPAGSCipher)
add_test(NAME test-processcommandline COMMAND testProcessCommandLine)

#test CaeserCiper class
add_executable(testCaeserCipher testCaeserCipher.cpp)
target_link_libraries(testCaeserCipher MPAGSCipher)
add_test(NAME test-caesercipher COMMAND testCaeserCipher)

#include CipherMode enum class here as well (not sure if i want to test it yet but I'll need it in testCaeserCipher.cpp to use it properly)
add_executable(testCipherMode testCipherMode.cpp)
target_link_libraries(testCipherMode MPAGSCipher)
add_test(NAME test-ciphermode COMMAND testCipherMode)