#pragma once
#include <cstdint>
#include "FGlobalLightingCustomBlendableNameScalar.hpp"
#include "UGlobalLightingCustomBlendablesValueAllowDefaults.hpp"
#pragma pack(push, 1)
class UGlobalLightingCustomBlendablesValueScalar : public UGlobalLightingCustomBlendablesValueAllowDefaults {
public:
    FGlobalLightingCustomBlendableNameScalar Name; // 0x28
    float Value; // 0x38
    char pad_3c[0x4];
    static UGlobalLightingCustomBlendablesValueScalar* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
