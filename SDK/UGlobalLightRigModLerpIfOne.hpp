#pragma once
#include <cstdint>
#include "UGlobalLightRigModLerpBinary.hpp"
#pragma pack(push, 1)
class UGlobalLightRigModLerpIfOne : public UGlobalLightRigModLerpBinary {
public:
    float Tolerance; // 0x38
    char pad_3c[0x4];
    static UGlobalLightRigModLerpIfOne* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
