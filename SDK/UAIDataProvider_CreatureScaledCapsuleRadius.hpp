#pragma once
#include <cstdint>
#include "UAIDataProvider_QueryParams.hpp"
#pragma pack(push, 1)
class UAIDataProvider_CreatureScaledCapsuleRadius : public UAIDataProvider_QueryParams {
public:
    float Multiplier; // 0x40
    char pad_44[0x4];
    static UAIDataProvider_CreatureScaledCapsuleRadius* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
