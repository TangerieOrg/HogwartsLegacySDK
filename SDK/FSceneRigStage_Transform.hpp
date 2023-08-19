#pragma once
#include <cstdint>
#include "FSceneRigStage_ParameterDefinition.hpp"
class UTransformProvider;
#pragma pack(push, 1)
struct FSceneRigStage_Transform : public FSceneRigStage_ParameterDefinition {
    UTransformProvider* DefaultProvider; // 0x10
}; // Size: 0x18
#pragma pack(pop)
