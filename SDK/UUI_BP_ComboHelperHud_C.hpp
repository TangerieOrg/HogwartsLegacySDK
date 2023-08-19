#pragma once
#include <cstdint>
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UComboHelperHud.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UUI_BP_ComboHelper_SpellItem_C;
class UCanvasPanelSlot;
class UPopupScreen;
#pragma pack(push, 1)
class UUI_BP_ComboHelperHud_C : public UComboHelperHud {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x308
    UWidgetAnimation* ScrollToPreviousSpell; // 0x310
    UWidgetAnimation* ScrollToNextSpell; // 0x318
    UWidgetAnimation* SuccessAnim; // 0x320
    UWidgetAnimation* Intro; // 0x328
    UUI_BP_ComboHelper_SpellItem_C* ActiveSpell; // 0x330
    UUI_BP_ComboHelper_SpellItem_C* spell_L1; // 0x338
    UUI_BP_ComboHelper_SpellItem_C* spell_L2; // 0x340
    UUI_BP_ComboHelper_SpellItem_C* spell_L3; // 0x348
    UUI_BP_ComboHelper_SpellItem_C* spell_L4; // 0x350
    UUI_BP_ComboHelper_SpellItem_C* spell_L5; // 0x358
    UUI_BP_ComboHelper_SpellItem_C* spell_R1; // 0x360
    UUI_BP_ComboHelper_SpellItem_C* spell_R2; // 0x368
    UUI_BP_ComboHelper_SpellItem_C* spell_R3; // 0x370
    UUI_BP_ComboHelper_SpellItem_C* spell_R4; // 0x378
    UUI_BP_ComboHelper_SpellItem_C* spell_R5; // 0x380
    TArray<UUI_BP_ComboHelper_SpellItem_C*> SpellItems; // 0x388
    TArray<FString> Spell_Names; // 0x398
    int32_t Num_Spells; // 0x3a8
    int32_t currentSpellIndex; // 0x3ac
    float RewindPlaybackSpeed; // 0x3b0
    bool ComboCompleted; // 0x3b4
    char pad_3b5[0x3];
    int32_t NumAttempts; // 0x3b8
    char pad_3bc[0x4];
    static UUI_BP_ComboHelperHud_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_ComboHelperHud_1();
    void SequenceEvent__ENTRYPOINTUI_BP_ComboHelperHud_0();
    void RewindSpellCombo(float CallFunc_Conv_IntToFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void ResetSpells_to_Standard_Position(UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_4, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_5, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_6, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_7, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_8, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_9, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_10);
    void Set_Spell_From_Array(int32_t SpellIndex, UUI_BP_ComboHelper_SpellItem_C* Spell, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FString CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void UpdateSpellSuccess(bool CallFunc_Less_IntInt_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void UpdateSpellCarousel(int32_t CurrentIndex, int32_t TempStartIndex, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t Temp_int_Variable_2, int32_t Temp_int_Variable_3, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue_2, int32_t CallFunc_Subtract_IntInt_ReturnValue_3, int32_t CallFunc_Subtract_IntInt_ReturnValue_4, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Variable_4, int32_t Temp_int_Variable_5, int32_t Temp_int_Variable_6, int32_t Temp_int_Variable_7, int32_t Temp_int_Variable_8, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Variable_9, int32_t CallFunc_Add_IntInt_ReturnValue_4);
    void ScrollAnimationComplete();
    void PreviousScrollAnimationComplete();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnShowComboHelperChanged0(bool bShow);
    void OnRequiredSpellsChanged0(TArray<FString>& SpellNames, int32_t NumSpells);
    void OnSpellSucceeded0(int32_t NumSucceeded);
    void OnSpellFailed0(int32_t NumSucceeded);
    void OnComboCompleted0();
    void OnComboReset0();
    void BndEvt__UI_BP_ComboHelperHud_activeSpell_K2Node_ComponentBoundEvent_0_OnSuccessAnimationComplete__DelegateSignature();
    void BndEvt__UI_BP_ComboHelperHud_activeSpell_K2Node_ComponentBoundEvent_2_OnFailureAnimationComplete__DelegateSignature();
    void OnAutoWinRequested(UPopupScreen* PopupScreen, int32_t CompletionActionIndex);
    void ExecuteUbergraph_UI_BP_ComboHelperHud(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_bShow, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, TArray<FString>& K2Node_Event_SpellNames, int32_t K2Node_Event_NumSpells, int32_t K2Node_Event_NumSucceeded_1, int32_t K2Node_Event_NumSucceeded, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32_t Temp_int_Variable, UPopupScreen* K2Node_CustomEvent_PopupScreen, int32_t K2Node_CustomEvent_CompletionActionIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, int32_t CallFunc_PostEventAtLocation_ReturnValue_3);
}; // Size: 0x3c0
#pragma pack(pop)
