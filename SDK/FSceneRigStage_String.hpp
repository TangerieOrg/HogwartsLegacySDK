#pragma once
#include <cstdint>
#include "FSceneRigStage_ParameterDefinition.hpp"
class UStringProvider;
#pragma pack(push, 1)
struct FSceneRigStage_String : public FSceneRigStage_ParameterDefinition {
    UStringProvider* DefaultProvider; // 0x10
}; // Size: 0x18
#pragma pack(pop)
