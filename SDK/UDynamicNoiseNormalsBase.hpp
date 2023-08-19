#pragma once
#include <cstdint>
#include "UDynamicNoiseTextureBase.hpp"
#pragma pack(push, 1)
class UDynamicNoiseNormalsBase : public UDynamicNoiseTextureBase {
public:
    float NormalStrength; // 0x50
    bool bCurl; // 0x54
    char pad_55[0x3];
    static UDynamicNoiseNormalsBase* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
