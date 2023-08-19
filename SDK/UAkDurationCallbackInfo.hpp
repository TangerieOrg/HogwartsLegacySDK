#pragma once
#include <cstdint>
#include "UAkEventCallbackInfo.hpp"
#pragma pack(push, 1)
class UAkDurationCallbackInfo : public UAkEventCallbackInfo {
public:
    float Duration; // 0x38
    float EstimatedDuration; // 0x3c
    int32_t AudioNodeID; // 0x40
    int32_t MediaID; // 0x44
    bool bStreaming; // 0x48
    char pad_49[0x7];
    static UAkDurationCallbackInfo* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
