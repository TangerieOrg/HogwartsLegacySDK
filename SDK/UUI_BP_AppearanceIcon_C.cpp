#include "EGearSlotIDEnum.hpp"
#include "EIconButtonState.hpp"
#include "ESlateVisibility.hpp"
#include "FGearItemID.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UIconButtonWidget.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObject.hpp"
#include "UOverlay.hpp"
#include "UPhoenixImage.hpp"
#include "USizeBox.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_AppearanceIcon_C.hpp"
#include "UUI_BP_NewIndicator_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_AppearanceIcon_C* UUI_BP_AppearanceIcon_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C");
    return (UUI_BP_AppearanceIcon_C*)res;
}
void UUI_BP_AppearanceIcon_C::I_GetIconName(FString& IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.I_GetIconName"));
    struct Params_I_GetIconName {
        FString IconName; // 0x0
    }; // Size: 0x10
    Params_I_GetIconName params{};
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
    IconName = params.IconName;
}
void UUI_BP_AppearanceIcon_C::SetIsNewItem(bool IsNew) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetIsNewItem"));
    struct Params_SetIsNewItem {
        bool IsNew; // 0x0
    }; // Size: 0x1
    Params_SetIsNewItem params{};
    params.IsNew = (bool)IsNew;
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::I_SetIconName(FString IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.I_SetIconName"));
    struct Params_I_SetIconName {
        FString IconName; // 0x0
    }; // Size: 0x10
    Params_I_SetIconName params{};
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::SetAppearanceIcon(FString AppearanceID) {}
bool UUI_BP_AppearanceIcon_C::HandleMissing0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.HandleMissing"));
    struct Params_HandleMissing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleMissing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_AppearanceIcon_C::HighlightButton0(bool isHighlighted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.HighlightButton"));
    struct Params_HighlightButton {
        bool isHighlighted; // 0x0
    }; // Size: 0x1
    Params_HighlightButton params{};
    params.isHighlighted = (bool)isHighlighted;
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::SetInitSelected(bool IsSelected) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetInitSelected"));
    struct Params_SetInitSelected {
        bool IsSelected; // 0x0
    }; // Size: 0x1
    Params_SetInitSelected params{};
    params.IsSelected = (bool)IsSelected;
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::InitAppearanceItem(FGearItemID AppearanceID, bool isCostume, ESlateVisibility Temp_byte_Variable, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_SetInventoryIconOverride_OutDisplayName, FString CallFunc_SetInventoryIconOverride_OutIconName, bool CallFunc_SetInventoryIconOverride_OutIsNameTranslatable, bool CallFunc_SetInventoryIconOverride_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.InitAppearanceItem"));
    struct Params_InitAppearanceItem {
        FGearItemID AppearanceID; // 0x0
        bool isCostume; // 0x14
        ESlateVisibility Temp_byte_Variable; // 0x15
        char pad_16[0x2];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x18
        FString CallFunc_SetInventoryIconOverride_OutDisplayName; // 0x28
        FString CallFunc_SetInventoryIconOverride_OutIconName; // 0x38
        bool CallFunc_SetInventoryIconOverride_OutIsNameTranslatable; // 0x48
        bool CallFunc_SetInventoryIconOverride_ReturnValue; // 0x49
        ESlateVisibility Temp_byte_Variable_1; // 0x4a
        bool Temp_bool_Variable; // 0x4b
        ESlateVisibility Temp_byte_Variable_2; // 0x4c
        ESlateVisibility Temp_byte_Variable_3; // 0x4d
        bool Temp_bool_Variable_1; // 0x4e
        ESlateVisibility K2Node_Select_Default; // 0x4f
        ESlateVisibility K2Node_Select_Default_1; // 0x50
    }; // Size: 0x51
    Params_InitAppearanceItem params{};
    params.AppearanceID = (FGearItemID)AppearanceID;
    params.isCostume = (bool)isCostume;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_SetInventoryIconOverride_OutDisplayName = (FString)CallFunc_SetInventoryIconOverride_OutDisplayName;
    params.CallFunc_SetInventoryIconOverride_OutIconName = (FString)CallFunc_SetInventoryIconOverride_OutIconName;
    params.CallFunc_SetInventoryIconOverride_OutIsNameTranslatable = (bool)CallFunc_SetInventoryIconOverride_OutIsNameTranslatable;
    params.CallFunc_SetInventoryIconOverride_ReturnValue = (bool)CallFunc_SetInventoryIconOverride_ReturnValue;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::SetButtonSize0(FVector2D NewSize, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetButtonSize"));
    struct Params_SetButtonSize {
        FVector2D NewSize; // 0x0
        float CallFunc_BreakVector2D_X; // 0x8
        float CallFunc_BreakVector2D_Y; // 0xc
    }; // Size: 0x10
    Params_SetButtonSize params{};
    params.NewSize = (FVector2D)NewSize;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::SetIsLocked(bool IsLocked, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetIsLocked"));
    struct Params_SetIsLocked {
        bool IsLocked; // 0x0
        bool Temp_bool_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable; // 0x2
        ESlateVisibility Temp_byte_Variable_1; // 0x3
        ESlateVisibility K2Node_Select_Default; // 0x4
    }; // Size: 0x5
    Params_SetIsLocked params{};
    params.IsLocked = (bool)IsLocked;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::SetIsCurrentSelection(bool IsCurrent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetIsCurrentSelection"));
    struct Params_SetIsCurrentSelection {
        bool IsCurrent; // 0x0
    }; // Size: 0x1
    Params_SetIsCurrentSelection params{};
    params.IsCurrent = (bool)IsCurrent;
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::SetIsSelected(bool buttonSelected) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetIsSelected"));
    struct Params_SetIsSelected {
        bool buttonSelected; // 0x0
    }; // Size: 0x1
    Params_SetIsSelected params{};
    params.buttonSelected = (bool)buttonSelected;
    ProcessEvent(func, &params);
}
bool UUI_BP_AppearanceIcon_C::IsInteractable() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.IsInteractable"));
    struct Params_IsInteractable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInteractable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_AppearanceIcon_C::SetButtonState0(EIconButtonState NewState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetButtonState"));
    struct Params_SetButtonState {
        EIconButtonState NewState; // 0x0
    }; // Size: 0x1
    Params_SetButtonState params{};
    params.NewState = (EIconButtonState)NewState;
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::I_SetImage(FString ImageName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.I_SetImage"));
    struct Params_I_SetImage {
        FString ImageName; // 0x0
    }; // Size: 0x10
    Params_I_SetImage params{};
    params.ImageName = (FString)ImageName;
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::I_AddExtraContent(UWidget* NewContent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.I_AddExtraContent"));
    struct Params_I_AddExtraContent {
        UWidget* NewContent; // 0x0
    }; // Size: 0x8
    Params_I_AddExtraContent params{};
    params.NewContent = (UWidget*)NewContent;
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::I_SetIconSize(FVector2D Size) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.I_SetIconSize"));
    struct Params_I_SetIconSize {
        FVector2D Size; // 0x0
    }; // Size: 0x8
    Params_I_SetIconSize params{};
    params.Size = (FVector2D)Size;
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::OnClickedAppearance__DelegateSignature(UUI_BP_AppearanceIcon_C* AppearanceButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.OnClickedAppearance__DelegateSignature"));
    struct Params_OnClickedAppearance__DelegateSignature {
        UUI_BP_AppearanceIcon_C* AppearanceButton; // 0x0
    }; // Size: 0x8
    Params_OnClickedAppearance__DelegateSignature params{};
    params.AppearanceButton = (UUI_BP_AppearanceIcon_C*)AppearanceButton;
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::SetIsNew0(bool bIsNew) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetIsNew"));
    struct Params_SetIsNew {
        bool bIsNew; // 0x0
    }; // Size: 0x1
    Params_SetIsNew params{};
    params.bIsNew = (bool)bIsNew;
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::SetIsTutorialHighlighted0(bool bIsTutorialHighlighted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.SetIsTutorialHighlighted"));
    struct Params_SetIsTutorialHighlighted {
        bool bIsTutorialHighlighted; // 0x0
    }; // Size: 0x1
    Params_SetIsTutorialHighlighted params{};
    params.bIsTutorialHighlighted = (bool)bIsTutorialHighlighted;
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::OnAppearanceIconLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.OnAppearanceIconLoaded"));
    struct Params_OnAppearanceIconLoaded {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
    }; // Size: 0x10
    Params_OnAppearanceIconLoaded params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::ExecuteUbergraph_UI_BP_AppearanceIcon(int32_t EntryPoint, UWidget* K2Node_Event_NewContent, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_AddExtraContent_ReturnValue, FVector2D K2Node_Event_Size, bool K2Node_Event_isHighlighted, EIconButtonState K2Node_Event_NewState, bool CallFunc_HandleEnabled_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HandleDisabled_ReturnValue, bool CallFunc_HandleMissing_ReturnValue, bool CallFunc_HandleNonExistent_ReturnValue, FString K2Node_Event_ImageName, bool CallFunc_NotEqual_StrStr_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool K2Node_Event_bIsNew, UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool K2Node_Event_bIsTutorialHighlighted, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, FString K2Node_Event_IconName, UTexture2D* K2Node_CustomEvent_LoadedTexture, UObject* K2Node_CustomEvent_CallbackParam, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.ExecuteUbergraph_UI_BP_AppearanceIcon"));
    struct Params_ExecuteUbergraph_UI_BP_AppearanceIcon {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UWidget* K2Node_Event_NewContent; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
        bool CallFunc_AddExtraContent_ReturnValue; // 0x18
        char pad_19[0x3];
        FVector2D K2Node_Event_Size; // 0x1c
        bool K2Node_Event_isHighlighted; // 0x24
        EIconButtonState K2Node_Event_NewState; // 0x25
        bool CallFunc_HandleEnabled_ReturnValue; // 0x26
        bool K2Node_SwitchEnum_CmpSuccess; // 0x27
        bool CallFunc_HandleDisabled_ReturnValue; // 0x28
        bool CallFunc_HandleMissing_ReturnValue; // 0x29
        bool CallFunc_HandleNonExistent_ReturnValue; // 0x2a
        char pad_2b[0x5];
        FString K2Node_Event_ImageName; // 0x30
        bool CallFunc_NotEqual_StrStr_ReturnValue; // 0x40
        char pad_41[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x44
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x48
        bool K2Node_Event_bIsNew; // 0x4c
        char pad_4d[0x3];
        UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot; // 0x50
        bool K2Node_DynamicCast_bSuccess; // 0x58
        char pad_59[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0x60
        bool K2Node_Event_bIsTutorialHighlighted; // 0x68
        char pad_69[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x70
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x78
        FString K2Node_Event_IconName; // 0x80
        UTexture2D* K2Node_CustomEvent_LoadedTexture; // 0x90
        UObject* K2Node_CustomEvent_CallbackParam; // 0x98
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0xa0
    }; // Size: 0xa8
    Params_ExecuteUbergraph_UI_BP_AppearanceIcon params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_NewContent = (UWidget*)K2Node_Event_NewContent;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_AddExtraContent_ReturnValue = (bool)CallFunc_AddExtraContent_ReturnValue;
    params.K2Node_Event_Size = (FVector2D)K2Node_Event_Size;
    params.K2Node_Event_isHighlighted = (bool)K2Node_Event_isHighlighted;
    params.K2Node_Event_NewState = (EIconButtonState)K2Node_Event_NewState;
    params.CallFunc_HandleEnabled_ReturnValue = (bool)CallFunc_HandleEnabled_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_HandleDisabled_ReturnValue = (bool)CallFunc_HandleDisabled_ReturnValue;
    params.CallFunc_HandleMissing_ReturnValue = (bool)CallFunc_HandleMissing_ReturnValue;
    params.CallFunc_HandleNonExistent_ReturnValue = (bool)CallFunc_HandleNonExistent_ReturnValue;
    params.K2Node_Event_ImageName = (FString)K2Node_Event_ImageName;
    params.CallFunc_NotEqual_StrStr_ReturnValue = (bool)CallFunc_NotEqual_StrStr_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.K2Node_Event_bIsNew = (bool)K2Node_Event_bIsNew;
    params.K2Node_DynamicCast_AsCanvas_Panel_Slot = (UCanvasPanelSlot*)K2Node_DynamicCast_AsCanvas_Panel_Slot;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    params.K2Node_Event_bIsTutorialHighlighted = (bool)K2Node_Event_bIsTutorialHighlighted;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.K2Node_Event_IconName = (FString)K2Node_Event_IconName;
    params.K2Node_CustomEvent_LoadedTexture = (UTexture2D*)K2Node_CustomEvent_LoadedTexture;
    params.K2Node_CustomEvent_CallbackParam = (UObject*)K2Node_CustomEvent_CallbackParam;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::OnUnhoveredAppearance__DelegateSignature(UUI_BP_AppearanceIcon_C* AppearanceButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.OnUnhoveredAppearance__DelegateSignature"));
    struct Params_OnUnhoveredAppearance__DelegateSignature {
        UUI_BP_AppearanceIcon_C* AppearanceButton; // 0x0
    }; // Size: 0x8
    Params_OnUnhoveredAppearance__DelegateSignature params{};
    params.AppearanceButton = (UUI_BP_AppearanceIcon_C*)AppearanceButton;
    ProcessEvent(func, &params);
}
void UUI_BP_AppearanceIcon_C::OnHoveredAppearnace__DelegateSignature(UUI_BP_AppearanceIcon_C* AppearanceButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/Buttons/UI_BP_AppearanceIcon.UI_BP_AppearanceIcon_C.OnHoveredAppearnace__DelegateSignature"));
    struct Params_OnHoveredAppearnace__DelegateSignature {
        UUI_BP_AppearanceIcon_C* AppearanceButton; // 0x0
    }; // Size: 0x8
    Params_OnHoveredAppearnace__DelegateSignature params{};
    params.AppearanceButton = (UUI_BP_AppearanceIcon_C*)AppearanceButton;
    ProcessEvent(func, &params);
}
