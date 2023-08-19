#pragma once
#include <cstdint>
#include "UAkEventCallbackInfo.hpp"
#pragma pack(push, 1)
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo {
public:
    int32_t Identifier; // 0x38
    int32_t Position; // 0x3c
    FString Label; // 0x40
    static UAkMarkerCallbackInfo* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
