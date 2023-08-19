#include "EIconButtonState.hpp"
#include "FDateTime.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSaveGameInfo.hpp"
#include "FVector2D.hpp"
#include "HouseIds.hpp"
#include "UCanvasPanel.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UHorizontalBoxSlot.hpp"
#include "UIconButtonWidget.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UNamedSlot.hpp"
#include "UPanelSlot.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "USizeBox.hpp"
#include "UUI_BP_CharacterSelectButton_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
UWidget* UUI_BP_CharacterSelectButton_C::GetExtraContent0(UWidget* CallFunc_GetChildAt_ReturnValue, UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.GetExtraContent"));
    struct Params_GetExtraContent {
        UWidget* ReturnValue; // 0x0
        UWidget* CallFunc_GetChildAt_ReturnValue; // 0x8
        UUserWidget* K2Node_DynamicCast_AsUser_Widget; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
    }; // Size: 0x19
    Params_GetExtraContent params{};
    params.CallFunc_GetChildAt_ReturnValue = (UWidget*)CallFunc_GetChildAt_ReturnValue;
    params.K2Node_DynamicCast_AsUser_Widget = (UUserWidget*)K2Node_DynamicCast_AsUser_Widget;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
    return (UWidget*)params.ReturnValue;
}
UUI_BP_CharacterSelectButton_C* UUI_BP_CharacterSelectButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C");
    return (UUI_BP_CharacterSelectButton_C*)res;
}
void UUI_BP_CharacterSelectButton_C::SetIsCurrentSelection(bool IsCurrent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.SetIsCurrentSelection"));
    struct Params_SetIsCurrentSelection {
        bool IsCurrent; // 0x0
    }; // Size: 0x1
    Params_SetIsCurrentSelection params{};
    params.IsCurrent = (bool)IsCurrent;
    ProcessEvent(func, &params);
}
void UUI_BP_CharacterSelectButton_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CharacterSelectButton_C::I_GetIconName(FString& IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.I_GetIconName"));
    struct Params_I_GetIconName {
        FString IconName; // 0x0
    }; // Size: 0x10
    Params_I_GetIconName params{};
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
    IconName = params.IconName;
}
void UUI_BP_CharacterSelectButton_C::SetCharacterData(bool IsCharacter, FString CharacterName, HouseIds House, FString SaveText, int32_t CharacterID, int32_t CharacterLevel, FString SaveTimeOverride, FDateTime CallFunc_DateTimeFromString_Result, bool CallFunc_DateTimeFromString_ReturnValue, bool CallFunc_IsEmpty_ReturnValue) {}
TArray<FString> UUI_BP_CharacterSelectButton_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_CharacterSelectButton_C::GetIsIntroSave(bool& Result, FSaveGameInfo NewLocalVar_0, FString CallFunc_ToLower_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.GetIsIntroSave"));
    struct Params_GetIsIntroSave {
        bool Result; // 0x0
        char pad_1[0x7];
        FSaveGameInfo NewLocalVar_0; // 0x8
        FString CallFunc_ToLower_ReturnValue; // 0x80
        bool CallFunc_EqualEqual_StriStri_ReturnValue; // 0x90
    }; // Size: 0x91
    Params_GetIsIntroSave params{};
    params.Result = (bool)Result;
    params.NewLocalVar_0 = (FSaveGameInfo)NewLocalVar_0;
    params.CallFunc_ToLower_ReturnValue = (FString)CallFunc_ToLower_ReturnValue;
    params.CallFunc_EqualEqual_StriStri_ReturnValue = (bool)CallFunc_EqualEqual_StriStri_ReturnValue;
    ProcessEvent(func, &params);
    Result = params.Result;
}
void UUI_BP_CharacterSelectButton_C::SetHouse(bool IsEmpty, HouseIds PlayerHouse, FLinearColor tempLevelBack, FLinearColor tempTopColor, FLinearColor tempMiddleColor, FLinearColor tempBaseColor, FString tempHouseIcon, bool K2Node_SwitchEnum_CmpSuccess, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.SetHouse"));
    struct Params_SetHouse {
        bool IsEmpty; // 0x0
        HouseIds PlayerHouse; // 0x1
        char pad_2[0x2];
        FLinearColor tempLevelBack; // 0x4
        FLinearColor tempTopColor; // 0x14
        FLinearColor tempMiddleColor; // 0x24
        FLinearColor tempBaseColor; // 0x34
        char pad_44[0x4];
        FString tempHouseIcon; // 0x48
        bool K2Node_SwitchEnum_CmpSuccess; // 0x58
        char pad_59[0x7];
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x60
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x68
    }; // Size: 0x69
    Params_SetHouse params{};
    params.IsEmpty = (bool)IsEmpty;
    params.PlayerHouse = (HouseIds)PlayerHouse;
    params.tempLevelBack = (FLinearColor)tempLevelBack;
    params.tempTopColor = (FLinearColor)tempTopColor;
    params.tempMiddleColor = (FLinearColor)tempMiddleColor;
    params.tempBaseColor = (FLinearColor)tempBaseColor;
    params.tempHouseIcon = (FString)tempHouseIcon;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CharacterSelectButton_C::SetButtonState0(EIconButtonState NewState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.SetButtonState"));
    struct Params_SetButtonState {
        EIconButtonState NewState; // 0x0
    }; // Size: 0x1
    Params_SetButtonState params{};
    params.NewState = (EIconButtonState)NewState;
    ProcessEvent(func, &params);
}
void UUI_BP_CharacterSelectButton_C::I_SetIconName(FString IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.I_SetIconName"));
    struct Params_I_SetIconName {
        FString IconName; // 0x0
    }; // Size: 0x10
    Params_I_SetIconName params{};
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
}
void UUI_BP_CharacterSelectButton_C::SetIsSelected(bool buttonSelected) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.SetIsSelected"));
    struct Params_SetIsSelected {
        bool buttonSelected; // 0x0
    }; // Size: 0x1
    Params_SetIsSelected params{};
    params.buttonSelected = (bool)buttonSelected;
    ProcessEvent(func, &params);
}
bool UUI_BP_CharacterSelectButton_C::SetButtonIcons0(FString BackgroundImage) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.SetButtonIcons"));
    struct Params_SetButtonIcons {
        FString BackgroundImage; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetButtonIcons params{};
    params.BackgroundImage = (FString)BackgroundImage;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_CharacterSelectButton_C::OnCharacterHovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.OnCharacterHovered__DelegateSignature"));
    struct Params_OnCharacterHovered__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_OnCharacterHovered__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
bool UUI_BP_CharacterSelectButton_C::HandleNonExistent0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.HandleNonExistent"));
    struct Params_HandleNonExistent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleNonExistent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_CharacterSelectButton_C::I_AddExtraContent(UWidget* NewContent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.I_AddExtraContent"));
    struct Params_I_AddExtraContent {
        UWidget* NewContent; // 0x0
    }; // Size: 0x8
    Params_I_AddExtraContent params{};
    params.NewContent = (UWidget*)NewContent;
    ProcessEvent(func, &params);
}
bool UUI_BP_CharacterSelectButton_C::HandleMissing0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.HandleMissing"));
    struct Params_HandleMissing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleMissing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUI_BP_CharacterSelectButton_C::HandleDisabled0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.HandleDisabled"));
    struct Params_HandleDisabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleDisabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUI_BP_CharacterSelectButton_C::RemoveExtraContent0(bool CallFunc_RemoveChildAt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.RemoveExtraContent"));
    struct Params_RemoveExtraContent {
        bool ReturnValue; // 0x0
        bool CallFunc_RemoveChildAt_ReturnValue; // 0x1
    }; // Size: 0x2
    Params_RemoveExtraContent params{};
    params.CallFunc_RemoveChildAt_ReturnValue = (bool)CallFunc_RemoveChildAt_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUI_BP_CharacterSelectButton_C::HandleEnabled0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.HandleEnabled"));
    struct Params_HandleEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUI_BP_CharacterSelectButton_C::AddExtraContent0(UWidget* NewContent, UPanelSlot* CallFunc_AddChild_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.AddExtraContent"));
    struct Params_AddExtraContent {
        UWidget* NewContent; // 0x0
        bool ReturnValue; // 0x8
        char pad_9[0x7];
        UPanelSlot* CallFunc_AddChild_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddExtraContent params{};
    params.NewContent = (UWidget*)NewContent;
    params.CallFunc_AddChild_ReturnValue = (UPanelSlot*)CallFunc_AddChild_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUI_BP_CharacterSelectButton_C::SetState0(bool IsActive) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.SetState"));
    struct Params_SetState {
        bool IsActive; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SetState params{};
    params.IsActive = (bool)IsActive;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_CharacterSelectButton_C::ExecuteUbergraph_UI_BP_CharacterSelectButton(int32_t EntryPoint, FString K2Node_Event_ImageName, UWidget* K2Node_Event_NewContent, bool CallFunc_AddExtraContent_ReturnValue, FVector2D K2Node_Event_Size, bool K2Node_Event_isHighlighted, EIconButtonState K2Node_Event_NewState, bool CallFunc_HandleEnabled_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HandleDisabled_ReturnValue, bool CallFunc_HandleMissing_ReturnValue, bool CallFunc_HandleNonExistent_ReturnValue, FString K2Node_Event_IconName, bool CallFunc_NotEqual_StrStr_ReturnValue, UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.ExecuteUbergraph_UI_BP_CharacterSelectButton"));
    struct Params_ExecuteUbergraph_UI_BP_CharacterSelectButton {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        FString K2Node_Event_ImageName; // 0x8
        UWidget* K2Node_Event_NewContent; // 0x18
        bool CallFunc_AddExtraContent_ReturnValue; // 0x20
        char pad_21[0x3];
        FVector2D K2Node_Event_Size; // 0x24
        bool K2Node_Event_isHighlighted; // 0x2c
        EIconButtonState K2Node_Event_NewState; // 0x2d
        bool CallFunc_HandleEnabled_ReturnValue; // 0x2e
        bool K2Node_SwitchEnum_CmpSuccess; // 0x2f
        bool CallFunc_HandleDisabled_ReturnValue; // 0x30
        bool CallFunc_HandleMissing_ReturnValue; // 0x31
        bool CallFunc_HandleNonExistent_ReturnValue; // 0x32
        char pad_33[0x5];
        FString K2Node_Event_IconName; // 0x38
        bool CallFunc_NotEqual_StrStr_ReturnValue; // 0x48
        char pad_49[0x7];
        UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot; // 0x50
        bool K2Node_DynamicCast_bSuccess; // 0x58
        char pad_59[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x60
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0x68
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x70
    }; // Size: 0x78
    Params_ExecuteUbergraph_UI_BP_CharacterSelectButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_ImageName = (FString)K2Node_Event_ImageName;
    params.K2Node_Event_NewContent = (UWidget*)K2Node_Event_NewContent;
    params.CallFunc_AddExtraContent_ReturnValue = (bool)CallFunc_AddExtraContent_ReturnValue;
    params.K2Node_Event_Size = (FVector2D)K2Node_Event_Size;
    params.K2Node_Event_isHighlighted = (bool)K2Node_Event_isHighlighted;
    params.K2Node_Event_NewState = (EIconButtonState)K2Node_Event_NewState;
    params.CallFunc_HandleEnabled_ReturnValue = (bool)CallFunc_HandleEnabled_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_HandleDisabled_ReturnValue = (bool)CallFunc_HandleDisabled_ReturnValue;
    params.CallFunc_HandleMissing_ReturnValue = (bool)CallFunc_HandleMissing_ReturnValue;
    params.CallFunc_HandleNonExistent_ReturnValue = (bool)CallFunc_HandleNonExistent_ReturnValue;
    params.K2Node_Event_IconName = (FString)K2Node_Event_IconName;
    params.CallFunc_NotEqual_StrStr_ReturnValue = (bool)CallFunc_NotEqual_StrStr_ReturnValue;
    params.K2Node_DynamicCast_AsCanvas_Panel_Slot = (UCanvasPanelSlot*)K2Node_DynamicCast_AsCanvas_Panel_Slot;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    ProcessEvent(func, &params);
}
bool UUI_BP_CharacterSelectButton_C::IsInteractable() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.IsInteractable"));
    struct Params_IsInteractable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInteractable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_CharacterSelectButton_C::I_SetImage(FString ImageName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.I_SetImage"));
    struct Params_I_SetImage {
        FString ImageName; // 0x0
    }; // Size: 0x10
    Params_I_SetImage params{};
    params.ImageName = (FString)ImageName;
    ProcessEvent(func, &params);
}
void UUI_BP_CharacterSelectButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CharacterSelectButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CharacterSelectButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CharacterSelectButton_C::I_SetIconSize(FVector2D Size) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.I_SetIconSize"));
    struct Params_I_SetIconSize {
        FVector2D Size; // 0x0
    }; // Size: 0x8
    Params_I_SetIconSize params{};
    params.Size = (FVector2D)Size;
    ProcessEvent(func, &params);
}
void UUI_BP_CharacterSelectButton_C::HighlightButton0(bool isHighlighted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.HighlightButton"));
    struct Params_HighlightButton {
        bool isHighlighted; // 0x0
    }; // Size: 0x1
    Params_HighlightButton params{};
    params.isHighlighted = (bool)isHighlighted;
    ProcessEvent(func, &params);
}
void UUI_BP_CharacterSelectButton_C::OnSynchronizeProperties0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CharacterSelectButton_C::OnCharacterClicked__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.OnCharacterClicked__DelegateSignature"));
    struct Params_OnCharacterClicked__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_OnCharacterClicked__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_CharacterSelectButton_C::OnCharacterUnhovered__DelegateSignature(UUI_BP_CharacterSelectButton_C* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/UI_BP_CharacterSelectButton.UI_BP_CharacterSelectButton_C.OnCharacterUnhovered__DelegateSignature"));
    struct Params_OnCharacterUnhovered__DelegateSignature {
        UUI_BP_CharacterSelectButton_C* IconButton; // 0x0
    }; // Size: 0x8
    Params_OnCharacterUnhovered__DelegateSignature params{};
    params.IconButton = (UUI_BP_CharacterSelectButton_C*)IconButton;
    ProcessEvent(func, &params);
}
