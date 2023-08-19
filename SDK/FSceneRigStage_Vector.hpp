#pragma once
#include <cstdint>
#include "FSceneRigStage_ParameterDefinition.hpp"
class UVectorProvider;
#pragma pack(push, 1)
struct FSceneRigStage_Vector : public FSceneRigStage_ParameterDefinition {
    UVectorProvider* DefaultProvider; // 0x10
}; // Size: 0x18
#pragma pack(pop)
