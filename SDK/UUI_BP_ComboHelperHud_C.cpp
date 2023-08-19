#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UComboHelperHud.hpp"
#include "UFunction.hpp"
#include "UPopupScreen.hpp"
#include "UUI_BP_ComboHelperHud_C.hpp"
#include "UUI_BP_ComboHelper_SpellItem_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_ComboHelperHud_C* UUI_BP_ComboHelperHud_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C");
    return (UUI_BP_ComboHelperHud_C*)res;
}
void UUI_BP_ComboHelperHud_C::Set_Spell_From_Array(int32_t SpellIndex, UUI_BP_ComboHelper_SpellItem_C* Spell, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FString CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.Set Spell From Array"));
    struct Params_Set_Spell_From_Array {
        int32_t SpellIndex; // 0x0
        char pad_4[0x4];
        UUI_BP_ComboHelper_SpellItem_C* Spell; // 0x8
        bool CallFunc_GreaterEqual_IntInt_ReturnValue; // 0x10
        char pad_11[0x7];
        FString CallFunc_Array_Get_Item; // 0x18
        bool CallFunc_Less_IntInt_ReturnValue; // 0x28
        bool CallFunc_BooleanAND_ReturnValue; // 0x29
    }; // Size: 0x2a
    Params_Set_Spell_From_Array params{};
    params.SpellIndex = (int32_t)SpellIndex;
    params.Spell = (UUI_BP_ComboHelper_SpellItem_C*)Spell;
    params.CallFunc_GreaterEqual_IntInt_ReturnValue = (bool)CallFunc_GreaterEqual_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (FString)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelperHud_C::SequenceEvent__ENTRYPOINTUI_BP_ComboHelperHud_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.SequenceEvent__ENTRYPOINTUI_BP_ComboHelperHud_1"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_ComboHelperHud_1 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_ComboHelperHud_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelperHud_C::ResetSpells_to_Standard_Position(UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_4, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_5, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_6, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_7, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_8, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_9, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_10) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.ResetSpells to Standard Position"));
    struct Params_ResetSpells_to_Standard_Position {
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue; // 0x0
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1; // 0x8
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2; // 0x10
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3; // 0x18
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_4; // 0x20
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_5; // 0x28
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_6; // 0x30
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_7; // 0x38
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_8; // 0x40
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_9; // 0x48
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_10; // 0x50
    }; // Size: 0x58
    Params_ResetSpells_to_Standard_Position params{};
    params.CallFunc_SlotAsCanvasSlot_ReturnValue = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_1;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_2 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_2;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_3 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_3;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_4 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_4;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_5 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_5;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_6 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_6;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_7 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_7;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_8 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_8;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_9 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_9;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_10 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_10;
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelperHud_C::SequenceEvent__ENTRYPOINTUI_BP_ComboHelperHud_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.SequenceEvent__ENTRYPOINTUI_BP_ComboHelperHud_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_ComboHelperHud_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_ComboHelperHud_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelperHud_C::RewindSpellCombo(float CallFunc_Conv_IntToFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.RewindSpellCombo"));
    struct Params_RewindSpellCombo {
        float CallFunc_Conv_IntToFloat_ReturnValue; // 0x0
        char pad_4[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_RewindSpellCombo params{};
    params.CallFunc_Conv_IntToFloat_ReturnValue = (float)CallFunc_Conv_IntToFloat_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelperHud_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelperHud_C::ScrollAnimationComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.ScrollAnimationComplete"));
    struct Params_ScrollAnimationComplete {
    }; // Size: 0x0
    Params_ScrollAnimationComplete params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelperHud_C::UpdateSpellSuccess(bool CallFunc_Less_IntInt_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.UpdateSpellSuccess"));
    struct Params_UpdateSpellSuccess {
        bool CallFunc_Less_IntInt_ReturnValue; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_UpdateSpellSuccess params{};
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelperHud_C::OnRequiredSpellsChanged0(TArray<FString>& SpellNames, int32_t NumSpells) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.OnRequiredSpellsChanged"));
    struct Params_OnRequiredSpellsChanged {
        TArray<FString> SpellNames; // 0x0
        int32_t NumSpells; // 0x10
    }; // Size: 0x14
    Params_OnRequiredSpellsChanged params{};
    params.SpellNames = (TArray<FString>)SpellNames;
    params.NumSpells = (int32_t)NumSpells;
    ProcessEvent(func, &params);
    SpellNames = params.SpellNames;
}
void UUI_BP_ComboHelperHud_C::UpdateSpellCarousel(int32_t CurrentIndex, int32_t TempStartIndex, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t Temp_int_Variable_2, int32_t Temp_int_Variable_3, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue_2, int32_t CallFunc_Subtract_IntInt_ReturnValue_3, int32_t CallFunc_Subtract_IntInt_ReturnValue_4, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Variable_4, int32_t Temp_int_Variable_5, int32_t Temp_int_Variable_6, int32_t Temp_int_Variable_7, int32_t Temp_int_Variable_8, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Variable_9, int32_t CallFunc_Add_IntInt_ReturnValue_4) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.UpdateSpellCarousel"));
    struct Params_UpdateSpellCarousel {
        int32_t CurrentIndex; // 0x0
        int32_t TempStartIndex; // 0x4
        int32_t Temp_int_Variable; // 0x8
        int32_t Temp_int_Variable_1; // 0xc
        int32_t Temp_int_Variable_2; // 0x10
        int32_t Temp_int_Variable_3; // 0x14
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x18
        int32_t CallFunc_Subtract_IntInt_ReturnValue_1; // 0x1c
        int32_t CallFunc_Subtract_IntInt_ReturnValue_2; // 0x20
        int32_t CallFunc_Subtract_IntInt_ReturnValue_3; // 0x24
        int32_t CallFunc_Subtract_IntInt_ReturnValue_4; // 0x28
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x2c
        int32_t Temp_int_Variable_4; // 0x30
        int32_t Temp_int_Variable_5; // 0x34
        int32_t Temp_int_Variable_6; // 0x38
        int32_t Temp_int_Variable_7; // 0x3c
        int32_t Temp_int_Variable_8; // 0x40
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x44
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x48
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0x4c
        int32_t Temp_int_Variable_9; // 0x50
        int32_t CallFunc_Add_IntInt_ReturnValue_4; // 0x54
    }; // Size: 0x58
    Params_UpdateSpellCarousel params{};
    params.CurrentIndex = (int32_t)CurrentIndex;
    params.TempStartIndex = (int32_t)TempStartIndex;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.Temp_int_Variable_2 = (int32_t)Temp_int_Variable_2;
    params.Temp_int_Variable_3 = (int32_t)Temp_int_Variable_3;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue_1 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_1;
    params.CallFunc_Subtract_IntInt_ReturnValue_2 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_2;
    params.CallFunc_Subtract_IntInt_ReturnValue_3 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_3;
    params.CallFunc_Subtract_IntInt_ReturnValue_4 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_4;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Variable_4 = (int32_t)Temp_int_Variable_4;
    params.Temp_int_Variable_5 = (int32_t)Temp_int_Variable_5;
    params.Temp_int_Variable_6 = (int32_t)Temp_int_Variable_6;
    params.Temp_int_Variable_7 = (int32_t)Temp_int_Variable_7;
    params.Temp_int_Variable_8 = (int32_t)Temp_int_Variable_8;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.Temp_int_Variable_9 = (int32_t)Temp_int_Variable_9;
    params.CallFunc_Add_IntInt_ReturnValue_4 = (int32_t)CallFunc_Add_IntInt_ReturnValue_4;
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelperHud_C::PreviousScrollAnimationComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.PreviousScrollAnimationComplete"));
    struct Params_PreviousScrollAnimationComplete {
    }; // Size: 0x0
    Params_PreviousScrollAnimationComplete params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelperHud_C::ExecuteUbergraph_UI_BP_ComboHelperHud(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_bShow, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, TArray<FString>& K2Node_Event_SpellNames, int32_t K2Node_Event_NumSpells, int32_t K2Node_Event_NumSucceeded_1, int32_t K2Node_Event_NumSucceeded, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32_t Temp_int_Variable, UPopupScreen* K2Node_CustomEvent_PopupScreen, int32_t K2Node_CustomEvent_CompletionActionIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, int32_t CallFunc_PostEventAtLocation_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.ExecuteUbergraph_UI_BP_ComboHelperHud"));
    struct Params_ExecuteUbergraph_UI_BP_ComboHelperHud {
        int32_t EntryPoint; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x10
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x14
        char pad_15[0x3];
        FGeometry K2Node_Event_MyGeometry; // 0x18
        float K2Node_Event_InDeltaTime; // 0x50
        bool K2Node_Event_bShow; // 0x54
        char pad_55[0x3];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x58
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x60
        TArray<FString> K2Node_Event_SpellNames; // 0x68
        int32_t K2Node_Event_NumSpells; // 0x78
        int32_t K2Node_Event_NumSucceeded_1; // 0x7c
        int32_t K2Node_Event_NumSucceeded; // 0x80
        char pad_84[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1; // 0x88
        int32_t Temp_int_Variable; // 0x90
        char pad_94[0x4];
        UPopupScreen* K2Node_CustomEvent_PopupScreen; // 0x98
        int32_t K2Node_CustomEvent_CompletionActionIndex; // 0xa0
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0xa4
        char pad_a5[0x3];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2; // 0xa8
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0xb0
        int32_t CallFunc_PostEventAtLocation_ReturnValue_2; // 0xb4
        int32_t CallFunc_PostEventAtLocation_ReturnValue_3; // 0xb8
    }; // Size: 0xbc
    Params_ExecuteUbergraph_UI_BP_ComboHelperHud params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.K2Node_Event_MyGeometry = (FGeometry)K2Node_Event_MyGeometry;
    params.K2Node_Event_InDeltaTime = (float)K2Node_Event_InDeltaTime;
    params.K2Node_Event_bShow = (bool)K2Node_Event_bShow;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.K2Node_Event_SpellNames = (TArray<FString>)K2Node_Event_SpellNames;
    params.K2Node_Event_NumSpells = (int32_t)K2Node_Event_NumSpells;
    params.K2Node_Event_NumSucceeded_1 = (int32_t)K2Node_Event_NumSucceeded_1;
    params.K2Node_Event_NumSucceeded = (int32_t)K2Node_Event_NumSucceeded;
    params.CallFunc_PlayAnimation_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_1;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.K2Node_CustomEvent_PopupScreen = (UPopupScreen*)K2Node_CustomEvent_PopupScreen;
    params.K2Node_CustomEvent_CompletionActionIndex = (int32_t)K2Node_CustomEvent_CompletionActionIndex;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue_2 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_2;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue_2 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_2;
    params.CallFunc_PostEventAtLocation_ReturnValue_3 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_3;
    ProcessEvent(func, &params);
    K2Node_Event_SpellNames = params.K2Node_Event_SpellNames;
}
void UUI_BP_ComboHelperHud_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelperHud_C::OnShowComboHelperChanged0(bool bShow) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.OnShowComboHelperChanged"));
    struct Params_OnShowComboHelperChanged {
        bool bShow; // 0x0
    }; // Size: 0x1
    Params_OnShowComboHelperChanged params{};
    params.bShow = (bool)bShow;
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelperHud_C::OnSpellSucceeded0(int32_t NumSucceeded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.OnSpellSucceeded"));
    struct Params_OnSpellSucceeded {
        int32_t NumSucceeded; // 0x0
    }; // Size: 0x4
    Params_OnSpellSucceeded params{};
    params.NumSucceeded = (int32_t)NumSucceeded;
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelperHud_C::OnSpellFailed0(int32_t NumSucceeded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.OnSpellFailed"));
    struct Params_OnSpellFailed {
        int32_t NumSucceeded; // 0x0
    }; // Size: 0x4
    Params_OnSpellFailed params{};
    params.NumSucceeded = (int32_t)NumSucceeded;
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelperHud_C::BndEvt__UI_BP_ComboHelperHud_activeSpell_K2Node_ComponentBoundEvent_0_OnSuccessAnimationComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.BndEvt__UI_BP_ComboHelperHud_activeSpell_K2Node_ComponentBoundEvent_0_OnSuccessAnimationComplete__DelegateSignature"));
    struct Params_BndEvt__UI_BP_ComboHelperHud_activeSpell_K2Node_ComponentBoundEvent_0_OnSuccessAnimationComplete__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_ComboHelperHud_activeSpell_K2Node_ComponentBoundEvent_0_OnSuccessAnimationComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelperHud_C::OnComboCompleted0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.OnComboCompleted"));
    struct Params_OnComboCompleted {
    }; // Size: 0x0
    Params_OnComboCompleted params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelperHud_C::BndEvt__UI_BP_ComboHelperHud_activeSpell_K2Node_ComponentBoundEvent_2_OnFailureAnimationComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.BndEvt__UI_BP_ComboHelperHud_activeSpell_K2Node_ComponentBoundEvent_2_OnFailureAnimationComplete__DelegateSignature"));
    struct Params_BndEvt__UI_BP_ComboHelperHud_activeSpell_K2Node_ComponentBoundEvent_2_OnFailureAnimationComplete__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_ComboHelperHud_activeSpell_K2Node_ComponentBoundEvent_2_OnFailureAnimationComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelperHud_C::OnComboReset0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.OnComboReset"));
    struct Params_OnComboReset {
    }; // Size: 0x0
    Params_OnComboReset params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelperHud_C::OnAutoWinRequested(UPopupScreen* PopupScreen, int32_t CompletionActionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelperHud.UI_BP_ComboHelperHud_C.OnAutoWinRequested"));
    struct Params_OnAutoWinRequested {
        UPopupScreen* PopupScreen; // 0x0
        int32_t CompletionActionIndex; // 0x8
    }; // Size: 0xc
    Params_OnAutoWinRequested params{};
    params.PopupScreen = (UPopupScreen*)PopupScreen;
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    ProcessEvent(func, &params);
}
