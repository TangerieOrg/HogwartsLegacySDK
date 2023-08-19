#include "ESpellCategory.hpp"
#include "FDataTableRowHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixImage.hpp"
#include "UScaleBox.hpp"
#include "UUI_BP_ComboHelper_SpellItem_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_ComboHelper_SpellItem_C* UUI_BP_ComboHelper_SpellItem_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C");
    return (UUI_BP_ComboHelper_SpellItem_C*)res;
}
void UUI_BP_ComboHelper_SpellItem_C::SequenceEvent__ENTRYPOINTUI_BP_ComboHelper_SpellItem_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.SequenceEvent__ENTRYPOINTUI_BP_ComboHelper_SpellItem_1"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_ComboHelper_SpellItem_1 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_ComboHelper_SpellItem_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelper_SpellItem_C::Set_Spell_Category_Color(ESpellCategory SpellCategory, FDataTableRowHandle TempColorTag, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, bool K2Node_SwitchEnum_CmpSuccess, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_2, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_3, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_4, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_5) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.Set Spell Category Color"));
    struct Params_Set_Spell_Category_Color {
        ESpellCategory SpellCategory; // 0x0
        char pad_1[0x7];
        FDataTableRowHandle TempColorTag; // 0x8
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle; // 0x18
        bool K2Node_SwitchEnum_CmpSuccess; // 0x28
        char pad_29[0x7];
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1; // 0x30
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_2; // 0x40
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_3; // 0x50
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_4; // 0x60
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_5; // 0x70
    }; // Size: 0x80
    Params_Set_Spell_Category_Color params{};
    params.SpellCategory = (ESpellCategory)SpellCategory;
    params.TempColorTag = (FDataTableRowHandle)TempColorTag;
    params.K2Node_MakeStruct_DataTableRowHandle = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.K2Node_MakeStruct_DataTableRowHandle_1 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_1;
    params.K2Node_MakeStruct_DataTableRowHandle_2 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_2;
    params.K2Node_MakeStruct_DataTableRowHandle_3 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_3;
    params.K2Node_MakeStruct_DataTableRowHandle_4 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_4;
    params.K2Node_MakeStruct_DataTableRowHandle_5 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_5;
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelper_SpellItem_C::OnSuccessAnimationComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.OnSuccessAnimationComplete__DelegateSignature"));
    struct Params_OnSuccessAnimationComplete__DelegateSignature {
    }; // Size: 0x0
    Params_OnSuccessAnimationComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelper_SpellItem_C::SequenceEvent__ENTRYPOINTUI_BP_ComboHelper_SpellItem_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.SequenceEvent__ENTRYPOINTUI_BP_ComboHelper_SpellItem_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_ComboHelper_SpellItem_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_ComboHelper_SpellItem_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelper_SpellItem_C::ShowStatusSuccess(bool ShowStatus) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.ShowStatusSuccess"));
    struct Params_ShowStatusSuccess {
        bool ShowStatus; // 0x0
    }; // Size: 0x1
    Params_ShowStatusSuccess params{};
    params.ShowStatus = (bool)ShowStatus;
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelper_SpellItem_C::FailureAnimationFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.FailureAnimationFinished"));
    struct Params_FailureAnimationFinished {
    }; // Size: 0x0
    Params_FailureAnimationFinished params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelper_SpellItem_C::SuccessAnimationFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.SuccessAnimationFinished"));
    struct Params_SuccessAnimationFinished {
    }; // Size: 0x0
    Params_SuccessAnimationFinished params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelper_SpellItem_C::SetSpellName(FString SpellName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.SetSpellName"));
    struct Params_SetSpellName {
        FString SpellName; // 0x0
    }; // Size: 0x10
    Params_SetSpellName params{};
    params.SpellName = (FString)SpellName;
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelper_SpellItem_C::PlaySuccess() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.PlaySuccess"));
    struct Params_PlaySuccess {
    }; // Size: 0x0
    Params_PlaySuccess params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelper_SpellItem_C::PlayFail() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.PlayFail"));
    struct Params_PlayFail {
    }; // Size: 0x0
    Params_PlayFail params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelper_SpellItem_C::ResetState() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.ResetState"));
    struct Params_ResetState {
    }; // Size: 0x0
    Params_ResetState params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelper_SpellItem_C::PlayReady() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.PlayReady"));
    struct Params_PlayReady {
    }; // Size: 0x0
    Params_PlayReady params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ComboHelper_SpellItem_C::ExecuteUbergraph_UI_BP_ComboHelper_SpellItem(int32_t EntryPoint, FString K2Node_CustomEvent_SpellName, bool CallFunc_StartsWith_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1) {}
void UUI_BP_ComboHelper_SpellItem_C::OnFailureAnimationComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ComboHelperHud/UI_BP_ComboHelper_SpellItem.UI_BP_ComboHelper_SpellItem_C.OnFailureAnimationComplete__DelegateSignature"));
    struct Params_OnFailureAnimationComplete__DelegateSignature {
    }; // Size: 0x0
    Params_OnFailureAnimationComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
