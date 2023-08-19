#pragma once
#include <cstdint>
#include "USceneRigParameterDefinition.hpp"
class UAnimationProvider;
#pragma pack(push, 1)
class USceneRigParameterDefinition_Animation : public USceneRigParameterDefinition {
public:
    UAnimationProvider* DefaultValue; // 0x38
    static USceneRigParameterDefinition_Animation* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
