#pragma once
#include <cstdint>
#include "UHoudiniAssetParameterMultiparm.hpp"
#pragma pack(push, 1)
class UHoudiniAssetParameterRamp : public UHoudiniAssetParameterMultiparm {
public:
    char pad_b0[0x18];
    static UHoudiniAssetParameterRamp* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
