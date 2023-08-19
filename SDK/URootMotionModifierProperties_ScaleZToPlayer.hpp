#pragma once
#include <cstdint>
#include "URootMotionModifierProperties.hpp"
class USkeletalMesh;
#pragma pack(push, 1)
class URootMotionModifierProperties_ScaleZToPlayer : public URootMotionModifierProperties {
public:
    USkeletalMesh* SkeletalMesh; // 0x30
    FName BoneName; // 0x38
    static URootMotionModifierProperties_ScaleZToPlayer* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
