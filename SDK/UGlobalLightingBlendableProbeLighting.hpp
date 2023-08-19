#pragma once
#include <cstdint>
#include "EGlobalLightingBlendableInputType.hpp"
#include "UGlobalLightingBlendable.hpp"
class UProbeLightingParams;
#pragma pack(push, 1)
class UGlobalLightingBlendableProbeLighting : public UGlobalLightingBlendable {
public:
    UProbeLightingParams* ProbeLightingParameters; // 0x28
    EGlobalLightingBlendableInputType OverrideSource; // 0x30
    char pad_31[0x7];
    static UGlobalLightingBlendableProbeLighting* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
