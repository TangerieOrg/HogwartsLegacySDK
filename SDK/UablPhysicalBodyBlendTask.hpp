#pragma once
#include <cstdint>
#include "EAlphaBlendOption.hpp"
#include "FPhysicalBodyNameWeightPair.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablPhysicalBodyBlendTask : public UAblAbilityTask {
public:
    TArray<FPhysicalBodyNameWeightPair> PerBoneBlendWeights; // 0x70
    float BlendInTime; // 0x80
    EAlphaBlendOption BlendInOption; // 0x84
    char pad_85[0x3];
    float BlendOutTime; // 0x88
    EAlphaBlendOption BlendOutOption; // 0x8c
    bool bContinous; // 0x8d
    char pad_8e[0x2];
    static UablPhysicalBodyBlendTask* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
