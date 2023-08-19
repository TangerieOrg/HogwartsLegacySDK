#pragma once
#include <cstdint>
#include "FSceneRigStage_Animation.hpp"
#include "USceneRigStage_NamedParameter.hpp"
#pragma pack(push, 1)
class USceneRigStage_NamedAnimation : public USceneRigStage_NamedParameter {
public:
    FSceneRigStage_Animation Parameter; // 0x30
    static USceneRigStage_NamedAnimation* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
