#include "UFunction.hpp"
#include "UImage.hpp"
#include "UNotificationWidget.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUserWidget.hpp"
UNotificationWidget* UNotificationWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NotificationWidget");
    return (UNotificationWidget*)res;
}
bool UNotificationWidget::IncrementCount(int32_t Amount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationWidget.IncrementCount"));
    struct Params_IncrementCount {
        int32_t Amount; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IncrementCount params{};
    params.Amount = (int32_t)Amount;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UNotificationWidget::ToggleCountVisibility(bool IsVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationWidget.ToggleCountVisibility"));
    struct Params_ToggleCountVisibility {
        bool IsVisible; // 0x0
    }; // Size: 0x1
    Params_ToggleCountVisibility params{};
    params.IsVisible = (bool)IsVisible;
    ProcessEvent(func, &params);
}
void UNotificationWidget::SetIsInventoryFullNotification(bool IsInventoryFull) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationWidget.SetIsInventoryFullNotification"));
    struct Params_SetIsInventoryFullNotification {
        bool IsInventoryFull; // 0x0
    }; // Size: 0x1
    Params_SetIsInventoryFullNotification params{};
    params.IsInventoryFull = (bool)IsInventoryFull;
    ProcessEvent(func, &params);
}
void UNotificationWidget::InitDetails(FString NewItemName, FName NewVariation, FString DisplayName, bool bIsHeaderTranslatable, int32_t NewItemCount, FString NewIconName, bool bSpecialCollection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NotificationWidget.InitDetails"));
    struct Params_InitDetails {
        FString NewItemName; // 0x0
        FName NewVariation; // 0x10
        FString DisplayName; // 0x18
        bool bIsHeaderTranslatable; // 0x28
        char pad_29[0x3];
        int32_t NewItemCount; // 0x2c
        FString NewIconName; // 0x30
        bool bSpecialCollection; // 0x40
    }; // Size: 0x41
    Params_InitDetails params{};
    params.NewItemName = (FString)NewItemName;
    params.NewVariation = (FName)NewVariation;
    params.DisplayName = (FString)DisplayName;
    params.bIsHeaderTranslatable = (bool)bIsHeaderTranslatable;
    params.NewItemCount = (int32_t)NewItemCount;
    params.NewIconName = (FString)NewIconName;
    params.bSpecialCollection = (bool)bSpecialCollection;
    ProcessEvent(func, &params);
}
