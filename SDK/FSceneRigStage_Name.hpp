#pragma once
#include <cstdint>
#include "FSceneRigStage_ParameterDefinition.hpp"
class UNameProvider;
#pragma pack(push, 1)
struct FSceneRigStage_Name : public FSceneRigStage_ParameterDefinition {
    UNameProvider* DefaultProvider; // 0x10
}; // Size: 0x18
#pragma pack(pop)
