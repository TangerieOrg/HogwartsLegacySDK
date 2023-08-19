#pragma once
#include <cstdint>
#include "USceneRigParameterDefinition.hpp"
class UAnimationTransformProvider;
#pragma pack(push, 1)
class USceneRigParameterDefinition_AnimationTransform : public USceneRigParameterDefinition {
public:
    UAnimationTransformProvider* DefaultValue; // 0x38
    static USceneRigParameterDefinition_AnimationTransform* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
