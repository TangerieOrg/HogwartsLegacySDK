#pragma once
#include <cstdint>
#include "EImpactReactionStrength.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAuthoredImpact {
    FName Name; // 0x0
    EImpactReactionStrength ReactionStrength; // 0x8
    char pad_9[0x7];
    TArray<FName> AffectedBodies; // 0x10
    TArray<FName> ImpactedBodies; // 0x20
    FVector ImpactDirection; // 0x30
    FVector ImpactLocationLocal; // 0x3c
    float ImpactMaxYaw; // 0x48
    float ImpactMaxPitch; // 0x4c
    float ImpactVariationYaw; // 0x50
    float ImpactVariationPitch; // 0x54
    float ImpactStrengthMin; // 0x58
    float ImpactStrengthMax; // 0x5c
    float ImpactDuration; // 0x60
    float ImpactEaseInDuration; // 0x64
    float BlendBackDelay; // 0x68
    float BlendBackDuration; // 0x6c
    bool bUseGivenImpactStength; // 0x70
    char pad_71[0x7];
}; // Size: 0x78
#pragma pack(pop)
