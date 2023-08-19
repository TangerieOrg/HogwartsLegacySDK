#pragma once
#include <cstdint>
#include "FSceneRigStage_ParameterDefinition.hpp"
class UObjectProvider;
#pragma pack(push, 1)
struct FSceneRigStage_Object : public FSceneRigStage_ParameterDefinition {
    UObjectProvider* DefaultProvider; // 0x10
}; // Size: 0x18
#pragma pack(pop)
