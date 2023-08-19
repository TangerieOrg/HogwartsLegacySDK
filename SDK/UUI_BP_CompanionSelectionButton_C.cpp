#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAvaUserWidget.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_CompanionSelectionButton_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_CompanionSelectionButton_C* UUI_BP_CompanionSelectionButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/CompanionSelection/UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C");
    return (UUI_BP_CompanionSelectionButton_C*)res;
}
void UUI_BP_CompanionSelectionButton_C::SetIsSelected(bool IsSelected) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.SetIsSelected"));
    struct Params_SetIsSelected {
        bool IsSelected; // 0x0
    }; // Size: 0x1
    Params_SetIsSelected params{};
    params.IsSelected = (bool)IsSelected;
    ProcessEvent(func, &params);
}
void UUI_BP_CompanionSelectionButton_C::SetCompanionData(FName CompName, bool companionLocked, bool companionDisabled, FString compIconName, FString House, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default, FName CallFunc_GetHouseIDFromSubjectName_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.SetCompanionData"));
    struct Params_SetCompanionData {
        FName CompName; // 0x0
        bool companionLocked; // 0x8
        bool companionDisabled; // 0x9
        char pad_a[0x6];
        FString compIconName; // 0x10
        FString House; // 0x20
        bool Temp_bool_Variable; // 0x30
        ESlateVisibility Temp_byte_Variable; // 0x31
        ESlateVisibility Temp_byte_Variable_1; // 0x32
        ESlateVisibility K2Node_Select_Default; // 0x33
        FName CallFunc_GetHouseIDFromSubjectName_ReturnValue; // 0x34
        char pad_3c[0x4];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x40
        FString CallFunc_Conv_NameToString_ReturnValue_1; // 0x50
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x60
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1; // 0x61
    }; // Size: 0x62
    Params_SetCompanionData params{};
    params.CompName = (FName)CompName;
    params.companionLocked = (bool)companionLocked;
    params.companionDisabled = (bool)companionDisabled;
    params.compIconName = (FString)compIconName;
    params.House = (FString)House;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_GetHouseIDFromSubjectName_ReturnValue = (FName)CallFunc_GetHouseIDFromSubjectName_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue_1 = (FString)CallFunc_Conv_NameToString_ReturnValue_1;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue_1 = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_CompanionSelectionButton_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CompanionSelectionButton_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_CompanionSelectionButton_C::BndEvt__compButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.BndEvt__compButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__compButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__compButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CompanionSelectionButton_C::BndEvt__compButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.BndEvt__compButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__compButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__compButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CompanionSelectionButton_C::BndEvt__compButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.BndEvt__compButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature"));
    struct Params_BndEvt__compButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__compButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CompanionSelectionButton_C::ExecuteUbergraph_UI_BP_CompanionSelectionButton(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.ExecuteUbergraph_UI_BP_CompanionSelectionButton"));
    struct Params_ExecuteUbergraph_UI_BP_CompanionSelectionButton {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
        char pad_5[0x3];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x10
        bool CallFunc_Not_PreBool_ReturnValue; // 0x18
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0x19
    }; // Size: 0x1a
    Params_ExecuteUbergraph_UI_BP_CompanionSelectionButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_CompanionSelectionButton_C::OnCompanionSelected__DelegateSignature(UUI_BP_CompanionSelectionButton_C* Companion) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.OnCompanionSelected__DelegateSignature"));
    struct Params_OnCompanionSelected__DelegateSignature {
        UUI_BP_CompanionSelectionButton_C* Companion; // 0x0
    }; // Size: 0x8
    Params_OnCompanionSelected__DelegateSignature params{};
    params.Companion = (UUI_BP_CompanionSelectionButton_C*)Companion;
    ProcessEvent(func, &params);
}
void UUI_BP_CompanionSelectionButton_C::OnCompanionUnhovered__DelegateSignature(UUI_BP_CompanionSelectionButton_C* Companion) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.OnCompanionUnhovered__DelegateSignature"));
    struct Params_OnCompanionUnhovered__DelegateSignature {
        UUI_BP_CompanionSelectionButton_C* Companion; // 0x0
    }; // Size: 0x8
    Params_OnCompanionUnhovered__DelegateSignature params{};
    params.Companion = (UUI_BP_CompanionSelectionButton_C*)Companion;
    ProcessEvent(func, &params);
}
void UUI_BP_CompanionSelectionButton_C::OnCompanionHovered__DelegateSignature(UUI_BP_CompanionSelectionButton_C* Companion) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CompanionSelection/UI_BP_CompanionSelectionButton.UI_BP_CompanionSelectionButton_C.OnCompanionHovered__DelegateSignature"));
    struct Params_OnCompanionHovered__DelegateSignature {
        UUI_BP_CompanionSelectionButton_C* Companion; // 0x0
    }; // Size: 0x8
    Params_OnCompanionHovered__DelegateSignature params{};
    params.Companion = (UUI_BP_CompanionSelectionButton_C*)Companion;
    ProcessEvent(func, &params);
}
