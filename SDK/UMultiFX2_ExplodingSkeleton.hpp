#pragma once
#include <cstdint>
#include "FExplodingSkeletonInitialDelay.hpp"
#include "FVector.hpp"
#include "UMultiFX2_Filtered.hpp"
class UMultiFX2_ExplodingSkeletonInfoBase;
class UExplodingSkeletonPieceSetup;
#pragma pack(push, 1)
class UMultiFX2_ExplodingSkeleton : public UMultiFX2_Filtered {
public:
    UMultiFX2_ExplodingSkeletonInfoBase* Info; // 0x68
    UExplodingSkeletonPieceSetup* PieceSetup; // 0x70
    FName OverrideCollisionProfile; // 0x78
    FVector LinearImpulse; // 0x80
    bool bUseLinearImpulseOrigin; // 0x8c
    bool bUseInstigatorToTargetAsX; // 0x8d
    bool bUseNpcImpactDataForImpulse; // 0x8e
    char pad_8f[0x1];
    float LinearImpulseStrength; // 0x90
    float RadialImpulseRadius; // 0x94
    float RadialImpulseStrength; // 0x98
    bool bRadialImpulseFalloff; // 0x9c
    bool bUseSkeletalCentroidAsImpulseOrigin; // 0x9d
    char pad_9e[0x2];
    FExplodingSkeletonInitialDelay InitialDelay; // 0xa0
    FVector BaseOffset; // 0xac
    static UMultiFX2_ExplodingSkeleton* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
