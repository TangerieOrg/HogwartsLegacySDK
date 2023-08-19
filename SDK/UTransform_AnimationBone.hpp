#pragma once
#include <cstdint>
#include "UAnimationTransformProvider.hpp"
#pragma pack(push, 1)
class UTransform_AnimationBone : public UAnimationTransformProvider {
public:
    FName BoneName; // 0x38
    static UTransform_AnimationBone* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
