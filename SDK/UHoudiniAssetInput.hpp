#pragma once
#include <cstdint>
#include "UHoudiniAssetParameter.hpp"
#pragma pack(push, 1)
class UHoudiniAssetInput : public UHoudiniAssetParameter {
public:
    char pad_a0[0x180];
    static UHoudiniAssetInput* StaticClass();
}; // Size: 0x220
#pragma pack(pop)
