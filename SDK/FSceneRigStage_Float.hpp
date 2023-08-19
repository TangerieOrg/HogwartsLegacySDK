#pragma once
#include <cstdint>
#include "FSceneRigStage_ParameterDefinition.hpp"
class UFloatProvider;
#pragma pack(push, 1)
struct FSceneRigStage_Float : public FSceneRigStage_ParameterDefinition {
    UFloatProvider* DefaultProvider; // 0x10
}; // Size: 0x18
#pragma pack(pop)
