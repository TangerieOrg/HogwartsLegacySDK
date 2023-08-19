#pragma once
#include <cstdint>
#include "AInteractiveObjectActor.hpp"
class USceneComponent;
class AEncounterCreator;
#pragma pack(push, 1)
class ABP_CreatureOverlandDen_C : public AInteractiveObjectActor {
public:
    USceneComponent* DefaultSceneRoot; // 0x298
    AEncounterCreator* InstancedEncounterCreator; // 0x2a0
    static ABP_CreatureOverlandDen_C* StaticClass();
}; // Size: 0x2a8
#pragma pack(pop)
