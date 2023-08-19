#pragma once
#include <cstdint>
#include "FSceneRigStage_ParameterDefinition.hpp"
class UIntProvider;
#pragma pack(push, 1)
struct FSceneRigStage_Int : public FSceneRigStage_ParameterDefinition {
    UIntProvider* DefaultProvider; // 0x10
}; // Size: 0x18
#pragma pack(pop)
