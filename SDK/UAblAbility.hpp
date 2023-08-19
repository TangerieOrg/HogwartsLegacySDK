#pragma once
#include <cstdint>
#include "EAblAbilityTaskRealm.hpp"
#include "FAblQueryResult.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FVector2D.hpp"
#include "UObject.hpp"
class UAblTargetingBase;
class UAblAbilityContext;
class UAblChannelingBase;
class UAblAbilityTask;
class UAblAbilityEvent;
class AActor;
#pragma pack(push, 1)
class UAblAbility : public UObject {
public:
    float m_Length; // 0x28
    float m_Cooldown; // 0x2c
    float m_PlayRate; // 0x30
    bool m_bOverrideGlobalPlayRate; // 0x34
    bool m_IsPassive; // 0x35
    char pad_36[0x2];
    int32_t m_MaxStacks; // 0x38
    bool m_RefreshDurationOnNewStack; // 0x3c
    bool m_AlwaysRefreshDuration; // 0x3d
    bool m_OnlyRefreshLoopTime; // 0x3e
    bool m_RequiresAllTasksComplete; // 0x3f
    bool m_Loop; // 0x40
    char pad_41[0x3];
    float m_LoopStart; // 0x44
    float m_LoopEnd; // 0x48
    uint32_t m_LoopMaxIterations; // 0x4c
    bool m_RequiresTarget; // 0x50
    char pad_51[0x7];
    UAblTargetingBase* m_Targeting; // 0x58
    bool m_IsChanneled; // 0x60
    char pad_61[0x7];
    TArray<UAblChannelingBase*> m_ChannelConditions; // 0x68
    bool m_MustPassAllChannelConditions; // 0x78
    char pad_79[0x7];
    FGameplayTagContainer m_TagContainer; // 0x80
    TArray<UAblAbilityTask*> m_Tasks; // 0xa0
    TArray<UAblAbilityEvent*> m_Events; // 0xb0
    uint32_t m_AbilityNameHash; // 0xc0
    EAblAbilityTaskRealm m_AbilityRealm; // 0xc4
    char pad_c5[0x3];
    static UAblAbility* StaticClass();
    bool RequiresTarget();
    bool RequiresAllTasksComplete();
    bool RefreshLoopTimeOnly();
    bool RefreshDurationOnNewStack();
    void OnSpawnedActorEvent(UAblAbilityContext* Context, FName& EventName, AActor* SpawnedActor);
    void OnRaycastEvent(UAblAbilityContext* Context, FName& EventName, TArray<FHitResult>& HitResults);
    UAblAbility* OnGetBranchAbility(UAblAbilityContext* Context, FName& EventName);
    void OnCustomEvent(UAblAbilityContext* Context, FName& EventName);
    void OnCollisionEvent(UAblAbilityContext* Context, FName& EventName, TArray<FAblQueryResult>& HitEntities);
    void OnAbilityStart(UAblAbilityContext* Context);
    void OnAbilityInterrupt(UAblAbilityContext* Context);
    void OnAbilityEnd(UAblAbilityContext* Context);
    void OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility);
    bool MustPassAllChannelConditions();
    bool IsPassive();
    bool IsLooping();
    bool IsChanneled();
    float GetRange();
    int32_t GetMaxStacks(UAblAbilityContext* Context);
    FVector2D GetLoopRange();
    int32_t GetLoopMaxIterationsBP();
    float GetLength();
    FString GetDisplayName();
    float GetCooldown();
    float GetBasePlayRate();
    int32_t GetBaseMaxStacks();
    float GetBaseCooldown();
    FGameplayTagContainer GetAbilityTagContainer();
    void CustomTargetingFindTargets(UAblAbilityContext* Context, TArray<AActor*>& FoundTargets);
    bool CustomFilterCondition(UAblAbilityContext* Context, FName& EventName, AActor* Actor);
    bool CustomCanLoopExecute(UAblAbilityContext* Context);
    bool CustomCanBranchTo(UAblAbilityContext* Context);
    bool CustomCanAbilityExecute(UAblAbilityContext* Context);
    bool CheckCustomChannelConditional(UAblAbilityContext* Context, FName& EventName);
    bool CanInterruptAbility(UAblAbilityContext* Context, UAblAbility* CurrentAbility);
    float CalculateDamageForActor(UAblAbilityContext* Context, FName& EventName, float BaseDamage, AActor* Actor);
    float CalculateCooldown(UAblAbilityContext* Context);
    bool AlwaysRefreshDuration();
}; // Size: 0xc8
#pragma pack(pop)
