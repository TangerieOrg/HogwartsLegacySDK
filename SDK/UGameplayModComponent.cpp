#include "FGameplayTag.hpp"
#include "FModEntry.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UGameplayModComponent.hpp"
#include "UGameplayPropertyMod.hpp"
#include "UGameplayPropertyModGroup.hpp"
#include "UObject.hpp"
void UGameplayModComponent::RemoveGroupReplicated(UGameplayPropertyModGroup* InModGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.RemoveGroupReplicated"));
    struct Params_RemoveGroupReplicated {
        UGameplayPropertyModGroup* InModGroup; // 0x0
    }; // Size: 0x8
    Params_RemoveGroupReplicated params{};
    params.InModGroup = (UGameplayPropertyModGroup*)InModGroup;
    ProcessEvent(func, &params);
}
UGameplayModComponent* UGameplayModComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayMods.GameplayModComponent");
    return (UGameplayModComponent*)res;
}
void UGameplayModComponent::RemoveTargetModdable(UObject* InTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.RemoveTargetModdable"));
    struct Params_RemoveTargetModdable {
        UObject* InTarget; // 0x0
    }; // Size: 0x8
    Params_RemoveTargetModdable params{};
    params.InTarget = (UObject*)InTarget;
    ProcessEvent(func, &params);
}
void UGameplayModComponent::SetModBlackboardValue(FGameplayTag& Tag, float Value, bool bForceRecomputeProperties) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.SetModBlackboardValue"));
    struct Params_SetModBlackboardValue {
        FGameplayTag Tag; // 0x0
        float Value; // 0x8
        bool bForceRecomputeProperties; // 0xc
    }; // Size: 0xd
    Params_SetModBlackboardValue params{};
    params.Tag = (FGameplayTag)Tag;
    params.Value = (float)Value;
    params.bForceRecomputeProperties = (bool)bForceRecomputeProperties;
    ProcessEvent(func, &params);
    Tag = params.Tag;
}
void UGameplayModComponent::ServerRemoveMod(UGameplayPropertyMod* InMod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.ServerRemoveMod"));
    struct Params_ServerRemoveMod {
        UGameplayPropertyMod* InMod; // 0x0
    }; // Size: 0x8
    Params_ServerRemoveMod params{};
    params.InMod = (UGameplayPropertyMod*)InMod;
    ProcessEvent(func, &params);
}
void UGameplayModComponent::ServerRemoveGroup(UGameplayPropertyModGroup* InModGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.ServerRemoveGroup"));
    struct Params_ServerRemoveGroup {
        UGameplayPropertyModGroup* InModGroup; // 0x0
    }; // Size: 0x8
    Params_ServerRemoveGroup params{};
    params.InModGroup = (UGameplayPropertyModGroup*)InModGroup;
    ProcessEvent(func, &params);
}
void UGameplayModComponent::ServerAddMod(UGameplayPropertyMod* InMod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.ServerAddMod"));
    struct Params_ServerAddMod {
        UGameplayPropertyMod* InMod; // 0x0
    }; // Size: 0x8
    Params_ServerAddMod params{};
    params.InMod = (UGameplayPropertyMod*)InMod;
    ProcessEvent(func, &params);
}
void UGameplayModComponent::RemoveModReplicated(UGameplayPropertyMod* InMod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.RemoveModReplicated"));
    struct Params_RemoveModReplicated {
        UGameplayPropertyMod* InMod; // 0x0
    }; // Size: 0x8
    Params_RemoveModReplicated params{};
    params.InMod = (UGameplayPropertyMod*)InMod;
    ProcessEvent(func, &params);
}
void UGameplayModComponent::AutoDetectModdables() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.AutoDetectModdables"));
    struct Params_AutoDetectModdables {
    }; // Size: 0x0
    Params_AutoDetectModdables params{};
    ProcessEvent(func, &params);
}
void UGameplayModComponent::ServerAddGroup(UGameplayPropertyModGroup* InModGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.ServerAddGroup"));
    struct Params_ServerAddGroup {
        UGameplayPropertyModGroup* InModGroup; // 0x0
    }; // Size: 0x8
    Params_ServerAddGroup params{};
    params.InModGroup = (UGameplayPropertyModGroup*)InModGroup;
    ProcessEvent(func, &params);
}
void UGameplayModComponent::RemoveMod(UGameplayPropertyMod* InMod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.RemoveMod"));
    struct Params_RemoveMod {
        UGameplayPropertyMod* InMod; // 0x0
    }; // Size: 0x8
    Params_RemoveMod params{};
    params.InMod = (UGameplayPropertyMod*)InMod;
    ProcessEvent(func, &params);
}
void UGameplayModComponent::DelayedRemoveMod(UGameplayPropertyMod* InMod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.DelayedRemoveMod"));
    struct Params_DelayedRemoveMod {
        UGameplayPropertyMod* InMod; // 0x0
    }; // Size: 0x8
    Params_DelayedRemoveMod params{};
    params.InMod = (UGameplayPropertyMod*)InMod;
    ProcessEvent(func, &params);
}
void UGameplayModComponent::RemoveGroup(UGameplayPropertyModGroup* InModGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.RemoveGroup"));
    struct Params_RemoveGroup {
        UGameplayPropertyModGroup* InModGroup; // 0x0
    }; // Size: 0x8
    Params_RemoveGroup params{};
    params.InModGroup = (UGameplayPropertyModGroup*)InModGroup;
    ProcessEvent(func, &params);
}
void UGameplayModComponent::OnRep_ModEntries() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.OnRep_ModEntries"));
    struct Params_OnRep_ModEntries {
    }; // Size: 0x0
    Params_OnRep_ModEntries params{};
    ProcessEvent(func, &params);
}
bool UGameplayModComponent::GetModBlackboardValue(FGameplayTag& Tag, float& OutValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.GetModBlackboardValue"));
    struct Params_GetModBlackboardValue {
        FGameplayTag Tag; // 0x0
        float OutValue; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetModBlackboardValue params{};
    params.Tag = (FGameplayTag)Tag;
    params.OutValue = (float)OutValue;
    ProcessEvent(func, &params);
    Tag = params.Tag;
    OutValue = params.OutValue;
    return (bool)params.ReturnValue;
}
void UGameplayModComponent::ExpungeTargetModdable(UObject* InTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.ExpungeTargetModdable"));
    struct Params_ExpungeTargetModdable {
        UObject* InTarget; // 0x0
    }; // Size: 0x8
    Params_ExpungeTargetModdable params{};
    params.InTarget = (UObject*)InTarget;
    ProcessEvent(func, &params);
}
void UGameplayModComponent::ClientRemoveModManualReplication(UGameplayPropertyMod* InMod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.ClientRemoveModManualReplication"));
    struct Params_ClientRemoveModManualReplication {
        UGameplayPropertyMod* InMod; // 0x0
    }; // Size: 0x8
    Params_ClientRemoveModManualReplication params{};
    params.InMod = (UGameplayPropertyMod*)InMod;
    ProcessEvent(func, &params);
}
void UGameplayModComponent::ClientRemoveGroupManualReplication(UGameplayPropertyModGroup* InModGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.ClientRemoveGroupManualReplication"));
    struct Params_ClientRemoveGroupManualReplication {
        UGameplayPropertyModGroup* InModGroup; // 0x0
    }; // Size: 0x8
    Params_ClientRemoveGroupManualReplication params{};
    params.InModGroup = (UGameplayPropertyModGroup*)InModGroup;
    ProcessEvent(func, &params);
}
void UGameplayModComponent::AddGroupReplicated(UGameplayPropertyModGroup* InModGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.AddGroupReplicated"));
    struct Params_AddGroupReplicated {
        UGameplayPropertyModGroup* InModGroup; // 0x0
    }; // Size: 0x8
    Params_AddGroupReplicated params{};
    params.InModGroup = (UGameplayPropertyModGroup*)InModGroup;
    ProcessEvent(func, &params);
}
void UGameplayModComponent::ClientAddModManualReplication(UGameplayPropertyMod* InMod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.ClientAddModManualReplication"));
    struct Params_ClientAddModManualReplication {
        UGameplayPropertyMod* InMod; // 0x0
    }; // Size: 0x8
    Params_ClientAddModManualReplication params{};
    params.InMod = (UGameplayPropertyMod*)InMod;
    ProcessEvent(func, &params);
}
void UGameplayModComponent::ClientAddGroupManualReplication(UGameplayPropertyModGroup* InModGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.ClientAddGroupManualReplication"));
    struct Params_ClientAddGroupManualReplication {
        UGameplayPropertyModGroup* InModGroup; // 0x0
    }; // Size: 0x8
    Params_ClientAddGroupManualReplication params{};
    params.InModGroup = (UGameplayPropertyModGroup*)InModGroup;
    ProcessEvent(func, &params);
}
void UGameplayModComponent::AddTargetModdable(UObject* InTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.AddTargetModdable"));
    struct Params_AddTargetModdable {
        UObject* InTarget; // 0x0
    }; // Size: 0x8
    Params_AddTargetModdable params{};
    params.InTarget = (UObject*)InTarget;
    ProcessEvent(func, &params);
}
void UGameplayModComponent::AddModReplicated(UGameplayPropertyMod* InMod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.AddModReplicated"));
    struct Params_AddModReplicated {
        UGameplayPropertyMod* InMod; // 0x0
    }; // Size: 0x8
    Params_AddModReplicated params{};
    params.InMod = (UGameplayPropertyMod*)InMod;
    ProcessEvent(func, &params);
}
void UGameplayModComponent::AddMod(UGameplayPropertyMod* InMod) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.AddMod"));
    struct Params_AddMod {
        UGameplayPropertyMod* InMod; // 0x0
    }; // Size: 0x8
    Params_AddMod params{};
    params.InMod = (UGameplayPropertyMod*)InMod;
    ProcessEvent(func, &params);
}
void UGameplayModComponent::AddGroup(UGameplayPropertyModGroup* InModGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.GameplayModComponent.AddGroup"));
    struct Params_AddGroup {
        UGameplayPropertyModGroup* InModGroup; // 0x0
    }; // Size: 0x8
    Params_AddGroup params{};
    params.InModGroup = (UGameplayPropertyModGroup*)InModGroup;
    ProcessEvent(func, &params);
}
