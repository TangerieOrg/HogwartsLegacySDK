#pragma once
#include <cstdint>
#include "EPerformTasksSpell.hpp"
#include "UAIPerformTaskBase.hpp"
class AActor;
class UClass;
class USpellToolRecord;
#pragma pack(push, 1)
class UAIPerformTaskCastSpell : public UAIPerformTaskBase {
public:
    AActor* SpellTargetActor; // 0xe0
    EPerformTasksSpell SpellType; // 0xe8
    char pad_e9[0x7];
    UClass* CustomSpellAbility; // 0xf0
    USpellToolRecord* CustomSpellToolRecord; // 0xf8
    static UAIPerformTaskCastSpell* StaticClass();
    void WeaponsAreReady(AActor* InActor);
    void OnTargetActorSpawnInFinished(AActor* SpawnedActor);
}; // Size: 0x100
#pragma pack(pop)
