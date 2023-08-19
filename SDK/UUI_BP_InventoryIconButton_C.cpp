#include "EIconButtonState.hpp"
#include "EInventoryQuality.hpp"
#include "ESlateVisibility.hpp"
#include "FInventoryResult.hpp"
#include "FItemProperties.hpp"
#include "FLinearColor.hpp"
#include "FPointerEvent.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRarityColors.hpp"
#include "FSlateColor.hpp"
#include "FVector2D.hpp"
#include "UDragDropOperation.hpp"
#include "UFunction.hpp"
#include "UIconButtonWidget.hpp"
#include "UImage.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UScaleBox.hpp"
#include "USizeBox.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_InventoryIconButton_C.hpp"
#include "UUI_BP_NewIndicator_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_InventoryIconButton_C::I_GetIsEmpty(bool& isButtonEmpty) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.I_GetIsEmpty"));
    struct Params_I_GetIsEmpty {
        bool isButtonEmpty; // 0x0
    }; // Size: 0x1
    Params_I_GetIsEmpty params{};
    params.isButtonEmpty = (bool)isButtonEmpty;
    ProcessEvent(func, &params);
    isButtonEmpty = params.isButtonEmpty;
}
UUI_BP_InventoryIconButton_C* UUI_BP_InventoryIconButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C");
    return (UUI_BP_InventoryIconButton_C*)res;
}
bool UUI_BP_InventoryIconButton_C::HandleEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.HandleEnabled"));
    struct Params_HandleEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_InventoryIconButton_C::GetInventoryResult(FInventoryResult& InventoryResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.GetInventoryResult"));
    struct Params_GetInventoryResult {
        FInventoryResult InventoryResult; // 0x0
    }; // Size: 0x88
    Params_GetInventoryResult params{};
    params.InventoryResult = (FInventoryResult)InventoryResult;
    ProcessEvent(func, &params);
    InventoryResult = params.InventoryResult;
}
void UUI_BP_InventoryIconButton_C::SetLevelReqMet(bool LevelMet) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetLevelReqMet"));
    struct Params_SetLevelReqMet {
        bool LevelMet; // 0x0
    }; // Size: 0x1
    Params_SetLevelReqMet params{};
    params.LevelMet = (bool)LevelMet;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::I_GetItemRarity(FName& Rarity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.I_GetItemRarity"));
    struct Params_I_GetItemRarity {
        FName Rarity; // 0x0
    }; // Size: 0x8
    Params_I_GetItemRarity params{};
    params.Rarity = (FName)Rarity;
    ProcessEvent(func, &params);
    Rarity = params.Rarity;
}
void UUI_BP_InventoryIconButton_C::PurchasedAnimationFinished__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.PurchasedAnimationFinished__DelegateSignature"));
    struct Params_PurchasedAnimationFinished__DelegateSignature {
    }; // Size: 0x0
    Params_PurchasedAnimationFinished__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::InitializeItemButton(FInventoryResult Inventory_Item, float Modifier) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.InitializeItemButton"));
    struct Params_InitializeItemButton {
        FInventoryResult Inventory_Item; // 0x0
        float Modifier; // 0x88
    }; // Size: 0x8c
    Params_InitializeItemButton params{};
    params.Inventory_Item = (FInventoryResult)Inventory_Item;
    params.Modifier = (float)Modifier;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::GetItemVariation(FName& Variation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.GetItemVariation"));
    struct Params_GetItemVariation {
        FName Variation; // 0x0
    }; // Size: 0x8
    Params_GetItemVariation params{};
    params.Variation = (FName)Variation;
    ProcessEvent(func, &params);
    Variation = params.Variation;
}
void UUI_BP_InventoryIconButton_C::I_GetItemCount(int32_t& ItemCount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.I_GetItemCount"));
    struct Params_I_GetItemCount {
        int32_t ItemCount; // 0x0
    }; // Size: 0x4
    Params_I_GetItemCount params{};
    params.ItemCount = (int32_t)ItemCount;
    ProcessEvent(func, &params);
    ItemCount = params.ItemCount;
}
void UUI_BP_InventoryIconButton_C::I_SetTurninCount(int32_t CurrentCount, int32_t NeededCount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.I_SetTurninCount"));
    struct Params_I_SetTurninCount {
        int32_t CurrentCount; // 0x0
        int32_t NeededCount; // 0x4
    }; // Size: 0x8
    Params_I_SetTurninCount params{};
    params.CurrentCount = (int32_t)CurrentCount;
    params.NeededCount = (int32_t)NeededCount;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetCountVisible(bool ShowCount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetCountVisible"));
    struct Params_SetCountVisible {
        bool ShowCount; // 0x0
    }; // Size: 0x1
    Params_SetCountVisible params{};
    params.ShowCount = (bool)ShowCount;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::GetModifiedCost(int32_t& ModifiedCost) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.GetModifiedCost"));
    struct Params_GetModifiedCost {
        int32_t ModifiedCost; // 0x0
    }; // Size: 0x4
    Params_GetModifiedCost params{};
    params.ModifiedCost = (int32_t)ModifiedCost;
    ProcessEvent(func, &params);
    ModifiedCost = params.ModifiedCost;
}
void UUI_BP_InventoryIconButton_C::GetItemCost(int32_t& Cost) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.GetItemCost"));
    struct Params_GetItemCost {
        int32_t Cost; // 0x0
    }; // Size: 0x4
    Params_GetItemCost params{};
    params.Cost = (int32_t)Cost;
    ProcessEvent(func, &params);
    Cost = params.Cost;
}
void UUI_BP_InventoryIconButton_C::GetIconName(FString& IconName, FString CallFunc_Conv_NameToString_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.GetIconName"));
    struct Params_GetIconName {
        FString IconName; // 0x0
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetIconName params{};
    params.IconName = (FString)IconName;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    ProcessEvent(func, &params);
    IconName = params.IconName;
}
void UUI_BP_InventoryIconButton_C::GetItemQuality(EInventoryQuality& Quality) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.GetItemQuality"));
    struct Params_GetItemQuality {
        EInventoryQuality Quality; // 0x0
    }; // Size: 0x1
    Params_GetItemQuality params{};
    params.Quality = (EInventoryQuality)Quality;
    ProcessEvent(func, &params);
    Quality = params.Quality;
}
void UUI_BP_InventoryIconButton_C::OnDragCancelled(FPointerEvent& PointerEvent, UDragDropOperation* Operation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.OnDragCancelled"));
    struct Params_OnDragCancelled {
        FPointerEvent PointerEvent; // 0x0
        UDragDropOperation* Operation; // 0x70
    }; // Size: 0x78
    Params_OnDragCancelled params{};
    params.PointerEvent = (FPointerEvent)PointerEvent;
    params.Operation = (UDragDropOperation*)Operation;
    ProcessEvent(func, &params);
    PointerEvent = params.PointerEvent;
}
void UUI_BP_InventoryIconButton_C::CheckItemID(FString NewID, FString& NewItemID, FString TempID, UUIManager* CallFunc_Get_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.CheckItemID"));
    struct Params_CheckItemID {
        FString NewID; // 0x0
        FString NewItemID; // 0x10
        FString TempID; // 0x20
        UUIManager* CallFunc_Get_ReturnValue; // 0x30
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x38
        char pad_39[0x7];
        FString CallFunc_GetPlayerHouse_ReturnValue; // 0x40
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x50
    }; // Size: 0x60
    Params_CheckItemID params{};
    params.NewID = (FString)NewID;
    params.NewItemID = (FString)NewItemID;
    params.TempID = (FString)TempID;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_GetPlayerHouse_ReturnValue = (FString)CallFunc_GetPlayerHouse_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    ProcessEvent(func, &params);
    NewItemID = params.NewItemID;
}
void UUI_BP_InventoryIconButton_C::UpdateHolderID(FName NewHolderID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.UpdateHolderID"));
    struct Params_UpdateHolderID {
        FName NewHolderID; // 0x0
    }; // Size: 0x8
    Params_UpdateHolderID params{};
    params.NewHolderID = (FName)NewHolderID;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetIconButtonNonExistant() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIconButtonNonExistant"));
    struct Params_SetIconButtonNonExistant {
    }; // Size: 0x0
    Params_SetIconButtonNonExistant params{};
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_InventoryIconButton_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue) {}
void UUI_BP_InventoryIconButton_C::Play_Purchase_Animation(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.Play Purchase Animation"));
    struct Params_Play_Purchase_Animation {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Play_Purchase_Animation params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::Set_TraitIndicator(bool Item_Have_Trait, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.Set TraitIndicator"));
    struct Params_Set_TraitIndicator {
        bool Item_Have_Trait; // 0x0
        bool Temp_bool_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable; // 0x2
        ESlateVisibility Temp_byte_Variable_1; // 0x3
        ESlateVisibility K2Node_Select_Default; // 0x4
    }; // Size: 0x5
    Params_Set_TraitIndicator params{};
    params.Item_Have_Trait = (bool)Item_Have_Trait;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::Set_Is_New_Item(bool Index) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.Set Is New Item"));
    struct Params_Set_Is_New_Item {
        bool Index; // 0x0
    }; // Size: 0x1
    Params_Set_Is_New_Item params{};
    params.Index = (bool)Index;
    ProcessEvent(func, &params);
}
bool UUI_BP_InventoryIconButton_C::SetButtonIcons(FString BackgroundImage, bool CallFunc_NotEqual_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetButtonIcons"));
    struct Params_SetButtonIcons {
        FString BackgroundImage; // 0x0
        bool ReturnValue; // 0x10
        bool CallFunc_NotEqual_StrStr_ReturnValue; // 0x11
    }; // Size: 0x12
    Params_SetButtonIcons params{};
    params.BackgroundImage = (FString)BackgroundImage;
    params.CallFunc_NotEqual_StrStr_ReturnValue = (bool)CallFunc_NotEqual_StrStr_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_InventoryIconButton_C::PlaySelectedAnimation() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.PlaySelectedAnimation"));
    struct Params_PlaySelectedAnimation {
    }; // Size: 0x0
    Params_PlaySelectedAnimation params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::ExecuteUbergraph_UI_BP_InventoryIconButton(int32_t EntryPoint, ESlateVisibility Temp_byte_Variable, bool CallFunc_IsAnimationPlaying_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2) {}
void UUI_BP_InventoryIconButton_C::SetTurnInCount(int32_t CurrentCount, int32_t NeededCount, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor_1) {}
void UUI_BP_InventoryIconButton_C::Dim(FSlateColor K2Node_MakeStruct_SlateColor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.Dim"));
    struct Params_Dim {
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x0
    }; // Size: 0x28
    Params_Dim params{};
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::OnDropComplete__DelegateSignature(UUI_BP_InventoryIconButton_C* Held, UUI_BP_InventoryIconButton_C* Container) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.OnDropComplete__DelegateSignature"));
    struct Params_OnDropComplete__DelegateSignature {
        UUI_BP_InventoryIconButton_C* Held; // 0x0
        UUI_BP_InventoryIconButton_C* Container; // 0x8
    }; // Size: 0x10
    Params_OnDropComplete__DelegateSignature params{};
    params.Held = (UUI_BP_InventoryIconButton_C*)Held;
    params.Container = (UUI_BP_InventoryIconButton_C*)Container;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetParent(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetIconButtonMissing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIconButtonMissing"));
    struct Params_SetIconButtonMissing {
    }; // Size: 0x0
    Params_SetIconButtonMissing params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetButtonEmpty(bool IsEmpty, FString Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetButtonEmpty"));
    struct Params_SetButtonEmpty {
        bool IsEmpty; // 0x0
        char pad_1[0x7];
        FString Item; // 0x8
    }; // Size: 0x18
    Params_SetButtonEmpty params{};
    params.IsEmpty = (bool)IsEmpty;
    params.Item = (FString)Item;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::I_Play_Purchase_Animation() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.I Play Purchase Animation"));
    struct Params_I_Play_Purchase_Animation {
    }; // Size: 0x0
    Params_I_Play_Purchase_Animation params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetRarityState(FName RarityTier, FRarityColors CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, FLinearColor CallFunc_GetColorByRowHandleBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetRarityState"));
    struct Params_SetRarityState {
        FName RarityTier; // 0x0
        FRarityColors CallFunc_GetDataTableRowFromName_OutRow; // 0x8
        bool CallFunc_GetDataTableRowFromName_ReturnValue; // 0x50
        char pad_51[0x3];
        FLinearColor CallFunc_GetColorByRowHandleBP_ReturnValue; // 0x54
    }; // Size: 0x64
    Params_SetRarityState params{};
    params.RarityTier = (FName)RarityTier;
    params.CallFunc_GetDataTableRowFromName_OutRow = (FRarityColors)CallFunc_GetDataTableRowFromName_OutRow;
    params.CallFunc_GetDataTableRowFromName_ReturnValue = (bool)CallFunc_GetDataTableRowFromName_ReturnValue;
    params.CallFunc_GetColorByRowHandleBP_ReturnValue = (FLinearColor)CallFunc_GetColorByRowHandleBP_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetIsCurrentSelection(bool IsCurrent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIsCurrentSelection"));
    struct Params_SetIsCurrentSelection {
        bool IsCurrent; // 0x0
    }; // Size: 0x1
    Params_SetIsCurrentSelection params{};
    params.IsCurrent = (bool)IsCurrent;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetInventoryResult(FInventoryResult InventoryResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetInventoryResult"));
    struct Params_SetInventoryResult {
        FInventoryResult InventoryResult; // 0x0
    }; // Size: 0x88
    Params_SetInventoryResult params{};
    params.InventoryResult = (FInventoryResult)InventoryResult;
    ProcessEvent(func, &params);
}
bool UUI_BP_InventoryIconButton_C::HandleNonExistent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.HandleNonExistent"));
    struct Params_HandleNonExistent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleNonExistent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_InventoryIconButton_C::SetIsSelected(bool IsSelected, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIsSelected"));
    struct Params_SetIsSelected {
        bool IsSelected; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_SetIsSelected params{};
    params.IsSelected = (bool)IsSelected;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    ProcessEvent(func, &params);
}
bool UUI_BP_InventoryIconButton_C::HandleMissing() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.HandleMissing"));
    struct Params_HandleMissing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HandleMissing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUI_BP_InventoryIconButton_C::HandleDisabled(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.HandleDisabled"));
    struct Params_HandleDisabled {
        bool ReturnValue; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_HandleDisabled params{};
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_InventoryIconButton_C::SetCountVisibleHandler(int32_t ItemCount, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetCountVisibleHandler"));
    struct Params_SetCountVisibleHandler {
        int32_t ItemCount; // 0x0
        bool Temp_bool_Variable; // 0x4
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x5
        ESlateVisibility Temp_byte_Variable; // 0x6
        ESlateVisibility Temp_byte_Variable_1; // 0x7
        ESlateVisibility K2Node_Select_Default; // 0x8
    }; // Size: 0x9
    Params_SetCountVisibleHandler params{};
    params.ItemCount = (int32_t)ItemCount;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::InitItemButton(FInventoryResult InventoryItem, float Modifier, FString ImageName, bool CallFunc_NotEqual_StrStr_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, FItemProperties CallFunc_GetItemProperties_ItemProperties, bool CallFunc_GetItemProperties_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_SetInventoryIconOverride_OutDisplayName, FString CallFunc_SetInventoryIconOverride_OutIconName, bool CallFunc_SetInventoryIconOverride_OutIsNameTranslatable, bool CallFunc_SetInventoryIconOverride_ReturnValue, FString CallFunc_CheckItemID_NewItemID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.InitItemButton"));
    struct Params_InitItemButton {
        FInventoryResult InventoryItem; // 0x0
        float Modifier; // 0x88
        char pad_8c[0x4];
        FString ImageName; // 0x90
        bool CallFunc_NotEqual_StrStr_ReturnValue; // 0xa0
        char pad_a1[0x3];
        float CallFunc_Multiply_IntFloat_ReturnValue; // 0xa4
        int32_t CallFunc_FTrunc_ReturnValue; // 0xa8
        FItemProperties CallFunc_GetItemProperties_ItemProperties; // 0xac
        bool CallFunc_GetItemProperties_ReturnValue; // 0x118
        char pad_119[0x7];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x120
        FString CallFunc_SetInventoryIconOverride_OutDisplayName; // 0x130
        FString CallFunc_SetInventoryIconOverride_OutIconName; // 0x140
        bool CallFunc_SetInventoryIconOverride_OutIsNameTranslatable; // 0x150
        bool CallFunc_SetInventoryIconOverride_ReturnValue; // 0x151
        char pad_152[0x6];
        FString CallFunc_CheckItemID_NewItemID; // 0x158
    }; // Size: 0x168
    Params_InitItemButton params{};
    params.InventoryItem = (FInventoryResult)InventoryItem;
    params.Modifier = (float)Modifier;
    params.ImageName = (FString)ImageName;
    params.CallFunc_NotEqual_StrStr_ReturnValue = (bool)CallFunc_NotEqual_StrStr_ReturnValue;
    params.CallFunc_Multiply_IntFloat_ReturnValue = (float)CallFunc_Multiply_IntFloat_ReturnValue;
    params.CallFunc_FTrunc_ReturnValue = (int32_t)CallFunc_FTrunc_ReturnValue;
    params.CallFunc_GetItemProperties_ItemProperties = (FItemProperties)CallFunc_GetItemProperties_ItemProperties;
    params.CallFunc_GetItemProperties_ReturnValue = (bool)CallFunc_GetItemProperties_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_SetInventoryIconOverride_OutDisplayName = (FString)CallFunc_SetInventoryIconOverride_OutDisplayName;
    params.CallFunc_SetInventoryIconOverride_OutIconName = (FString)CallFunc_SetInventoryIconOverride_OutIconName;
    params.CallFunc_SetInventoryIconOverride_OutIsNameTranslatable = (bool)CallFunc_SetInventoryIconOverride_OutIsNameTranslatable;
    params.CallFunc_SetInventoryIconOverride_ReturnValue = (bool)CallFunc_SetInventoryIconOverride_ReturnValue;
    params.CallFunc_CheckItemID_NewItemID = (FString)CallFunc_CheckItemID_NewItemID;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetItemCost(int32_t Cost, int32_t ModifiedCost) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetItemCost"));
    struct Params_SetItemCost {
        int32_t Cost; // 0x0
        int32_t ModifiedCost; // 0x4
    }; // Size: 0x8
    Params_SetItemCost params{};
    params.Cost = (int32_t)Cost;
    params.ModifiedCost = (int32_t)ModifiedCost;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::HighlightButton(bool isHighlighted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.HighlightButton"));
    struct Params_HighlightButton {
        bool isHighlighted; // 0x0
    }; // Size: 0x1
    Params_HighlightButton params{};
    params.isHighlighted = (bool)isHighlighted;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetItemCountHandler(int32_t ItemCount, bool Temp_bool_Variable) {}
void UUI_BP_InventoryIconButton_C::Finished_3766CA3448CB5F6A18115FB0C3017A79() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.Finished_3766CA3448CB5F6A18115FB0C3017A79"));
    struct Params_Finished_3766CA3448CB5F6A18115FB0C3017A79 {
    }; // Size: 0x0
    Params_Finished_3766CA3448CB5F6A18115FB0C3017A79 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetItemCount(int32_t ItemCount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetItemCount"));
    struct Params_SetItemCount {
        int32_t ItemCount; // 0x0
    }; // Size: 0x4
    Params_SetItemCount params{};
    params.ItemCount = (int32_t)ItemCount;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetIconButtonEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIconButtonEnabled"));
    struct Params_SetIconButtonEnabled {
    }; // Size: 0x0
    Params_SetIconButtonEnabled params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetIconButtonDisabled() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIconButtonDisabled"));
    struct Params_SetIconButtonDisabled {
    }; // Size: 0x0
    Params_SetIconButtonDisabled params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetModifiedCost(int32_t ModifiedCost) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetModifiedCost"));
    struct Params_SetModifiedCost {
        int32_t ModifiedCost; // 0x0
    }; // Size: 0x4
    Params_SetModifiedCost params{};
    params.ModifiedCost = (int32_t)ModifiedCost;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetIconButtonState(EIconButtonState NewState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIconButtonState"));
    struct Params_SetIconButtonState {
        EIconButtonState NewState; // 0x0
    }; // Size: 0x1
    Params_SetIconButtonState params{};
    params.NewState = (EIconButtonState)NewState;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetIsNew(bool bIsNew) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIsNew"));
    struct Params_SetIsNew {
        bool bIsNew; // 0x0
    }; // Size: 0x1
    Params_SetIsNew params{};
    params.bIsNew = (bool)bIsNew;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::I_SetIsQuestItem(bool isQuestItem) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.I_SetIsQuestItem"));
    struct Params_I_SetIsQuestItem {
        bool isQuestItem; // 0x0
    }; // Size: 0x1
    Params_I_SetIsQuestItem params{};
    params.isQuestItem = (bool)isQuestItem;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetIconButtonSize(FVector2D NewSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIconButtonSize"));
    struct Params_SetIconButtonSize {
        FVector2D NewSize; // 0x0
    }; // Size: 0x8
    Params_SetIconButtonSize params{};
    params.NewSize = (FVector2D)NewSize;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::I_SetIsNew(bool IsNew) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.I_SetIsNew"));
    struct Params_I_SetIsNew {
        bool IsNew; // 0x0
    }; // Size: 0x1
    Params_I_SetIsNew params{};
    params.IsNew = (bool)IsNew;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetItemQuality(EInventoryQuality Quality) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetItemQuality"));
    struct Params_SetItemQuality {
        EInventoryQuality Quality; // 0x0
    }; // Size: 0x1
    Params_SetItemQuality params{};
    params.Quality = (EInventoryQuality)Quality;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetButtonState(EIconButtonState NewState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetButtonState"));
    struct Params_SetButtonState {
        EIconButtonState NewState; // 0x0
    }; // Size: 0x1
    Params_SetButtonState params{};
    params.NewState = (EIconButtonState)NewState;
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::ErrorAnimation() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.ErrorAnimation"));
    struct Params_ErrorAnimation {
    }; // Size: 0x0
    Params_ErrorAnimation params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_InventoryIconButton_C::SetIsTutorialHighlighted(bool bIsTutorialHighlighted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryIconButton.UI_BP_InventoryIconButton_C.SetIsTutorialHighlighted"));
    struct Params_SetIsTutorialHighlighted {
        bool bIsTutorialHighlighted; // 0x0
    }; // Size: 0x1
    Params_SetIsTutorialHighlighted params{};
    params.bIsTutorialHighlighted = (bool)bIsTutorialHighlighted;
    ProcessEvent(func, &params);
}
