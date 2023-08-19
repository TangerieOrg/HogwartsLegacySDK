#pragma once
#include <cstdint>
#include "ULightParameterSmoothing.hpp"
#pragma pack(push, 1)
class ULightParameterSmoothingFilter : public ULightParameterSmoothing {
public:
    float TimeConstant; // 0x50
    char pad_54[0x4];
    static ULightParameterSmoothingFilter* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
