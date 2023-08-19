#pragma once
#include <cstdint>
#include "EIconButtonState.hpp"
#include "EInventoryQuality.hpp"
#include "ESlateVisibility.hpp"
#include "FInventoryResult.hpp"
#include "FItemProperties.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRarityColors.hpp"
#include "FSlateColor.hpp"
#include "FVector2D.hpp"
#include "UIconButtonWidget.hpp"
class UWidgetAnimation;
class UPhoenixImage;
class USizeBox;
class UScaleBox;
class UImage;
class UUserWidget;
class UPhoenixTextBlock;
class UUI_BP_NewIndicator_C;
class UUIManager;
class UUMGSequencePlayer;
struct FPointerEvent;
class UDragDropOperation;
#pragma pack(push, 1)
class UUI_BP_InventoryIconButton_C : public UIconButtonWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x4a8
    UWidgetAnimation* IconStateNormal; // 0x4b0
    UWidgetAnimation* ResetHover; // 0x4b8
    UWidgetAnimation* FadeInandOut; // 0x4c0
    UWidgetAnimation* IconStateQuestItem; // 0x4c8
    UWidgetAnimation* IconStateTutorial; // 0x4d0
    UWidgetAnimation* PurchaseAnimation; // 0x4d8
    UWidgetAnimation* ShowSelected; // 0x4e0
    UWidgetAnimation* OnHoverAnimation; // 0x4e8
    UWidgetAnimation* Error; // 0x4f0
    UPhoenixImage* AmountFram; // 0x4f8
    UImage* disabledImage; // 0x500
    UImage* Fresnel; // 0x508
    UPhoenixImage* IconStateQuest; // 0x510
    UScaleBox* inventoryConent; // 0x518
    UPhoenixTextBlock* ItemCountNumber; // 0x520
    UUI_BP_NewIndicator_C* NEW; // 0x528
    UImage* Outline; // 0x530
    UImage* QuestShin; // 0x538
    UImage* rarityBack_old; // 0x540
    USizeBox* SizeBox_Content; // 0x548
    UImage* TempReqNotMetShadow; // 0x550
    UImage* TraitIndicator; // 0x558
    EInventoryQuality ItemQuality; // 0x560
    char pad_561[0x3];
    int32_t ItemCost; // 0x564
    int32_t ModifiedCost; // 0x568
    int32_t Quantity; // 0x56c
    UUserWidget* ParentWidget; // 0x570
    UUserWidget* NewButtonHighlight; // 0x578
    ESlateVisibility HighlightVisibility; // 0x580
    char pad_581[0x17];
    bool IsButtonSelected; // 0x598
    char pad_599[0x7];
    FInventoryResult InventoryResult; // 0x5a0
    FName ItemVariation; // 0x628
    bool pressedhere; // 0x630
    char pad_631[0x3];
    FLinearColor OutlineColor; // 0x634
    bool isEmptyButton; // 0x644
    char pad_645[0x3];
    FName ItemRarity; // 0x648
    FString outlineIcon; // 0x650
    FString highlightIcon; // 0x660
    bool Clickable; // 0x670
    char pad_671[0x3];
    FName ItemId; // 0x674
    char pad_67c[0x14];
    static UUI_BP_InventoryIconButton_C* StaticClass();
    void I_GetIsEmpty(bool& isButtonEmpty);
    void I_GetItemRarity(FName& Rarity);
    void GetItemVariation(FName& Variation);
    void I_GetItemCount(int32_t& ItemCount);
    void GetModifiedCost(int32_t& ModifiedCost);
    void GetInventoryResult(FInventoryResult& InventoryResult);
    void GetItemCost(int32_t& Cost);
    void GetIconName(FString& IconName, FString CallFunc_Conv_NameToString_ReturnValue);
    void GetItemQuality(EInventoryQuality& Quality);
    void CheckItemID(FString NewID, FString& NewItemID, FString TempID, UUIManager* CallFunc_Get_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    void UpdateHolderID(FName NewHolderID);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
    void Play_Purchase_Animation(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Set_TraitIndicator(bool Item_Have_Trait, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void Set_Is_New_Item(bool Index);
    void PlaySelectedAnimation();
    void Dim(FSlateColor K2Node_MakeStruct_SlateColor);
    void SetButtonEmpty(bool IsEmpty, FString Item);
    void SetRarityState(FName RarityTier, FRarityColors CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, FLinearColor CallFunc_GetColorByRowHandleBP_ReturnValue);
    void SetIsCurrentSelection(bool IsCurrent);
    void SetIsSelected(bool IsSelected, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
    bool SetButtonIcons(FString BackgroundImage, bool CallFunc_NotEqual_StrStr_ReturnValue);
    bool HandleMissing();
    bool HandleNonExistent();
    bool HandleDisabled(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    bool HandleEnabled();
    void SetTurnInCount(int32_t CurrentCount, int32_t NeededCount, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor_1);
    void SetCountVisibleHandler(int32_t ItemCount, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void InitItemButton(FInventoryResult InventoryItem, float Modifier, FString ImageName, bool CallFunc_NotEqual_StrStr_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, FItemProperties CallFunc_GetItemProperties_ItemProperties, bool CallFunc_GetItemProperties_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_SetInventoryIconOverride_OutDisplayName, FString CallFunc_SetInventoryIconOverride_OutIconName, bool CallFunc_SetInventoryIconOverride_OutIsNameTranslatable, bool CallFunc_SetInventoryIconOverride_ReturnValue, FString CallFunc_CheckItemID_NewItemID);
    void SetItemCost(int32_t Cost, int32_t ModifiedCost);
    void SetItemCountHandler(int32_t ItemCount, bool Temp_bool_Variable);
    void Finished_3766CA3448CB5F6A18115FB0C3017A79();
    void SetItemCount(int32_t ItemCount);
    void SetCountVisible(bool ShowCount);
    void SetIconButtonEnabled();
    void SetIconButtonMissing();
    void SetIconButtonNonExistant();
    void SetIconButtonDisabled();
    void SetParent(UUserWidget* Parent);
    void SetModifiedCost(int32_t ModifiedCost);
    void SetInventoryResult(FInventoryResult InventoryResult);
    void I_SetTurninCount(int32_t CurrentCount, int32_t NeededCount);
    void SetIconButtonState(EIconButtonState NewState);
    void I_SetIsQuestItem(bool isQuestItem);
    void SetIconButtonSize(FVector2D NewSize);
    void I_SetIsNew(bool IsNew);
    void InitializeItemButton(FInventoryResult Inventory_Item, float Modifier);
    void SetItemQuality(EInventoryQuality Quality);
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void HighlightButton(bool isHighlighted);
    void SetButtonState(EIconButtonState NewState);
    void ErrorAnimation();
    void OnDragCancelled(FPointerEvent& PointerEvent, UDragDropOperation* Operation);
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void SetIsNew(bool bIsNew);
    void SetIsTutorialHighlighted(bool bIsTutorialHighlighted);
    void SetLevelReqMet(bool LevelMet);
    void I_Play_Purchase_Animation();
    void ExecuteUbergraph_UI_BP_InventoryIconButton(int32_t EntryPoint, ESlateVisibility Temp_byte_Variable, bool CallFunc_IsAnimationPlaying_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2);
    void PurchasedAnimationFinished__DelegateSignature();
    void OnDropComplete__DelegateSignature(UUI_BP_InventoryIconButton_C* Held, UUI_BP_InventoryIconButton_C* Container);
}; // Size: 0x690
#pragma pack(pop)
