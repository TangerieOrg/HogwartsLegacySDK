#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FGuid.hpp"
#include "UActorComponent.hpp"
class AActor;
#pragma pack(push, 1)
class URPGAbilityComponent : public UActorComponent {
public:
    char pad_c8[0x120];
    TArray<FGuid> CurrentlyLoading; // 0x1e8
    FGameplayTagContainer AbilityTags; // 0x1f8
    char pad_218[0xc];
    bool bTickOnScheduler; // 0x224
    char pad_225[0x3];
    static URPGAbilityComponent* StaticClass();
    void RemoveAbility(FGuid& AbilityID);
    void OnSaveGameLoad();
    void OnRemoveAbilityUI__DelegateSignature(FString SourceID, int32_t SlotNo);
    void OnGameToBeSaved();
    void OnEndOfDay();
    void OnChangeAbilityUI__DelegateSignature(FString SourceID, int32_t SlotNo, float CurrentTicks, float MaxTicks);
    void OnAddAbilityUI__DelegateSignature(FString SourceID, int32_t SlotNo, float Ticks);
    static bool HasAbilityTagBP(AActor* Owner, FGameplayTag Tag);
    bool CanAddAbility(FName AbilityName);
    FGuid AddAbility(FName AbilityName, bool bForceSyncLoad);
}; // Size: 0x228
#pragma pack(pop)
