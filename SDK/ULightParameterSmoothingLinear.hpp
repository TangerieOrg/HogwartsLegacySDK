#pragma once
#include <cstdint>
#include "ULightParameterSmoothing.hpp"
#pragma pack(push, 1)
class ULightParameterSmoothingLinear : public ULightParameterSmoothing {
public:
    float Rate; // 0x50
    char pad_54[0x4];
    static ULightParameterSmoothingLinear* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
