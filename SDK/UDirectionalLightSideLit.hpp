#pragma once
#include <cstdint>
#include "UDirectionalLightDirection.hpp"
#pragma pack(push, 1)
class UDirectionalLightSideLit : public UDirectionalLightDirection {
public:
    float Rotation; // 0x28
    char pad_2c[0x4];
    static UDirectionalLightSideLit* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
