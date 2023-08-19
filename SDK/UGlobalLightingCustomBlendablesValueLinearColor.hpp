#pragma once
#include <cstdint>
#include "FGlobalLightingCustomBlendableNameLinearColor.hpp"
#include "FLinearColor.hpp"
#include "UGlobalLightingCustomBlendablesValueAllowDefaults.hpp"
#pragma pack(push, 1)
class UGlobalLightingCustomBlendablesValueLinearColor : public UGlobalLightingCustomBlendablesValueAllowDefaults {
public:
    FGlobalLightingCustomBlendableNameLinearColor Name; // 0x28
    FLinearColor Value; // 0x38
    static UGlobalLightingCustomBlendablesValueLinearColor* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
