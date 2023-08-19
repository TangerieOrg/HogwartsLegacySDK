#pragma once
#include <cstdint>
#include "EUIQActionBarType.hpp"
#include "EUMGInputAction.hpp"
#include "UScreen.hpp"
class UCommonActionsBase;
class UObject;
#pragma pack(push, 1)
class UActionSelectionScreenBase : public UScreen {
public:
    UCommonActionsBase* CommonActionsCode; // 0x370
    FString CurrentHighlightedItem; // 0x378
    FString CurrentHighlightedItemVariation; // 0x388
    FName CurrentHighlightedItemHolder; // 0x398
    EUIQActionBarType CurrentHighlightedItemType; // 0x3a0
    bool IsSpellVideoShowing; // 0x3a1
    char pad_3a2[0x2];
    FName TutorialName; // 0x3a4
    FName SlotTutorialStepName; // 0x3ac
    bool CurrentHighlightedItemIsUnlocked; // 0x3b4
    bool CurrentHighlightedItemIsBlacklisted; // 0x3b5
    bool InSlottingMode; // 0x3b6
    char pad_3b7[0x1];
    FString TutorializedSpell; // 0x3b8
    bool RequestedSpellSlotted; // 0x3c8
    bool NeedsAutosave; // 0x3c9
    bool LeviosoTutorialActive; // 0x3ca
    bool AccioTutorialActive; // 0x3cb
    bool VanishmentTutorialActive; // 0x3cc
    bool ConjurationTutorialActive; // 0x3cd
    bool CreatureBrushTutorialActive; // 0x3ce
    bool CreatureFeedTutorialActive; // 0x3cf
    bool AlterationTutorialActive; // 0x3d0
    bool EquippingIncendioTutorialActive; // 0x3d1
    bool LoadingSpellMovie; // 0x3d2
    char pad_3d3[0x85];
    static UActionSelectionScreenBase* StaticClass();
    void UpdateMacroCode(FString ItemName, FString Variation, FName HolderID, EUIQActionBarType ItemType);
    void ToggleListenForSpellSlottingEvents(bool ShouldListen);
    void ToggleListenForSpellGroupEvents(bool ShouldListen);
    void SetSlottedSpells();
    void SetItemDataCode(int32_t GroupId);
    void OnSpellSelectedBP(UObject* SpellObject);
    void OnSpellHoveredBP(UObject* SpellObject);
    void OnShowButtonsChanged(bool Show);
    void OnSetSlottedSpells(TArray<FString>& SlottedSpells);
    void OnRequestedSpellSlotted(FString SpellName);
    void OnHideSpellPreviewer();
    void OnHideCursor();
    void OnHandleRightTriggerRelease();
    void OnHandleRightTriggerPress();
    void OnHandleDirectionalButtonInput();
    void OnExitRequested();
    void OnChangeDiamondTop();
    void OnChangeDiamondRight();
    void OnChangeDiamondLeft();
    void OnChangeDiamondBottom();
    void OnCastTopSpell();
    void OnCastRightSpell();
    void OnCastLeftSpell();
    void OnCastBottomSpell();
    void HideCursorIfInTutorial();
    bool HandleViewSpellButtonPress();
    bool HandleRightTriggerRelease();
    bool HandleRightTriggerPress();
    bool HandleKeyUp(EUMGInputAction InputAction);
    bool HandleKeyDown(EUMGInputAction InputAction);
    bool HandleCloseScreenButtonPress();
    bool HandleBackButtonPress();
    void ExitActionSelection();
    bool CanSlotSpell();
    bool CanExitScreen();
    void AttachCommonAction(UCommonActionsBase* ActionsWidget);
}; // Size: 0x458
#pragma pack(pop)
