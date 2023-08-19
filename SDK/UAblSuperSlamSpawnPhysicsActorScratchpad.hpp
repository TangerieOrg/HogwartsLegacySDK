#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class AStaticMeshActor;
#pragma pack(push, 1)
class UAblSuperSlamSpawnPhysicsActorScratchpad : public UAblAbilityTaskScratchPad {
public:
    TArray<AStaticMeshActor*> Actors; // 0x28
    static UAblSuperSlamSpawnPhysicsActorScratchpad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
