#include "EIconButtonState.hpp"
#include "EInventoryQuality.hpp"
#include "FInventoryResult.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUI_BPI_InventoryIconButton_C.hpp"
#include "UUserWidget.hpp"
UUI_BPI_InventoryIconButton_C* UUI_BPI_InventoryIconButton_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C");
    return (UUI_BPI_InventoryIconButton_C*)res;
}
void UUI_BPI_InventoryIconButton_C::I_Play_Purchase_Animation() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.I Play Purchase Animation"));
    struct Params_I_Play_Purchase_Animation {
    }; // Size: 0x0
    Params_I_Play_Purchase_Animation params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryIconButton_C::SetModifiedCost(int32_t ModifiedCost) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetModifiedCost"));
    struct Params_SetModifiedCost {
        int32_t ModifiedCost; // 0x0
    }; // Size: 0x4
    Params_SetModifiedCost params{};
    params.ModifiedCost = (int32_t)ModifiedCost;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryIconButton_C::I_SetIsNew(bool IsNew) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.I_SetIsNew"));
    struct Params_I_SetIsNew {
        bool IsNew; // 0x0
    }; // Size: 0x1
    Params_I_SetIsNew params{};
    params.IsNew = (bool)IsNew;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryIconButton_C::GetItemVariation(FName& Variation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.GetItemVariation"));
    struct Params_GetItemVariation {
        FName Variation; // 0x0
    }; // Size: 0x8
    Params_GetItemVariation params{};
    params.Variation = (FName)Variation;
    ProcessEvent(func, &params);
    Variation = params.Variation;
}
void UUI_BPI_InventoryIconButton_C::I_GetItemCount(int32_t& ItemCount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.I_GetItemCount"));
    struct Params_I_GetItemCount {
        int32_t ItemCount; // 0x0
    }; // Size: 0x4
    Params_I_GetItemCount params{};
    params.ItemCount = (int32_t)ItemCount;
    ProcessEvent(func, &params);
    ItemCount = params.ItemCount;
}
void UUI_BPI_InventoryIconButton_C::I_SetIsQuestItem(bool isQuestItem) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.I_SetIsQuestItem"));
    struct Params_I_SetIsQuestItem {
        bool isQuestItem; // 0x0
    }; // Size: 0x1
    Params_I_SetIsQuestItem params{};
    params.isQuestItem = (bool)isQuestItem;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryIconButton_C::I_GetIsEmpty(bool& isButtonEmpty) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.I_GetIsEmpty"));
    struct Params_I_GetIsEmpty {
        bool isButtonEmpty; // 0x0
    }; // Size: 0x1
    Params_I_GetIsEmpty params{};
    params.isButtonEmpty = (bool)isButtonEmpty;
    ProcessEvent(func, &params);
    isButtonEmpty = params.isButtonEmpty;
}
void UUI_BPI_InventoryIconButton_C::I_GetItemRarity(FName& Rarity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.I_GetItemRarity"));
    struct Params_I_GetItemRarity {
        FName Rarity; // 0x0
    }; // Size: 0x8
    Params_I_GetItemRarity params{};
    params.Rarity = (FName)Rarity;
    ProcessEvent(func, &params);
    Rarity = params.Rarity;
}
void UUI_BPI_InventoryIconButton_C::SetIconButtonSize(FVector2D NewSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetIconButtonSize"));
    struct Params_SetIconButtonSize {
        FVector2D NewSize; // 0x0
    }; // Size: 0x8
    Params_SetIconButtonSize params{};
    params.NewSize = (FVector2D)NewSize;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryIconButton_C::SetIconButtonEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetIconButtonEnabled"));
    struct Params_SetIconButtonEnabled {
    }; // Size: 0x0
    Params_SetIconButtonEnabled params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryIconButton_C::I_SetTurninCount(int32_t CurrentCount, int32_t NeededCount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.I_SetTurninCount"));
    struct Params_I_SetTurninCount {
        int32_t CurrentCount; // 0x0
        int32_t NeededCount; // 0x4
    }; // Size: 0x8
    Params_I_SetTurninCount params{};
    params.CurrentCount = (int32_t)CurrentCount;
    params.NeededCount = (int32_t)NeededCount;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryIconButton_C::GetItemCost(int32_t& Cost) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.GetItemCost"));
    struct Params_GetItemCost {
        int32_t Cost; // 0x0
    }; // Size: 0x4
    Params_GetItemCost params{};
    params.Cost = (int32_t)Cost;
    ProcessEvent(func, &params);
    Cost = params.Cost;
}
void UUI_BPI_InventoryIconButton_C::SetInventoryResult(FInventoryResult InventoryResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetInventoryResult"));
    struct Params_SetInventoryResult {
        FInventoryResult InventoryResult; // 0x0
    }; // Size: 0x88
    Params_SetInventoryResult params{};
    params.InventoryResult = (FInventoryResult)InventoryResult;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryIconButton_C::GetModifiedCost(int32_t& ModifiedCost) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.GetModifiedCost"));
    struct Params_GetModifiedCost {
        int32_t ModifiedCost; // 0x0
    }; // Size: 0x4
    Params_GetModifiedCost params{};
    params.ModifiedCost = (int32_t)ModifiedCost;
    ProcessEvent(func, &params);
    ModifiedCost = params.ModifiedCost;
}
void UUI_BPI_InventoryIconButton_C::GetItemQuality(EInventoryQuality& Quality) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.GetItemQuality"));
    struct Params_GetItemQuality {
        EInventoryQuality Quality; // 0x0
    }; // Size: 0x1
    Params_GetItemQuality params{};
    params.Quality = (EInventoryQuality)Quality;
    ProcessEvent(func, &params);
    Quality = params.Quality;
}
void UUI_BPI_InventoryIconButton_C::GetInventoryResult(FInventoryResult& InventoryResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.GetInventoryResult"));
    struct Params_GetInventoryResult {
        FInventoryResult InventoryResult; // 0x0
    }; // Size: 0x88
    Params_GetInventoryResult params{};
    params.InventoryResult = (FInventoryResult)InventoryResult;
    ProcessEvent(func, &params);
    InventoryResult = params.InventoryResult;
}
void UUI_BPI_InventoryIconButton_C::ErrorAnimation() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.ErrorAnimation"));
    struct Params_ErrorAnimation {
    }; // Size: 0x0
    Params_ErrorAnimation params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryIconButton_C::SetParent(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryIconButton_C::SetIconButtonDisabled() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetIconButtonDisabled"));
    struct Params_SetIconButtonDisabled {
    }; // Size: 0x0
    Params_SetIconButtonDisabled params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryIconButton_C::SetIconButtonMissing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetIconButtonMissing"));
    struct Params_SetIconButtonMissing {
    }; // Size: 0x0
    Params_SetIconButtonMissing params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryIconButton_C::SetIconButtonNonExistant() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetIconButtonNonExistant"));
    struct Params_SetIconButtonNonExistant {
    }; // Size: 0x0
    Params_SetIconButtonNonExistant params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryIconButton_C::SetCountVisible(bool ShowCount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetCountVisible"));
    struct Params_SetCountVisible {
        bool ShowCount; // 0x0
    }; // Size: 0x1
    Params_SetCountVisible params{};
    params.ShowCount = (bool)ShowCount;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryIconButton_C::SetIconButtonState(EIconButtonState NewState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetIconButtonState"));
    struct Params_SetIconButtonState {
        EIconButtonState NewState; // 0x0
    }; // Size: 0x1
    Params_SetIconButtonState params{};
    params.NewState = (EIconButtonState)NewState;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryIconButton_C::GetIconName(FString& IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.GetIconName"));
    struct Params_GetIconName {
        FString IconName; // 0x0
    }; // Size: 0x10
    Params_GetIconName params{};
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
    IconName = params.IconName;
}
void UUI_BPI_InventoryIconButton_C::SetItemCount(int32_t ItemCount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetItemCount"));
    struct Params_SetItemCount {
        int32_t ItemCount; // 0x0
    }; // Size: 0x4
    Params_SetItemCount params{};
    params.ItemCount = (int32_t)ItemCount;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryIconButton_C::InitializeItemButton(FInventoryResult Inventory_Item, float Modifier) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.InitializeItemButton"));
    struct Params_InitializeItemButton {
        FInventoryResult Inventory_Item; // 0x0
        float Modifier; // 0x88
    }; // Size: 0x8c
    Params_InitializeItemButton params{};
    params.Inventory_Item = (FInventoryResult)Inventory_Item;
    params.Modifier = (float)Modifier;
    ProcessEvent(func, &params);
}
void UUI_BPI_InventoryIconButton_C::SetItemQuality(EInventoryQuality Quality) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_InventoryIconButton.UI_BPI_InventoryIconButton_C.SetItemQuality"));
    struct Params_SetItemQuality {
        EInventoryQuality Quality; // 0x0
    }; // Size: 0x1
    Params_SetItemQuality params{};
    params.Quality = (EInventoryQuality)Quality;
    ProcessEvent(func, &params);
}
