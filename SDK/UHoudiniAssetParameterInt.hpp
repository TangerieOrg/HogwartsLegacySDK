#pragma once
#include <cstdint>
#include "UHoudiniAssetParameter.hpp"
#pragma pack(push, 1)
class UHoudiniAssetParameterInt : public UHoudiniAssetParameter {
public:
    char pad_a0[0x30];
    static UHoudiniAssetParameterInt* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
