#pragma once
#include <cstdint>
#include "UAkCallbackInfo.hpp"
#pragma pack(push, 1)
class UAkEventCallbackInfo : public UAkCallbackInfo {
public:
    int32_t PlayingID; // 0x30
    int32_t EventID; // 0x34
    static UAkEventCallbackInfo* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
