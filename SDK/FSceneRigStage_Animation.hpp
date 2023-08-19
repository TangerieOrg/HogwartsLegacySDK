#pragma once
#include <cstdint>
#include "FSceneRigStage_ParameterDefinition.hpp"
class UAnimationProvider;
#pragma pack(push, 1)
struct FSceneRigStage_Animation : public FSceneRigStage_ParameterDefinition {
    UAnimationProvider* DefaultProvider; // 0x10
}; // Size: 0x18
#pragma pack(pop)
