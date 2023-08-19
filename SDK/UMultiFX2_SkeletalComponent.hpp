#pragma once
#include <cstdint>
#include "UMultiFX2_Filtered.hpp"
class USkeletalMesh;
class UAnimationAsset;
#pragma pack(push, 1)
class UMultiFX2_SkeletalComponent : public UMultiFX2_Filtered {
public:
    USkeletalMesh* SkeletalMesh; // 0x68
    UAnimationAsset* Anim; // 0x70
    bool bLooped; // 0x78
    bool bAttached; // 0x79
    bool bIgnoreDeactivate; // 0x7a
    char pad_7b[0x5];
    static UMultiFX2_SkeletalComponent* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
