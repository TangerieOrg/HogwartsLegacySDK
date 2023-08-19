#include "EFactsheetItemType.hpp"
#include "EIconButtonState.hpp"
#include "EUIAsyncLoadPriority.hpp"
#include "FVector2D.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UIconButtonWidget.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UTexture2D.hpp"
#include "UWidget.hpp"
void UIconButtonWidget::SetFactsheetItemType(EFactsheetItemType Type) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.SetFactsheetItemType"));
    struct Params_SetFactsheetItemType {
        EFactsheetItemType Type; // 0x0
    }; // Size: 0x1
    Params_SetFactsheetItemType params{};
    params.Type = (EFactsheetItemType)Type;
    ProcessEvent(func, &params);
}
void UIconButtonWidget::ButtonUnhovered() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.ButtonUnhovered"));
    struct Params_ButtonUnhovered {
    }; // Size: 0x0
    Params_ButtonUnhovered params{};
    ProcessEvent(func, &params);
}
UIconButtonWidget* UIconButtonWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.IconButtonWidget");
    return (UIconButtonWidget*)res;
}
void UIconButtonWidget::SetImage(FString ImageName, bool MatchSize, EUIAsyncLoadPriority OptionalPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.SetImage"));
    struct Params_SetImage {
        FString ImageName; // 0x0
        bool MatchSize; // 0x10
        EUIAsyncLoadPriority OptionalPriority; // 0x11
    }; // Size: 0x12
    Params_SetImage params{};
    params.ImageName = (FString)ImageName;
    params.MatchSize = (bool)MatchSize;
    params.OptionalPriority = (EUIAsyncLoadPriority)OptionalPriority;
    ProcessEvent(func, &params);
}
void UIconButtonWidget::TryResolveImage(bool bAsyncLoadIfFail, EUIAsyncLoadPriority OptionalPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.TryResolveImage"));
    struct Params_TryResolveImage {
        bool bAsyncLoadIfFail; // 0x0
        EUIAsyncLoadPriority OptionalPriority; // 0x1
    }; // Size: 0x2
    Params_TryResolveImage params{};
    params.bAsyncLoadIfFail = (bool)bAsyncLoadIfFail;
    params.OptionalPriority = (EUIAsyncLoadPriority)OptionalPriority;
    ProcessEvent(func, &params);
}
void UIconButtonWidget::SetIsNew(bool bIsNew) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.SetIsNew"));
    struct Params_SetIsNew {
        bool bIsNew; // 0x0
    }; // Size: 0x1
    Params_SetIsNew params{};
    params.bIsNew = (bool)bIsNew;
    ProcessEvent(func, &params);
}
bool UIconButtonWidget::SetState(bool IsActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.SetState"));
    struct Params_SetState {
        bool IsActive; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SetState params{};
    params.IsActive = (bool)IsActive;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UIconButtonWidget::ButtonHovered() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.ButtonHovered"));
    struct Params_ButtonHovered {
    }; // Size: 0x0
    Params_ButtonHovered params{};
    ProcessEvent(func, &params);
}
UWidget* UIconButtonWidget::GetExtraContent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.GetExtraContent"));
    struct Params_GetExtraContent {
        UWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetExtraContent params{};
    ProcessEvent(func, &params);
    return (UWidget*)params.ReturnValue;
}
void UIconButtonWidget::SetIsTutorialHighlighted(bool bIsTutorialHighlighted) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.SetIsTutorialHighlighted"));
    struct Params_SetIsTutorialHighlighted {
        bool bIsTutorialHighlighted; // 0x0
    }; // Size: 0x1
    Params_SetIsTutorialHighlighted params{};
    params.bIsTutorialHighlighted = (bool)bIsTutorialHighlighted;
    ProcessEvent(func, &params);
}
void UIconButtonWidget::SetHexBack(FString ImageName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.SetHexBack"));
    struct Params_SetHexBack {
        FString ImageName; // 0x0
    }; // Size: 0x10
    Params_SetHexBack params{};
    params.ImageName = (FString)ImageName;
    ProcessEvent(func, &params);
}
void UIconButtonWidget::SetButtonStatus(FString StateImage, bool StateImageVisible, FString StateHexBack, bool StateEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.SetButtonStatus"));
    struct Params_SetButtonStatus {
        FString StateImage; // 0x0
        bool StateImageVisible; // 0x10
        char pad_11[0x7];
        FString StateHexBack; // 0x18
        bool StateEnabled; // 0x28
    }; // Size: 0x29
    Params_SetButtonStatus params{};
    params.StateImage = (FString)StateImage;
    params.StateImageVisible = (bool)StateImageVisible;
    params.StateHexBack = (FString)StateHexBack;
    params.StateEnabled = (bool)StateEnabled;
    ProcessEvent(func, &params);
}
bool UIconButtonWidget::HandleMissing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.HandleMissing"));
    struct Params_HandleMissing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleMissing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UIconButtonWidget::SetButtonState(EIconButtonState NewState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.SetButtonState"));
    struct Params_SetButtonState {
        EIconButtonState NewState; // 0x0
    }; // Size: 0x1
    Params_SetButtonState params{};
    params.NewState = (EIconButtonState)NewState;
    ProcessEvent(func, &params);
}
void UIconButtonWidget::SetButtonSize(FVector2D NewSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.SetButtonSize"));
    struct Params_SetButtonSize {
        FVector2D NewSize; // 0x0
    }; // Size: 0x8
    Params_SetButtonSize params{};
    params.NewSize = (FVector2D)NewSize;
    ProcessEvent(func, &params);
}
bool UIconButtonWidget::SetButtonIcons(FString BackgroundImage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.SetButtonIcons"));
    struct Params_SetButtonIcons {
        FString BackgroundImage; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetButtonIcons params{};
    params.BackgroundImage = (FString)BackgroundImage;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UIconButtonWidget::HandleEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.HandleEnabled"));
    struct Params_HandleEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UIconButtonWidget::RemoveExtraContent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.RemoveExtraContent"));
    struct Params_RemoveExtraContent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_RemoveExtraContent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UIconButtonWidget::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
void UIconButtonWidget::OnSelectionChanged(bool selected) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.OnSelectionChanged"));
    struct Params_OnSelectionChanged {
        bool selected; // 0x0
    }; // Size: 0x1
    Params_OnSelectionChanged params{};
    params.selected = (bool)selected;
    ProcessEvent(func, &params);
}
bool UIconButtonWidget::AddExtraContent(UWidget* NewContent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.AddExtraContent"));
    struct Params_AddExtraContent {
        UWidget* NewContent; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_AddExtraContent params{};
    params.NewContent = (UWidget*)NewContent;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UIconButtonWidget::OnImageLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.OnImageLoaded"));
    struct Params_OnImageLoaded {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
    }; // Size: 0x10
    Params_OnImageLoaded params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    ProcessEvent(func, &params);
}
EFactsheetItemType UIconButtonWidget::GetFactsheetItemType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.GetFactsheetItemType"));
    struct Params_GetFactsheetItemType {
        EFactsheetItemType ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetFactsheetItemType params{};
    ProcessEvent(func, &params);
    return (EFactsheetItemType)params.ReturnValue;
}
void UIconButtonWidget::HighlightButton(bool isHighlighted) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.HighlightButton"));
    struct Params_HighlightButton {
        bool isHighlighted; // 0x0
    }; // Size: 0x1
    Params_HighlightButton params{};
    params.isHighlighted = (bool)isHighlighted;
    ProcessEvent(func, &params);
}
void UIconButtonWidget::ButtonClicked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.ButtonClicked"));
    struct Params_ButtonClicked {
    }; // Size: 0x0
    Params_ButtonClicked params{};
    ProcessEvent(func, &params);
}
bool UIconButtonWidget::HandleDisabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.HandleDisabled"));
    struct Params_HandleDisabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleDisabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UIconButtonWidget::HandleNonExistent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.HandleNonExistent"));
    struct Params_HandleNonExistent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleNonExistent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UIconButtonWidget::GetFactsheetItemName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.GetFactsheetItemName"));
    struct Params_GetFactsheetItemName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetFactsheetItemName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UIconButtonWidget::GetFactsheetItemDesc() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.GetFactsheetItemDesc"));
    struct Params_GetFactsheetItemDesc {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetFactsheetItemDesc params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UIconButtonWidget::ButtonReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.ButtonReleased"));
    struct Params_ButtonReleased {
    }; // Size: 0x0
    Params_ButtonReleased params{};
    ProcessEvent(func, &params);
}
void UIconButtonWidget::ButtonPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconButtonWidget.ButtonPressed"));
    struct Params_ButtonPressed {
    }; // Size: 0x0
    Params_ButtonPressed params{};
    ProcessEvent(func, &params);
}
