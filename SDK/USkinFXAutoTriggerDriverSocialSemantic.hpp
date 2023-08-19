#pragma once
#include <cstdint>
#include "FSkinFXAutoTriggerEffectInfo.hpp"
#include "FVector2D.hpp"
#include "SocialSemanticIDs.hpp"
#include "USkinFXAutoTriggerDriver.hpp"
#pragma pack(push, 1)
class USkinFXAutoTriggerDriverSocialSemantic : public USkinFXAutoTriggerDriver {
public:
    SocialSemanticIDs SemanticID; // 0x30
    char pad_31[0x3];
    FVector2D SemanticInputStrength; // 0x34
    FVector2D OutputStrength; // 0x3c
    FName SkinFXStrengthParameter; // 0x44
    bool bZeroNonZero; // 0x4c
    char pad_4d[0x3];
    FSkinFXAutoTriggerEffectInfo EffectInfo; // 0x50
    float Priority; // 0x90
    char pad_94[0x4];
    static USkinFXAutoTriggerDriverSocialSemantic* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
