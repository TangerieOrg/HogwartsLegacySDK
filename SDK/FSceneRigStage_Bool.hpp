#pragma once
#include <cstdint>
#include "FSceneRigStage_ParameterDefinition.hpp"
class UBoolProvider;
#pragma pack(push, 1)
struct FSceneRigStage_Bool : public FSceneRigStage_ParameterDefinition {
    UBoolProvider* DefaultProvider; // 0x10
}; // Size: 0x18
#pragma pack(pop)
