#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FSceneRigPlayerReference.hpp"
class USceneRigPlayer;
#pragma pack(push, 1)
class ASceneRigPlayerManager : public AActor {
public:
    TArray<FSceneRigPlayerReference> Players; // 0x248
    TArray<USceneRigPlayer*> NewPlayersFromThisTick; // 0x258
    TArray<USceneRigPlayer*> ActivePlayersWantingToPlayThisTick; // 0x268
    char pad_278[0x18];
    static ASceneRigPlayerManager* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
