#pragma once
#include <cstdint>
#include "UHoudiniAssetParameter.hpp"
#pragma pack(push, 1)
class UHoudiniAssetInstanceInput : public UHoudiniAssetParameter {
public:
    char pad_a0[0xe0];
    static UHoudiniAssetInstanceInput* StaticClass();
}; // Size: 0x180
#pragma pack(pop)
