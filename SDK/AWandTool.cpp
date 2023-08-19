#include "AActor.hpp"
#include "AFlyingBook.hpp"
#include "AItemTool.hpp"
#include "AProtegoSpellTool.hpp"
#include "ASpellTool.hpp"
#include "ATool.hpp"
#include "AWandTool.hpp"
#include "ERightArmState\Type.hpp"
#include "EWandCastType\Type.hpp"
#include "FBTCustomAction.hpp"
#include "FComboSplitData.hpp"
#include "FDialogueConversationReference.hpp"
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UButtonWatcherRecord.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMeshComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UReticule.hpp"
#include "USpellToolRecord.hpp"
#include "UToolSetComponent.hpp"
#include "UTriggerEffect.hpp"
AWandTool* AWandTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WandTool");
    return (AWandTool*)res;
}
bool AWandTool::CastSpell(ASpellTool* InSpellTool, bool bImmediate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.CastSpell"));
    struct Params_CastSpell {
        ASpellTool* InSpellTool; // 0x0
        bool bImmediate; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_CastSpell params{};
    params.InSpellTool = (ASpellTool*)InSpellTool;
    params.bImmediate = (bool)bImmediate;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AWandTool::TurnOffTriggerEffects() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.TurnOffTriggerEffects"));
    struct Params_TurnOffTriggerEffects {
    }; // Size: 0x0
    Params_TurnOffTriggerEffects params{};
    ProcessEvent(func, &params);
}
void AWandTool::CancelHeavyComboSplitTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.CancelHeavyComboSplitTimer"));
    struct Params_CancelHeavyComboSplitTimer {
    }; // Size: 0x0
    Params_CancelHeavyComboSplitTimer params{};
    ProcessEvent(func, &params);
}
void AWandTool::ComputeParryAimTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.ComputeParryAimTransform"));
    struct Params_ComputeParryAimTransform {
    }; // Size: 0x0
    Params_ComputeParryAimTransform params{};
    ProcessEvent(func, &params);
}
void AWandTool::SetFinishersActive(bool bActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.SetFinishersActive"));
    struct Params_SetFinishersActive {
        bool bActive; // 0x0
    }; // Size: 0x1
    Params_SetFinishersActive params{};
    params.bActive = (bool)bActive;
    ProcessEvent(func, &params);
}
void AWandTool::WandCastFailedTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.WandCastFailedTimerExpired"));
    struct Params_WandCastFailedTimerExpired {
    }; // Size: 0x0
    Params_WandCastFailedTimerExpired params{};
    ProcessEvent(func, &params);
}
bool AWandTool::CastStealthTakedown() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.CastStealthTakedown"));
    struct Params_CastStealthTakedown {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CastStealthTakedown params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AWandTool::TurnOnTriggerEffects() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.TurnOnTriggerEffects"));
    struct Params_TurnOnTriggerEffects {
    }; // Size: 0x0
    Params_TurnOnTriggerEffects params{};
    ProcessEvent(func, &params);
}
float AWandTool::GetProjectileSpeedMultiplier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.GetProjectileSpeedMultiplier"));
    struct Params_GetProjectileSpeedMultiplier {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetProjectileSpeedMultiplier params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool AWandTool::StopLastSpell(ASpellTool* NewSpellTool, bool& OutAlreadyActivated) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.StopLastSpell"));
    struct Params_StopLastSpell {
        ASpellTool* NewSpellTool; // 0x0
        bool OutAlreadyActivated; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_StopLastSpell params{};
    params.NewSpellTool = (ASpellTool*)NewSpellTool;
    params.OutAlreadyActivated = (bool)OutAlreadyActivated;
    ProcessEvent(func, &params);
    OutAlreadyActivated = params.OutAlreadyActivated;
    return (bool)params.ReturnValue;
}
ASpellTool* AWandTool::GetActiveSpellTool() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.GetActiveSpellTool"));
    struct Params_GetActiveSpellTool {
        ASpellTool* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActiveSpellTool params{};
    ProcessEvent(func, &params);
    return (ASpellTool*)params.ReturnValue;
}
void AWandTool::TargetSpellSelected(bool Immediate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.TargetSpellSelected"));
    struct Params_TargetSpellSelected {
        bool Immediate; // 0x0
    }; // Size: 0x1
    Params_TargetSpellSelected params{};
    params.Immediate = (bool)Immediate;
    ProcessEvent(func, &params);
}
bool AWandTool::AreAllSlottedSpellsLoaded(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.AreAllSlottedSpellsLoaded"));
    struct Params_AreAllSlottedSpellsLoaded {
        AActor* InActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_AreAllSlottedSpellsLoaded params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AWandTool::CancelCurrentSpell() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.CancelCurrentSpell"));
    struct Params_CancelCurrentSpell {
    }; // Size: 0x0
    Params_CancelCurrentSpell params{};
    ProcessEvent(func, &params);
}
void AWandTool::StartComboSplitTimer(FComboSplitData ComboSplitData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.StartComboSplitTimer"));
    struct Params_StartComboSplitTimer {
        FComboSplitData ComboSplitData; // 0x0
    }; // Size: 0x38
    Params_StartComboSplitTimer params{};
    params.ComboSplitData = (FComboSplitData)ComboSplitData;
    ProcessEvent(func, &params);
}
void AWandTool::StartHeavyComboSplitTimer(FComboSplitData ComboSplitData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.StartHeavyComboSplitTimer"));
    struct Params_StartHeavyComboSplitTimer {
        FComboSplitData ComboSplitData; // 0x0
    }; // Size: 0x38
    Params_StartHeavyComboSplitTimer params{};
    params.ComboSplitData = (FComboSplitData)ComboSplitData;
    ProcessEvent(func, &params);
}
void AWandTool::OnCharacterLoadComplete(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.OnCharacterLoadComplete"));
    struct Params_OnCharacterLoadComplete {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_OnCharacterLoadComplete params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
void AWandTool::OnSpell_Released(int32_t SpellSlot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.OnSpell_Released"));
    struct Params_OnSpell_Released {
        int32_t SpellSlot; // 0x0
    }; // Size: 0x4
    Params_OnSpell_Released params{};
    params.SpellSlot = (int32_t)SpellSlot;
    ProcessEvent(func, &params);
}
void AWandTool::SpellPreload() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.SpellPreload"));
    struct Params_SpellPreload {
    }; // Size: 0x0
    Params_SpellPreload params{};
    ProcessEvent(func, &params);
}
void AWandTool::ResetHeavyCombo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.ResetHeavyCombo"));
    struct Params_ResetHeavyCombo {
    }; // Size: 0x0
    Params_ResetHeavyCombo params{};
    ProcessEvent(func, &params);
}
void AWandTool::SetWandStyle(FName WandStyle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.SetWandStyle"));
    struct Params_SetWandStyle {
        FName WandStyle; // 0x0
    }; // Size: 0x8
    Params_SetWandStyle params{};
    params.WandStyle = (FName)WandStyle;
    ProcessEvent(func, &params);
}
void AWandTool::SetProjectileSpeedMultiplier(float Multiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.SetProjectileSpeedMultiplier"));
    struct Params_SetProjectileSpeedMultiplier {
        float Multiplier; // 0x0
    }; // Size: 0x4
    Params_SetProjectileSpeedMultiplier params{};
    params.Multiplier = (float)Multiplier;
    ProcessEvent(func, &params);
}
void AWandTool::SetNextWandCastType(EWandCastType::Type WandCastState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.SetNextWandCastType"));
    struct Params_SetNextWandCastType {
        EWandCastType::Type WandCastState; // 0x0
    }; // Size: 0x1
    Params_SetNextWandCastType params{};
    params.WandCastState = (EWandCastType::Type)WandCastState;
    ProcessEvent(func, &params);
}
UMeshComponent* AWandTool::GetWandMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.GetWandMesh"));
    struct Params_GetWandMesh {
        UMeshComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWandMesh params{};
    ProcessEvent(func, &params);
    return (UMeshComponent*)params.ReturnValue;
}
void AWandTool::SetNextLightCastAbility(UClass* InAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.SetNextLightCastAbility"));
    struct Params_SetNextLightCastAbility {
        UClass* InAbility; // 0x0
    }; // Size: 0x8
    Params_SetNextLightCastAbility params{};
    params.InAbility = (UClass*)InAbility;
    ProcessEvent(func, &params);
}
void AWandTool::SetNextHeavyCastAbility(UClass* InAbility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.SetNextHeavyCastAbility"));
    struct Params_SetNextHeavyCastAbility {
        UClass* InAbility; // 0x0
    }; // Size: 0x8
    Params_SetNextHeavyCastAbility params{};
    params.InAbility = (UClass*)InAbility;
    ProcessEvent(func, &params);
}
void AWandTool::SetContextsOnBarSpell(int32_t Index, bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.SetContextsOnBarSpell"));
    struct Params_SetContextsOnBarSpell {
        int32_t Index; // 0x0
        bool bFlag; // 0x4
    }; // Size: 0x5
    Params_SetContextsOnBarSpell params{};
    params.Index = (int32_t)Index;
    params.bFlag = (bool)bFlag;
    ProcessEvent(func, &params);
}
void AWandTool::SetAttackingActor(AActor* i_attackingActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.SetAttackingActor"));
    struct Params_SetAttackingActor {
        AActor* i_attackingActor; // 0x0
    }; // Size: 0x8
    Params_SetAttackingActor params{};
    params.i_attackingActor = (AActor*)i_attackingActor;
    ProcessEvent(func, &params);
}
void AWandTool::OnSpellLoaded(USpellToolRecord* SpellToolRecord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.OnSpellLoaded"));
    struct Params_OnSpellLoaded {
        USpellToolRecord* SpellToolRecord; // 0x0
    }; // Size: 0x8
    Params_OnSpellLoaded params{};
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    ProcessEvent(func, &params);
}
void AWandTool::SetAimTransform(FVector Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.SetAimTransform"));
    struct Params_SetAimTransform {
        FVector Target; // 0x0
    }; // Size: 0xc
    Params_SetAimTransform params{};
    params.Target = (FVector)Target;
    ProcessEvent(func, &params);
}
bool AWandTool::AreFinishersActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.AreFinishersActive"));
    struct Params_AreFinishersActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AreFinishersActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AWandTool::BlockStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.BlockStart"));
    struct Params_BlockStart {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_BlockStart params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AWandTool::ResetLightCombo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.ResetLightCombo"));
    struct Params_ResetLightCombo {
    }; // Size: 0x0
    Params_ResetLightCombo params{};
    ProcessEvent(func, &params);
}
int32_t AWandTool::GetTargetSpellIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.GetTargetSpellIndex"));
    struct Params_GetTargetSpellIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTargetSpellIndex params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void AWandTool::ResetCombos() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.ResetCombos"));
    struct Params_ResetCombos {
    }; // Size: 0x0
    Params_ResetCombos params{};
    ProcessEvent(func, &params);
}
void AWandTool::ResetComboOnBranch() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.ResetComboOnBranch"));
    struct Params_ResetComboOnBranch {
    }; // Size: 0x0
    Params_ResetComboOnBranch params{};
    ProcessEvent(func, &params);
}
UReticule* AWandTool::GetReticleWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.GetReticleWidget"));
    struct Params_GetReticleWidget {
        UReticule* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetReticleWidget params{};
    ProcessEvent(func, &params);
    return (UReticule*)params.ReturnValue;
}
void AWandTool::OnSpellCast__DelegateSignature(ASpellTool* SpellTool) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.WandTool.OnSpellCast__DelegateSignature"));
    struct Params_OnSpellCast__DelegateSignature {
        ASpellTool* SpellTool; // 0x0
    }; // Size: 0x8
    Params_OnSpellCast__DelegateSignature params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    ProcessEvent(func, &params);
}
void AWandTool::RemoveCollectibleBook(AFlyingBook* book) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.RemoveCollectibleBook"));
    struct Params_RemoveCollectibleBook {
        AFlyingBook* book; // 0x0
    }; // Size: 0x8
    Params_RemoveCollectibleBook params{};
    params.book = (AFlyingBook*)book;
    ProcessEvent(func, &params);
}
void AWandTool::OnSpellCasted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.OnSpellCasted"));
    struct Params_OnSpellCasted {
    }; // Size: 0x0
    Params_OnSpellCasted params{};
    ProcessEvent(func, &params);
}
bool AWandTool::CheckRequiredPerks(FGameplayTagContainer& PerkContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.CheckRequiredPerks"));
    struct Params_CheckRequiredPerks {
        FGameplayTagContainer PerkContainer; // 0x0
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_CheckRequiredPerks params{};
    params.PerkContainer = (FGameplayTagContainer)PerkContainer;
    ProcessEvent(func, &params);
    PerkContainer = params.PerkContainer;
    return (bool)params.ReturnValue;
}
void AWandTool::OnSpell_Pressed(int32_t SpellSlot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.OnSpell_Pressed"));
    struct Params_OnSpell_Pressed {
        int32_t SpellSlot; // 0x0
    }; // Size: 0x4
    Params_OnSpell_Pressed params{};
    params.SpellSlot = (int32_t)SpellSlot;
    ProcessEvent(func, &params);
}
void AWandTool::OnRightArmStateChanged(ERightArmState::Type RightArmState, ERightArmState::Type LastRightArmState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.OnRightArmStateChanged"));
    struct Params_OnRightArmStateChanged {
        ERightArmState::Type RightArmState; // 0x0
        ERightArmState::Type LastRightArmState; // 0x1
    }; // Size: 0x2
    Params_OnRightArmStateChanged params{};
    params.RightArmState = (ERightArmState::Type)RightArmState;
    params.LastRightArmState = (ERightArmState::Type)LastRightArmState;
    ProcessEvent(func, &params);
}
bool AWandTool::IsSpellToolAvailable(USpellToolRecord* SpellToolRecord, bool bImmediate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.IsSpellToolAvailable"));
    struct Params_IsSpellToolAvailable {
        USpellToolRecord* SpellToolRecord; // 0x0
        bool bImmediate; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_IsSpellToolAvailable params{};
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.bImmediate = (bool)bImmediate;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AWandTool::OnActiveSpellToolChanged(ATool* ActivatedSpell, ATool* DeactivatedSpell) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.OnActiveSpellToolChanged"));
    struct Params_OnActiveSpellToolChanged {
        ATool* ActivatedSpell; // 0x0
        ATool* DeactivatedSpell; // 0x8
    }; // Size: 0x10
    Params_OnActiveSpellToolChanged params{};
    params.ActivatedSpell = (ATool*)ActivatedSpell;
    params.DeactivatedSpell = (ATool*)DeactivatedSpell;
    ProcessEvent(func, &params);
}
bool AWandTool::LoadSpellByName(AActor* InActor, FString Spell, bool Async, bool HighPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.LoadSpellByName"));
    struct Params_LoadSpellByName {
        AActor* InActor; // 0x0
        FString Spell; // 0x8
        bool Async; // 0x18
        bool HighPriority; // 0x19
        bool ReturnValue; // 0x1a
    }; // Size: 0x1b
    Params_LoadSpellByName params{};
    params.InActor = (AActor*)InActor;
    params.Spell = (FString)Spell;
    params.Async = (bool)Async;
    params.HighPriority = (bool)HighPriority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AWandTool::LoadAllSlottedSpells(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.LoadAllSlottedSpells"));
    struct Params_LoadAllSlottedSpells {
        AActor* InActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_LoadAllSlottedSpells params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ASpellTool* AWandTool::ActivateSpellTool(USpellToolRecord* SpellToolRecord, bool bImmediate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.ActivateSpellTool"));
    struct Params_ActivateSpellTool {
        USpellToolRecord* SpellToolRecord; // 0x0
        bool bImmediate; // 0x8
        char pad_9[0x7];
        ASpellTool* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_ActivateSpellTool params{};
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.bImmediate = (bool)bImmediate;
    ProcessEvent(func, &params);
    return (ASpellTool*)params.ReturnValue;
}
bool AWandTool::LoadAllAccessibleSpells(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.LoadAllAccessibleSpells"));
    struct Params_LoadAllAccessibleSpells {
        AActor* InActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_LoadAllAccessibleSpells params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ASpellTool* AWandTool::GetSpellTool(USpellToolRecord* SpellToolRecord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.GetSpellTool"));
    struct Params_GetSpellTool {
        USpellToolRecord* SpellToolRecord; // 0x0
        ASpellTool* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSpellTool params{};
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    ProcessEvent(func, &params);
    return (ASpellTool*)params.ReturnValue;
}
USpellToolRecord* AWandTool::GetSpellRecordFromSlot(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.GetSpellRecordFromSlot"));
    struct Params_GetSpellRecordFromSlot {
        int32_t Index; // 0x0
        char pad_4[0x4];
        USpellToolRecord* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSpellRecordFromSlot params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
    return (USpellToolRecord*)params.ReturnValue;
}
void AWandTool::ApplyTriggerEffectDefault(bool RightTrigger, bool LeftTrigger) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.ApplyTriggerEffectDefault"));
    struct Params_ApplyTriggerEffectDefault {
        bool RightTrigger; // 0x0
        bool LeftTrigger; // 0x1
    }; // Size: 0x2
    Params_ApplyTriggerEffectDefault params{};
    params.RightTrigger = (bool)RightTrigger;
    params.LeftTrigger = (bool)LeftTrigger;
    ProcessEvent(func, &params);
}
AProtegoSpellTool* AWandTool::GetProtegoSpellTool() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.GetProtegoSpellTool"));
    struct Params_GetProtegoSpellTool {
        AProtegoSpellTool* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetProtegoSpellTool params{};
    ProcessEvent(func, &params);
    return (AProtegoSpellTool*)params.ReturnValue;
}
ASpellTool* AWandTool::GetFinisherSpellTool(int32_t SpellSlot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.GetFinisherSpellTool"));
    struct Params_GetFinisherSpellTool {
        int32_t SpellSlot; // 0x0
        char pad_4[0x4];
        ASpellTool* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetFinisherSpellTool params{};
    params.SpellSlot = (int32_t)SpellSlot;
    ProcessEvent(func, &params);
    return (ASpellTool*)params.ReturnValue;
}
bool AWandTool::AreAllAccessibleSpellsLoaded(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.AreAllAccessibleSpellsLoaded"));
    struct Params_AreAllAccessibleSpellsLoaded {
        AActor* InActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_AreAllAccessibleSpellsLoaded params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AWandTool::EndSpellCast(ASpellTool*& InSpellTool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.EndSpellCast"));
    struct Params_EndSpellCast {
        ASpellTool* InSpellTool; // 0x0
    }; // Size: 0x8
    Params_EndSpellCast params{};
    params.InSpellTool = (ASpellTool*)InSpellTool;
    ProcessEvent(func, &params);
    InSpellTool = params.InSpellTool;
}
bool AWandTool::CastPewPewSpell() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.CastPewPewSpell"));
    struct Params_CastPewPewSpell {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CastPewPewSpell params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AWandTool::CastActiveSpell() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.CastActiveSpell"));
    struct Params_CastActiveSpell {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CastActiveSpell params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AWandTool::BarItemSelected(AActor* InActor, int32_t Index, bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.BarItemSelected"));
    struct Params_BarItemSelected {
        AActor* InActor; // 0x0
        int32_t Index; // 0x8
        bool bFlag; // 0xc
    }; // Size: 0xd
    Params_BarItemSelected params{};
    params.InActor = (AActor*)InActor;
    params.Index = (int32_t)Index;
    params.bFlag = (bool)bFlag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AWandTool::CancelComboSplitTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.CancelComboSplitTimer"));
    struct Params_CancelComboSplitTimer {
    }; // Size: 0x0
    Params_CancelComboSplitTimer params{};
    ProcessEvent(func, &params);
}
void AWandTool::BlockEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.BlockEnd"));
    struct Params_BlockEnd {
    }; // Size: 0x0
    Params_BlockEnd params{};
    ProcessEvent(func, &params);
}
void AWandTool::AddCollectibleBook(AFlyingBook* book) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.AddCollectibleBook"));
    struct Params_AddCollectibleBook {
        AFlyingBook* book; // 0x0
    }; // Size: 0x8
    Params_AddCollectibleBook params{};
    params.book = (AFlyingBook*)book;
    ProcessEvent(func, &params);
}
bool AWandTool::ActivateInstantSpellTool(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandTool.ActivateInstantSpellTool"));
    struct Params_ActivateInstantSpellTool {
        int32_t Index; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_ActivateInstantSpellTool params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
