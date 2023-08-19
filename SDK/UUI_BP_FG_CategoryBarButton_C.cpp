#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UTabIconButtonWidget.hpp"
#include "UUI_BP_FG_CategoryBarButton_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_FG_CategoryBarButton_C::ToggleNewIndicator(bool Show, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.ToggleNewIndicator"));
    struct Params_ToggleNewIndicator {
        bool Show; // 0x0
        bool Temp_bool_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable; // 0x2
        ESlateVisibility Temp_byte_Variable_1; // 0x3
        ESlateVisibility K2Node_Select_Default; // 0x4
    }; // Size: 0x5
    Params_ToggleNewIndicator params{};
    params.Show = (bool)Show;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
UUI_BP_FG_CategoryBarButton_C* UUI_BP_FG_CategoryBarButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C");
    return (UUI_BP_FG_CategoryBarButton_C*)res;
}
void UUI_BP_FG_CategoryBarButton_C::SetButtonColor(FLinearColor NewColor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.SetButtonColor"));
    struct Params_SetButtonColor {
        FLinearColor NewColor; // 0x0
    }; // Size: 0x10
    Params_SetButtonColor params{};
    params.NewColor = (FLinearColor)NewColor;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryBarButton_C::I_GetIconName(FString& IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.I_GetIconName"));
    struct Params_I_GetIconName {
        FString IconName; // 0x0
    }; // Size: 0x10
    Params_I_GetIconName params{};
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
    IconName = params.IconName;
}
void UUI_BP_FG_CategoryBarButton_C::ToggleCategoryCount(bool ShowCategoryCount, int32_t NewCount, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FString CallFunc_Conv_IntToString_ReturnValue, ESlateVisibility K2Node_Select_Default, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1) {}
void UUI_BP_FG_CategoryBarButton_C::ToggleCategoryText(bool ShowCategoryTitle, FString NewTitle, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.ToggleCategoryText"));
    struct Params_ToggleCategoryText {
        bool ShowCategoryTitle; // 0x0
        char pad_1[0x7];
        FString NewTitle; // 0x8
        bool Temp_bool_Variable; // 0x18
        ESlateVisibility Temp_byte_Variable; // 0x19
        ESlateVisibility Temp_byte_Variable_1; // 0x1a
        ESlateVisibility K2Node_Select_Default; // 0x1b
    }; // Size: 0x1c
    Params_ToggleCategoryText params{};
    params.ShowCategoryTitle = (bool)ShowCategoryTitle;
    params.NewTitle = (FString)NewTitle;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryBarButton_C::SetButtonCount(int32_t NewCount, bool CallFunc_Greater_IntInt_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.SetButtonCount"));
    struct Params_SetButtonCount {
        int32_t NewCount; // 0x0
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x4
        char pad_5[0x3];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
        bool CallFunc_IsAnimationPlaying_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetButtonCount params{};
    params.NewCount = (int32_t)NewCount;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_IsAnimationPlaying_ReturnValue = (bool)CallFunc_IsAnimationPlaying_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryBarButton_C::SetButtonFontSize(int32_t NewFontSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.SetButtonFontSize"));
    struct Params_SetButtonFontSize {
        int32_t NewFontSize; // 0x0
    }; // Size: 0x4
    Params_SetButtonFontSize params{};
    params.NewFontSize = (int32_t)NewFontSize;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryBarButton_C::SetButtonText(FString NewString) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.SetButtonText"));
    struct Params_SetButtonText {
        FString NewString; // 0x0
    }; // Size: 0x10
    Params_SetButtonText params{};
    params.NewString = (FString)NewString;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryBarButton_C::I_SetIconSize(FVector2D Size) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.I_SetIconSize"));
    struct Params_I_SetIconSize {
        FVector2D Size; // 0x0
    }; // Size: 0x8
    Params_I_SetIconSize params{};
    params.Size = (FVector2D)Size;
    ProcessEvent(func, &params);
}
bool UUI_BP_FG_CategoryBarButton_C::SetState(bool IsActive, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_SetState_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.SetState"));
    struct Params_SetState {
        bool IsActive; // 0x0
        bool ReturnValue; // 0x1
        char pad_2[0x6];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1; // 0x10
        bool CallFunc_SetState_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_SetState params{};
    params.IsActive = (bool)IsActive;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_1;
    params.CallFunc_SetState_ReturnValue = (bool)CallFunc_SetState_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUI_BP_FG_CategoryBarButton_C::IsInteractable() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.IsInteractable"));
    struct Params_IsInteractable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInteractable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_FG_CategoryBarButton_C::I_SetImage(FString ImageName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.I_SetImage"));
    struct Params_I_SetImage {
        FString ImageName; // 0x0
    }; // Size: 0x10
    Params_I_SetImage params{};
    params.ImageName = (FString)ImageName;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryBarButton_C::I_AddExtraContent(UWidget* NewContent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.I_AddExtraContent"));
    struct Params_I_AddExtraContent {
        UWidget* NewContent; // 0x0
    }; // Size: 0x8
    Params_I_AddExtraContent params{};
    params.NewContent = (UWidget*)NewContent;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryBarButton_C::I_SetIconName(FString IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.I_SetIconName"));
    struct Params_I_SetIconName {
        FString IconName; // 0x0
    }; // Size: 0x10
    Params_I_SetIconName params{};
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryBarButton_C::OnSelectionChanged(bool selected) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.OnSelectionChanged"));
    struct Params_OnSelectionChanged {
        bool selected; // 0x0
    }; // Size: 0x1
    Params_OnSelectionChanged params{};
    params.selected = (bool)selected;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryBarButton_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryBarButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_80_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_80_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_80_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_80_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryBarButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_CategoryBarButton_C::ExecuteUbergraph_UI_BP_FG_CategoryBarButton(int32_t EntryPoint, FString K2Node_Event_ImageName, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UWidget* K2Node_Event_NewContent, FVector2D K2Node_Event_Size, FString K2Node_Event_IconName, bool K2Node_Event_selected, bool CallFunc_SetState_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_FG_CategoryBarButton.UI_BP_FG_CategoryBarButton_C.ExecuteUbergraph_UI_BP_FG_CategoryBarButton"));
    struct Params_ExecuteUbergraph_UI_BP_FG_CategoryBarButton {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        FString K2Node_Event_ImageName; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x18
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x20
        UWidget* K2Node_Event_NewContent; // 0x28
        FVector2D K2Node_Event_Size; // 0x30
        FString K2Node_Event_IconName; // 0x38
        bool K2Node_Event_selected; // 0x48
        bool CallFunc_SetState_ReturnValue; // 0x49
    }; // Size: 0x4a
    Params_ExecuteUbergraph_UI_BP_FG_CategoryBarButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_ImageName = (FString)K2Node_Event_ImageName;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.K2Node_Event_NewContent = (UWidget*)K2Node_Event_NewContent;
    params.K2Node_Event_Size = (FVector2D)K2Node_Event_Size;
    params.K2Node_Event_IconName = (FString)K2Node_Event_IconName;
    params.K2Node_Event_selected = (bool)K2Node_Event_selected;
    params.CallFunc_SetState_ReturnValue = (bool)CallFunc_SetState_ReturnValue;
    ProcessEvent(func, &params);
}
