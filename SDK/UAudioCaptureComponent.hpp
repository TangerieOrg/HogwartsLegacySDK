#pragma once
#include <cstdint>
#include "USynthComponent.hpp"
#pragma pack(push, 1)
class UAudioCaptureComponent : public USynthComponent {
public:
    int32_t JitterLatencyFrames; // 0x6e0
    char pad_6e4[0xbc];
    static UAudioCaptureComponent* StaticClass();
}; // Size: 0x7a0
#pragma pack(pop)
