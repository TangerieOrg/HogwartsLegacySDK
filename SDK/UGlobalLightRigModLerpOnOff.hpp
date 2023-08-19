#pragma once
#include <cstdint>
#include "UGlobalLightRigModLerpBinary.hpp"
#pragma pack(push, 1)
class UGlobalLightRigModLerpOnOff : public UGlobalLightRigModLerpBinary {
public:
    float Cutoff; // 0x38
    char pad_3c[0x4];
    static UGlobalLightRigModLerpOnOff* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
