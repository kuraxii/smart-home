#include <stdio.h>
#include <iostream>
#include <string.h>
#include <curl/curl.h>
#include <jsoncpp/json/json.h>
#include <fstream>
#include <memory>



#ifdef __cplusplus // 使用c的链接方式
extern "C" {
#endif

int face_recognition(std::string base64);
    

#ifdef __cplusplus
}
#endif