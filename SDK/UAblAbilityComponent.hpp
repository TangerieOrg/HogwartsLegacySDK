#pragma once
#include <cstdint>
#include "EAblAbilityStartResult.hpp"
#include "EAblAbilityTaskResult.hpp"
#include "FAblUberAbility.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FGameplayTagQuery.hpp"
#include "UActorComponent.hpp"
class UAblAbilityAsset;
class USkeletalMeshComponent;
class UAblAbility;
class AActor;
class UAblAbilityContext;
#pragma pack(push, 1)
class UAblAbilityComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    float GlobalPlayRate; // 0xd0
    float GlobalMeshScale; // 0xd4
    bool m_Verbose; // 0xd8
    char pad_d9[0x1f];
    UAblAbilityAsset* AblAbilityAsset; // 0xf8
    USkeletalMeshComponent* SkeletalMeshComponent; // 0x100
    char pad_108[0x8];
    FGameplayTagContainer m_TagContainer; // 0x110
    char pad_130[0x48];
    FAblUberAbility AblUberAbility; // 0x178
    char pad_198[0x18];
    static UAblAbilityComponent* StaticClass();
    void UnpauseAllAbilities();
    static void TriggerAbleEvent(AActor* AbleOwner, AActor* AbleSender, FName EventName);
    void SetIgnorePlayAbility(bool bFlag);
    void RemoveTag(FGameplayTag Tag);
    void PauseAllAbilities();
    void PauseAbility(bool bEnable, UAblAbility* Abilit);
    bool MatchesQuery(FGameplayTagQuery Query);
    bool MatchesAnyTag(FGameplayTagContainer Container);
    bool MatchesAllTags(FGameplayTagContainer Container);
    bool IsPlayingAbility();
    bool IsPassiveActive(UAblAbility* Ability);
    bool IsAbilityPaused(UAblAbility* Ability);
    bool HasTag(FGameplayTag Tag);
    bool HasAbilityAnimation();
    FGameplayTagContainer GetGameplayTagContainerBP();
    UAblAbility* GetActiveAbility_New(FName ChannelName);
    UAblAbility* GetActiveAbility();
    void CancelAllAbilities(EAblAbilityTaskResult ResultToUse, bool bHideActor);
    void CancelAbilityChannel(FName& ChannelName, EAblAbilityTaskResult ResultToUse, bool bHideActor);
    void CancelAbility(UAblAbility* Ability, EAblAbilityTaskResult ResultToUse);
    EAblAbilityStartResult CanActivateAbility(UAblAbilityContext* Context);
    EAblAbilityStartResult BranchAbility(UAblAbilityContext* Context);
    void AddTag(FGameplayTag Tag);
    void ActorHiddenTimeout();
    EAblAbilityStartResult ActivateAbility(UAblAbilityContext* Context);
}; // Size: 0x1b0
#pragma pack(pop)
