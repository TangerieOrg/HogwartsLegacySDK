#pragma once
#include <cstdint>
#include "FGlobalLightingCustomBlendableNameLinearColor.hpp"
#include "UGlobalLightingCustomBlendablesValue.hpp"
#pragma pack(push, 1)
class UGlobalLightingCustomBlendablesValueLinearColorDesaturate : public UGlobalLightingCustomBlendablesValue {
public:
    FGlobalLightingCustomBlendableNameLinearColor Name; // 0x28
    float Desaturate; // 0x38
    char pad_3c[0x4];
    static UGlobalLightingCustomBlendablesValueLinearColorDesaturate* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
