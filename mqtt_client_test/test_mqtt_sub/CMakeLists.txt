#cmake的版本号
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
#project名称
PROJECT(ls1043_acu_sub)
#指定编译语言
add_compile_options(-std=c++11)
#使用mqtt_libs来连接后面的库/usr/lib/x86_64-linux-gnu/libprotobuf-c.so
set(dpd_libs 
/usr/local/lib/libpaho-mqttpp3.so
/usr/local/lib/libpaho-mqtt3as.so
/usr/local/lib/libprotobuf.so
/usr/lib/x86_64-linux-gnu/libpthread.so
)
#代码中包含头文件所在的目录
include_directories(
          /usr/local/include 
          /usr/include 
          src/lib/mqtt_module
          src
          )
#指定可执行文件
add_executable(${PROJECT_NAME} 
          src/lib/mqtt_module/MQTTClient_ACU.cpp 
          src/lib/mqtt_module/cloud_control_msg.pb.cc
          src/main.cpp
          )
#工程连接到库文件
target_link_libraries(${PROJECT_NAME} ${dpd_libs})
