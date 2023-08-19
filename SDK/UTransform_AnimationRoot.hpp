#pragma once
#include <cstdint>
#include "UAnimationTransformProvider.hpp"
#pragma pack(push, 1)
class UTransform_AnimationRoot : public UAnimationTransformProvider {
public:
    static UTransform_AnimationRoot* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
