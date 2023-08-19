#pragma once
#include <cstdint>
#include "UHoudiniAssetParameter.hpp"
#pragma pack(push, 1)
class UHoudiniAssetParameterMultiparm : public UHoudiniAssetParameter {
public:
    char pad_a0[0x10];
    static UHoudiniAssetParameterMultiparm* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
