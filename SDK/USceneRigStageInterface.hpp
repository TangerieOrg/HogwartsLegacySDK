#pragma once
#include <cstdint>
#include "FSceneRigStageActorPlacement.hpp"
#include "UObject.hpp"
class USceneRigStage_NamedParameter;
#pragma pack(push, 1)
class USceneRigStageInterface : public UObject {
public:
    char pad_28[0x8];
    TArray<FSceneRigStageActorPlacement> ActorPlacements; // 0x30
    TArray<USceneRigStage_NamedParameter*> Parameters; // 0x40
    static USceneRigStageInterface* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
