#include "AActor.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "FGuid.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "URPGAbilityComponent.hpp"
URPGAbilityComponent* URPGAbilityComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGAbilityComponent");
    return (URPGAbilityComponent*)res;
}
void URPGAbilityComponent::OnSaveGameLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityComponent.OnSaveGameLoad"));
    struct Params_OnSaveGameLoad {
    }; // Size: 0x0
    Params_OnSaveGameLoad params{};
    ProcessEvent(func, &params);
}
void URPGAbilityComponent::RemoveAbility(FGuid& AbilityID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityComponent.RemoveAbility"));
    struct Params_RemoveAbility {
        FGuid AbilityID; // 0x0
    }; // Size: 0x10
    Params_RemoveAbility params{};
    params.AbilityID = (FGuid)AbilityID;
    ProcessEvent(func, &params);
    AbilityID = params.AbilityID;
}
void URPGAbilityComponent::OnChangeAbilityUI__DelegateSignature(FString SourceID, int32_t SlotNo, float CurrentTicks, float MaxTicks) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.RPGAbilityComponent.OnChangeAbilityUI__DelegateSignature"));
    struct Params_OnChangeAbilityUI__DelegateSignature {
        FString SourceID; // 0x0
        int32_t SlotNo; // 0x10
        float CurrentTicks; // 0x14
        float MaxTicks; // 0x18
    }; // Size: 0x1c
    Params_OnChangeAbilityUI__DelegateSignature params{};
    params.SourceID = (FString)SourceID;
    params.SlotNo = (int32_t)SlotNo;
    params.CurrentTicks = (float)CurrentTicks;
    params.MaxTicks = (float)MaxTicks;
    ProcessEvent(func, &params);
}
void URPGAbilityComponent::OnRemoveAbilityUI__DelegateSignature(FString SourceID, int32_t SlotNo) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.RPGAbilityComponent.OnRemoveAbilityUI__DelegateSignature"));
    struct Params_OnRemoveAbilityUI__DelegateSignature {
        FString SourceID; // 0x0
        int32_t SlotNo; // 0x10
    }; // Size: 0x14
    Params_OnRemoveAbilityUI__DelegateSignature params{};
    params.SourceID = (FString)SourceID;
    params.SlotNo = (int32_t)SlotNo;
    ProcessEvent(func, &params);
}
void URPGAbilityComponent::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityComponent.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}
void URPGAbilityComponent::OnEndOfDay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityComponent.OnEndOfDay"));
    struct Params_OnEndOfDay {
    }; // Size: 0x0
    Params_OnEndOfDay params{};
    ProcessEvent(func, &params);
}
void URPGAbilityComponent::OnAddAbilityUI__DelegateSignature(FString SourceID, int32_t SlotNo, float Ticks) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.RPGAbilityComponent.OnAddAbilityUI__DelegateSignature"));
    struct Params_OnAddAbilityUI__DelegateSignature {
        FString SourceID; // 0x0
        int32_t SlotNo; // 0x10
        float Ticks; // 0x14
    }; // Size: 0x18
    Params_OnAddAbilityUI__DelegateSignature params{};
    params.SourceID = (FString)SourceID;
    params.SlotNo = (int32_t)SlotNo;
    params.Ticks = (float)Ticks;
    ProcessEvent(func, &params);
}
bool URPGAbilityComponent::HasAbilityTagBP(AActor* Owner, FGameplayTag Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityComponent.HasAbilityTagBP"));
    struct Params_HasAbilityTagBP {
        AActor* Owner; // 0x0
        FGameplayTag Tag; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_HasAbilityTagBP params{};
    params.Owner = (AActor*)Owner;
    params.Tag = (FGameplayTag)Tag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool URPGAbilityComponent::CanAddAbility(FName AbilityName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityComponent.CanAddAbility"));
    struct Params_CanAddAbility {
        FName AbilityName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CanAddAbility params{};
    params.AbilityName = (FName)AbilityName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FGuid URPGAbilityComponent::AddAbility(FName AbilityName, bool bForceSyncLoad) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RPGAbilityComponent.AddAbility"));
    struct Params_AddAbility {
        FName AbilityName; // 0x0
        bool bForceSyncLoad; // 0x8
        char pad_9[0x3];
        FGuid ReturnValue; // 0xc
    }; // Size: 0x1c
    Params_AddAbility params{};
    params.AbilityName = (FName)AbilityName;
    params.bForceSyncLoad = (bool)bForceSyncLoad;
    ProcessEvent(func, &params);
    return (FGuid)params.ReturnValue;
}
