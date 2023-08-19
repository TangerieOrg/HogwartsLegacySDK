#pragma once
#include <cstdint>
#include "USceneRigStage_ParameterValue.hpp"
class UAnimationProvider;
#pragma pack(push, 1)
class USceneRigStage_AnimationValue : public USceneRigStage_ParameterValue {
public:
    UAnimationProvider* Provider; // 0x28
    static USceneRigStage_AnimationValue* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
