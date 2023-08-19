#pragma once
#include <cstdint>
#include "UHoudiniAssetParameter.hpp"
#pragma pack(push, 1)
class UHoudiniAssetParameterFile : public UHoudiniAssetParameter {
public:
    char pad_a0[0x28];
    static UHoudiniAssetParameterFile* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
