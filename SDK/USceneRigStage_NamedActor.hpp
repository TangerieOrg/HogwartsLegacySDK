#pragma once
#include <cstdint>
#include "FSceneRigStage_Actor.hpp"
#include "USceneRigStage_NamedParameter.hpp"
#pragma pack(push, 1)
class USceneRigStage_NamedActor : public USceneRigStage_NamedParameter {
public:
    FSceneRigStage_Actor Parameter; // 0x30
    static USceneRigStage_NamedActor* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
