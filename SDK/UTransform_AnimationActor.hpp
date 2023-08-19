#pragma once
#include <cstdint>
#include "UAnimationTransformProvider.hpp"
class UActorProvider;
#pragma pack(push, 1)
class UTransform_AnimationActor : public UAnimationTransformProvider {
public:
    UActorProvider* Actor; // 0x38
    FName BoneName; // 0x40
    static UTransform_AnimationActor* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
