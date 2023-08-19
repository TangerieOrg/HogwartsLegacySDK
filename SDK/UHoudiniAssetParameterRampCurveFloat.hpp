#pragma once
#include <cstdint>
#include "UCurveFloat.hpp"
#pragma pack(push, 1)
class UHoudiniAssetParameterRampCurveFloat : public UCurveFloat {
public:
    char pad_b8[0x8];
    static UHoudiniAssetParameterRampCurveFloat* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
