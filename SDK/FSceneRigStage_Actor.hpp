#pragma once
#include <cstdint>
#include "FSceneRigStage_ParameterDefinition.hpp"
class UActorProvider;
#pragma pack(push, 1)
struct FSceneRigStage_Actor : public FSceneRigStage_ParameterDefinition {
    UActorProvider* DefaultProvider; // 0x10
}; // Size: 0x18
#pragma pack(pop)
