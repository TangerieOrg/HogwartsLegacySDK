#include "EUIQActionBarType.hpp"
#include "EUMGInputAction.hpp"
#include "UActionSelectionScreenBase.hpp"
#include "UCommonActionsBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UScreen.hpp"
void UActionSelectionScreenBase::OnSpellSelectedBP(UObject* SpellObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnSpellSelectedBP"));
    struct Params_OnSpellSelectedBP {
        UObject* SpellObject; // 0x0
    }; // Size: 0x8
    Params_OnSpellSelectedBP params{};
    params.SpellObject = (UObject*)SpellObject;
    ProcessEvent(func, &params);
}
bool UActionSelectionScreenBase::HandleBackButtonPress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.HandleBackButtonPress"));
    struct Params_HandleBackButtonPress {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleBackButtonPress params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UActionSelectionScreenBase* UActionSelectionScreenBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ActionSelectionScreenBase");
    return (UActionSelectionScreenBase*)res;
}
void UActionSelectionScreenBase::UpdateMacroCode(FString ItemName, FString Variation, FName HolderID, EUIQActionBarType ItemType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.UpdateMacroCode"));
    struct Params_UpdateMacroCode {
        FString ItemName; // 0x0
        FString Variation; // 0x10
        FName HolderID; // 0x20
        EUIQActionBarType ItemType; // 0x28
    }; // Size: 0x29
    Params_UpdateMacroCode params{};
    params.ItemName = (FString)ItemName;
    params.Variation = (FString)Variation;
    params.HolderID = (FName)HolderID;
    params.ItemType = (EUIQActionBarType)ItemType;
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::SetItemDataCode(int32_t GroupId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.SetItemDataCode"));
    struct Params_SetItemDataCode {
        int32_t GroupId; // 0x0
    }; // Size: 0x4
    Params_SetItemDataCode params{};
    params.GroupId = (int32_t)GroupId;
    ProcessEvent(func, &params);
}
bool UActionSelectionScreenBase::HandleKeyUp(EUMGInputAction InputAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.HandleKeyUp"));
    struct Params_HandleKeyUp {
        EUMGInputAction InputAction; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_HandleKeyUp params{};
    params.InputAction = (EUMGInputAction)InputAction;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UActionSelectionScreenBase::ToggleListenForSpellSlottingEvents(bool ShouldListen) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.ToggleListenForSpellSlottingEvents"));
    struct Params_ToggleListenForSpellSlottingEvents {
        bool ShouldListen; // 0x0
    }; // Size: 0x1
    Params_ToggleListenForSpellSlottingEvents params{};
    params.ShouldListen = (bool)ShouldListen;
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::ToggleListenForSpellGroupEvents(bool ShouldListen) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.ToggleListenForSpellGroupEvents"));
    struct Params_ToggleListenForSpellGroupEvents {
        bool ShouldListen; // 0x0
    }; // Size: 0x1
    Params_ToggleListenForSpellGroupEvents params{};
    params.ShouldListen = (bool)ShouldListen;
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::SetSlottedSpells() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.SetSlottedSpells"));
    struct Params_SetSlottedSpells {
    }; // Size: 0x0
    Params_SetSlottedSpells params{};
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::HideCursorIfInTutorial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.HideCursorIfInTutorial"));
    struct Params_HideCursorIfInTutorial {
    }; // Size: 0x0
    Params_HideCursorIfInTutorial params{};
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::OnSpellHoveredBP(UObject* SpellObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnSpellHoveredBP"));
    struct Params_OnSpellHoveredBP {
        UObject* SpellObject; // 0x0
    }; // Size: 0x8
    Params_OnSpellHoveredBP params{};
    params.SpellObject = (UObject*)SpellObject;
    ProcessEvent(func, &params);
}
bool UActionSelectionScreenBase::HandleRightTriggerPress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.HandleRightTriggerPress"));
    struct Params_HandleRightTriggerPress {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleRightTriggerPress params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UActionSelectionScreenBase::OnShowButtonsChanged(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnShowButtonsChanged"));
    struct Params_OnShowButtonsChanged {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_OnShowButtonsChanged params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
bool UActionSelectionScreenBase::HandleRightTriggerRelease() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.HandleRightTriggerRelease"));
    struct Params_HandleRightTriggerRelease {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleRightTriggerRelease params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UActionSelectionScreenBase::OnSetSlottedSpells(TArray<FString>& SlottedSpells) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnSetSlottedSpells"));
    struct Params_OnSetSlottedSpells {
        TArray<FString> SlottedSpells; // 0x0
    }; // Size: 0x10
    Params_OnSetSlottedSpells params{};
    params.SlottedSpells = (TArray<FString>)SlottedSpells;
    ProcessEvent(func, &params);
    SlottedSpells = params.SlottedSpells;
}
void UActionSelectionScreenBase::OnRequestedSpellSlotted(FString SpellName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnRequestedSpellSlotted"));
    struct Params_OnRequestedSpellSlotted {
        FString SpellName; // 0x0
    }; // Size: 0x10
    Params_OnRequestedSpellSlotted params{};
    params.SpellName = (FString)SpellName;
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::OnCastRightSpell() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnCastRightSpell"));
    struct Params_OnCastRightSpell {
    }; // Size: 0x0
    Params_OnCastRightSpell params{};
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::OnHideSpellPreviewer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnHideSpellPreviewer"));
    struct Params_OnHideSpellPreviewer {
    }; // Size: 0x0
    Params_OnHideSpellPreviewer params{};
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::OnHideCursor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnHideCursor"));
    struct Params_OnHideCursor {
    }; // Size: 0x0
    Params_OnHideCursor params{};
    ProcessEvent(func, &params);
}
bool UActionSelectionScreenBase::CanExitScreen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.CanExitScreen"));
    struct Params_CanExitScreen {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanExitScreen params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UActionSelectionScreenBase::OnHandleDirectionalButtonInput() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnHandleDirectionalButtonInput"));
    struct Params_OnHandleDirectionalButtonInput {
    }; // Size: 0x0
    Params_OnHandleDirectionalButtonInput params{};
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::OnHandleRightTriggerRelease() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnHandleRightTriggerRelease"));
    struct Params_OnHandleRightTriggerRelease {
    }; // Size: 0x0
    Params_OnHandleRightTriggerRelease params{};
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::OnHandleRightTriggerPress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnHandleRightTriggerPress"));
    struct Params_OnHandleRightTriggerPress {
    }; // Size: 0x0
    Params_OnHandleRightTriggerPress params{};
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::OnChangeDiamondRight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnChangeDiamondRight"));
    struct Params_OnChangeDiamondRight {
    }; // Size: 0x0
    Params_OnChangeDiamondRight params{};
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::OnExitRequested() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnExitRequested"));
    struct Params_OnExitRequested {
    }; // Size: 0x0
    Params_OnExitRequested params{};
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::OnChangeDiamondTop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnChangeDiamondTop"));
    struct Params_OnChangeDiamondTop {
    }; // Size: 0x0
    Params_OnChangeDiamondTop params{};
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::OnChangeDiamondLeft() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnChangeDiamondLeft"));
    struct Params_OnChangeDiamondLeft {
    }; // Size: 0x0
    Params_OnChangeDiamondLeft params{};
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::OnChangeDiamondBottom() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnChangeDiamondBottom"));
    struct Params_OnChangeDiamondBottom {
    }; // Size: 0x0
    Params_OnChangeDiamondBottom params{};
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::OnCastTopSpell() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnCastTopSpell"));
    struct Params_OnCastTopSpell {
    }; // Size: 0x0
    Params_OnCastTopSpell params{};
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::OnCastLeftSpell() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnCastLeftSpell"));
    struct Params_OnCastLeftSpell {
    }; // Size: 0x0
    Params_OnCastLeftSpell params{};
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::OnCastBottomSpell() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.OnCastBottomSpell"));
    struct Params_OnCastBottomSpell {
    }; // Size: 0x0
    Params_OnCastBottomSpell params{};
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase::ExitActionSelection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.ExitActionSelection"));
    struct Params_ExitActionSelection {
    }; // Size: 0x0
    Params_ExitActionSelection params{};
    ProcessEvent(func, &params);
}
bool UActionSelectionScreenBase::HandleViewSpellButtonPress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.HandleViewSpellButtonPress"));
    struct Params_HandleViewSpellButtonPress {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleViewSpellButtonPress params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UActionSelectionScreenBase::HandleKeyDown(EUMGInputAction InputAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.HandleKeyDown"));
    struct Params_HandleKeyDown {
        EUMGInputAction InputAction; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_HandleKeyDown params{};
    params.InputAction = (EUMGInputAction)InputAction;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UActionSelectionScreenBase::HandleCloseScreenButtonPress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.HandleCloseScreenButtonPress"));
    struct Params_HandleCloseScreenButtonPress {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleCloseScreenButtonPress params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UActionSelectionScreenBase::CanSlotSpell() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.CanSlotSpell"));
    struct Params_CanSlotSpell {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanSlotSpell params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UActionSelectionScreenBase::AttachCommonAction(UCommonActionsBase* ActionsWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase.AttachCommonAction"));
    struct Params_AttachCommonAction {
        UCommonActionsBase* ActionsWidget; // 0x0
    }; // Size: 0x8
    Params_AttachCommonAction params{};
    params.ActionsWidget = (UCommonActionsBase*)ActionsWidget;
    ProcessEvent(func, &params);
}
