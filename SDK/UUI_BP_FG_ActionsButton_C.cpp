#include "ERoundingMode.hpp"
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBorder.hpp"
#include "UFieldGuideButton_Actions.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UTexture2D.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_FG_ActionsButton_C.hpp"
#include "UUI_BP_NewIndicator_C.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_FG_ActionsButton_C* UUI_BP_FG_ActionsButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C");
    return (UUI_BP_FG_ActionsButton_C*)res;
}
void UUI_BP_FG_ActionsButton_C::BndEvt__iconButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.BndEvt__iconButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__iconButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__iconButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_FG_ActionsButton_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_FG_ActionsButton_C::SetHouseAssets(UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, bool K2Node_SwitchString_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.SetHouseAssets"));
    struct Params_SetHouseAssets {
        UUIManager* CallFunc_Get_ReturnValue; // 0x0
        FString CallFunc_GetPlayerHouse_ReturnValue; // 0x8
        bool K2Node_SwitchString_CmpSuccess; // 0x18
    }; // Size: 0x19
    Params_SetHouseAssets params{};
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetPlayerHouse_ReturnValue = (FString)CallFunc_GetPlayerHouse_ReturnValue;
    params.K2Node_SwitchString_CmpSuccess = (bool)K2Node_SwitchString_CmpSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_ActionsButton_C::SetMeterPercent(float Percentage, bool Temp_bool_Variable, bool CallFunc_InRange_FloatFloat_ReturnValue, ERoundingMode Temp_byte_Variable, ERoundingMode Temp_byte_Variable_1, float CallFunc_Divide_FloatFloat_ReturnValue, ERoundingMode K2Node_Select_Default) {}
void UUI_BP_FG_ActionsButton_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_ActionsButton_C::BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature"));
    struct Params_BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_ActionsButton_C::BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_ActionsButton_C::OnHouseMeterFillLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.OnHouseMeterFillLoaded"));
    struct Params_OnHouseMeterFillLoaded {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
    }; // Size: 0x10
    Params_OnHouseMeterFillLoaded params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_ActionsButton_C::ExecuteUbergraph_UI_BP_FG_ActionsButton(int32_t EntryPoint, bool K2Node_Event_bIsTutorialHighlighted) {}
void UUI_BP_FG_ActionsButton_C::OnSetItemIndicatorVisibility(ESlateVisibility InVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.OnSetItemIndicatorVisibility"));
    struct Params_OnSetItemIndicatorVisibility {
        ESlateVisibility InVisibility; // 0x0
    }; // Size: 0x1
    Params_OnSetItemIndicatorVisibility params{};
    params.InVisibility = (ESlateVisibility)InVisibility;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_ActionsButton_C::SetLockedState(bool IsLocked) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.SetLockedState"));
    struct Params_SetLockedState {
        bool IsLocked; // 0x0
    }; // Size: 0x1
    Params_SetLockedState params{};
    params.IsLocked = (bool)IsLocked;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_ActionsButton_C::SetIsTutorialHighlighted(bool bIsTutorialHighlighted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FG_ActionsButton.UI_BP_FG_ActionsButton_C.SetIsTutorialHighlighted"));
    struct Params_SetIsTutorialHighlighted {
        bool bIsTutorialHighlighted; // 0x0
    }; // Size: 0x1
    Params_SetIsTutorialHighlighted params{};
    params.bIsTutorialHighlighted = (bool)bIsTutorialHighlighted;
    ProcessEvent(func, &params);
}
