#pragma once
#include <cstdint>
#include "FSceneRigStage_Actor.hpp"
#include "USceneRig.hpp"
#pragma pack(push, 1)
class USceneRig_CustomActor : public USceneRig {
public:
    FSceneRigStage_Actor CustomActor; // 0x238
    static USceneRig_CustomActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
