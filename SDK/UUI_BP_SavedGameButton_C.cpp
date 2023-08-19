#include "FPointerToUberGraphFrame.hpp"
#include "FSaveGameInfo.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "USavedGameButton.hpp"
#include "UUI_BP_SavedGameButton_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_SavedGameButton_C* UUI_BP_SavedGameButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_SavedGameButton.UI_BP_SavedGameButton_C");
    return (UUI_BP_SavedGameButton_C*)res;
}
void UUI_BP_SavedGameButton_C::IsIntroSave(bool& bIsIntroSave, FString CallFunc_ToLower_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.IsIntroSave"));
    struct Params_IsIntroSave {
        bool bIsIntroSave; // 0x0
        char pad_1[0x7];
        FString CallFunc_ToLower_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_IsIntroSave params{};
    params.bIsIntroSave = (bool)bIsIntroSave;
    params.CallFunc_ToLower_ReturnValue = (FString)CallFunc_ToLower_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    ProcessEvent(func, &params);
    bIsIntroSave = params.bIsIntroSave;
}
void UUI_BP_SavedGameButton_C::BndEvt__theButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.BndEvt__theButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__theButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__theButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SavedGameButton_C::SelectTitleText(FString MissionName, FString LocationName, FString& TitleText, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.SelectTitleText"));
    struct Params_SelectTitleText {
        FString MissionName; // 0x0
        FString LocationName; // 0x10
        FString TitleText; // 0x20
        bool CallFunc_IsEmpty_ReturnValue; // 0x30
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x31
        bool CallFunc_BooleanOR_ReturnValue; // 0x32
        bool CallFunc_IsEmpty_ReturnValue_1; // 0x33
        bool CallFunc_Not_PreBool_ReturnValue; // 0x34
        bool CallFunc_EqualEqual_StrStr_ReturnValue_1; // 0x35
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x36
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0x37
    }; // Size: 0x38
    Params_SelectTitleText params{};
    params.MissionName = (FString)MissionName;
    params.LocationName = (FString)LocationName;
    params.TitleText = (FString)TitleText;
    params.CallFunc_IsEmpty_ReturnValue = (bool)CallFunc_IsEmpty_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_IsEmpty_ReturnValue_1 = (bool)CallFunc_IsEmpty_ReturnValue_1;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_1 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    ProcessEvent(func, &params);
    TitleText = params.TitleText;
}
TArray<FString> UUI_BP_SavedGameButton_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_SavedGameButton_C::GetFileName(FString& Filename) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.GetFileName"));
    struct Params_GetFileName {
        FString Filename; // 0x0
    }; // Size: 0x10
    Params_GetFileName params{};
    params.Filename = (FString)Filename;
    ProcessEvent(func, &params);
    Filename = params.Filename;
}
void UUI_BP_SavedGameButton_C::OnSavedButtonReleased__DelegateSignature(UUI_BP_SavedGameButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.OnSavedButtonReleased__DelegateSignature"));
    struct Params_OnSavedButtonReleased__DelegateSignature {
        UUI_BP_SavedGameButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_OnSavedButtonReleased__DelegateSignature params{};
    params.Button = (UUI_BP_SavedGameButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_SavedGameButton_C::setButtonData(FSaveGameInfo SaveGameInfo, bool CallFunc_EqualEqual_StriStri_ReturnValue) {}
void UUI_BP_SavedGameButton_C::BndEvt__theButton_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.BndEvt__theButton_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__theButton_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__theButton_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SavedGameButton_C::BndEvt__theButton_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.BndEvt__theButton_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__theButton_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__theButton_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SavedGameButton_C::BndEvt__UI_BP_SavedGameButton_theButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.BndEvt__UI_BP_SavedGameButton_theButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_SavedGameButton_theButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_SavedGameButton_theButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SavedGameButton_C::BndEvt__UI_BP_SavedGameButton_theButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.BndEvt__UI_BP_SavedGameButton_theButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_SavedGameButton_theButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_SavedGameButton_theButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SavedGameButton_C::ExecuteUbergraph_UI_BP_SavedGameButton(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.ExecuteUbergraph_UI_BP_SavedGameButton"));
    struct Params_ExecuteUbergraph_UI_BP_SavedGameButton {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_ExecuteUbergraph_UI_BP_SavedGameButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_SavedGameButton_C::OnSavedButtonPressed__DelegateSignature(UUI_BP_SavedGameButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.OnSavedButtonPressed__DelegateSignature"));
    struct Params_OnSavedButtonPressed__DelegateSignature {
        UUI_BP_SavedGameButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_OnSavedButtonPressed__DelegateSignature params{};
    params.Button = (UUI_BP_SavedGameButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_SavedGameButton_C::OnSavedButtonUnhover__DelegateSignature(UUI_BP_SavedGameButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.OnSavedButtonUnhover__DelegateSignature"));
    struct Params_OnSavedButtonUnhover__DelegateSignature {
        UUI_BP_SavedGameButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_OnSavedButtonUnhover__DelegateSignature params{};
    params.Button = (UUI_BP_SavedGameButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_SavedGameButton_C::OnSavedButtonHover__DelegateSignature(UUI_BP_SavedGameButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.OnSavedButtonHover__DelegateSignature"));
    struct Params_OnSavedButtonHover__DelegateSignature {
        UUI_BP_SavedGameButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_OnSavedButtonHover__DelegateSignature params{};
    params.Button = (UUI_BP_SavedGameButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_SavedGameButton_C::OnSavedButtonClicked__DelegateSignature(UUI_BP_SavedGameButton_C* SelectedButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_SavedGameButton.UI_BP_SavedGameButton_C.OnSavedButtonClicked__DelegateSignature"));
    struct Params_OnSavedButtonClicked__DelegateSignature {
        UUI_BP_SavedGameButton_C* SelectedButton; // 0x0
    }; // Size: 0x8
    Params_OnSavedButtonClicked__DelegateSignature params{};
    params.SelectedButton = (UUI_BP_SavedGameButton_C*)SelectedButton;
    ProcessEvent(func, &params);
}
