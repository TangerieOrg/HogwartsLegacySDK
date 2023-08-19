#pragma once
#include <cstdint>
#include "UHoudiniAssetParameter.hpp"
#pragma pack(push, 1)
class UHoudiniAssetParameterFloat : public UHoudiniAssetParameter {
public:
    char pad_a0[0x38];
    static UHoudiniAssetParameterFloat* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
