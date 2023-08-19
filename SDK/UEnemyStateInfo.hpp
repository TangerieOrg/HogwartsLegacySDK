#pragma once
#include <cstdint>
#include "UCharacterStateInfo.hpp"
class AActor;
class UClass;
#pragma pack(push, 1)
class UEnemyStateInfo : public UCharacterStateInfo {
public:
    char pad_f90[0xb8];
    static UEnemyStateInfo* StaticClass();
    void UpdateMass();
    void SetPullsAggroAmount(float InAmount);
    void SetPullsAggro(bool bInPullsAggro);
    void SetInvulnerableToStaticObjects(bool bInInvulnerable);
    void SetIgnoreActorHitFrom(AActor* IgnoreActor);
    void RemoveIgnoreActorHitFrom();
    bool PullsAggro();
    float GetPullAggroAmount();
    TArray<UClass*> GetFriendlyFireTypeList();
}; // Size: 0x1048
#pragma pack(pop)
