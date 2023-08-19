#pragma once
#include <cstdint>
#include "ATransfigurationObjectBase.hpp"
class ATriggerBase;
class UCreatureState;
class AActor;
#pragma pack(push, 1)
class ACreaturePen : public ATransfigurationObjectBase {
public:
    ATriggerBase* CachedWalkOutTrigger; // 0x2a8
    char pad_2b0[0x10];
    static ACreaturePen* StaticClass();
    void UpdateCallout();
    void OnDressingReady();
    void OnCreatureSpawned(UCreatureState* CreatureState, AActor* CreatureActor);
    void OnBreedingStarted(UCreatureState* OffspringState, UCreatureState* MotherState);
    void OnBreedingFinished();
    bool IsReadyToSlotCreature();
    bool IsOccupied();
}; // Size: 0x2c0
#pragma pack(pop)
