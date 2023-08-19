#pragma once
#include <cstdint>
#include "UDirectionalLightDirection.hpp"
#pragma pack(push, 1)
class UDirectionalLightOpposeCamera : public UDirectionalLightDirection {
public:
    float FixedAltitude; // 0x28
    bool bFixedAltitude; // 0x2c
    char pad_2d[0x3];
    static UDirectionalLightOpposeCamera* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
