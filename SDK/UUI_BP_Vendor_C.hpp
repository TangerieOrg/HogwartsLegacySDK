#pragma once
#include <cstdint>
#include "EGenderEnum.hpp"
#include "EInputEvent.hpp"
#include "ENotificationCategory.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FGearItem.hpp"
#include "FGearItemID.hpp"
#include "FInventoryResult.hpp"
#include "FItemProperties.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FObjectHandles.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FUnavailableIconInfo.hpp"
#include "FVector2D.hpp"
#include "FVendorTransactionInfo.hpp"
#include "UScreen.hpp"
class UUI_BP_Sparkels_C;
class UUMGSequencePlayer;
class UWidgetAnimation;
class UCanvasPanel;
class UUI_BP_Legend_Horizontal_Screen_C;
class UPhoenixTextBlock;
class UUI_BP_FG_GearInvTooltip_C;
class UUI_BP_FG_VendorDetails_C;
class UImage;
class UWidgetSwitcher;
class UUI_BP_MoneyBar_C;
class UUI_BP_FG_CategoryNavBarHorizontal_C;
class ABP_BroomPreviewLocator_C;
class UOverlay;
class UVerticalBox;
class APlayerController;
class UButton;
class URetainerBox;
class UUI_BP_BackgroundSmoke_C;
class UUI_BP_InventoryIconButton_C;
class AActor;
class UIconButtonWidget;
class UUI_BP_Vendor_ItemGroup_C;
class UOverlaySlot;
class UVendorManager;
class UUIManager;
class UStatsManager;
class APawn;
class UUserWidget;
class UPanelWidget;
class ABiped_Player;
class UCreatureManager;
class UVerticalBoxSlot;
class UCreatureState;
class UExperienceManager;
class UClass;
class UObject;
#pragma pack(push, 1)
class UUI_BP_Vendor_C : public UScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x370
    UWidgetAnimation* ShowItemDetails; // 0x378
    UWidgetAnimation* FromPreviewMode; // 0x380
    UWidgetAnimation* ToPreviewModeV2; // 0x388
    UWidgetAnimation* ShowComparisonDetails; // 0x390
    UWidgetAnimation* FadeOut_ShopRB; // 0x398
    UWidgetAnimation* Fadeout_Shop; // 0x3a0
    UWidgetAnimation* FadeIn_Shop; // 0x3a8
    UWidgetAnimation* FadeIn_ShopRB; // 0x3b0
    UWidgetAnimation* TriggerErrorMessage; // 0x3b8
    UPhoenixTextBlock* categoryText; // 0x3c0
    UWidgetSwitcher* ContentSwitcher; // 0x3c8
    UUI_BP_FG_GearInvTooltip_C* equippedTooltip; // 0x3d0
    UImage* ErrorIcon; // 0x3d8
    UPhoenixTextBlock* ErrorMessageText; // 0x3e0
    UUI_BP_Sparkels_C* Image_Sparkel; // 0x3e8
    UUI_BP_Sparkels_C* Image_Sparkel_1; // 0x3f0
    UUI_BP_Sparkels_C* Image_Sparkel_2; // 0x3f8
    UUI_BP_FG_VendorDetails_C* itemDetails; // 0x400
    UUI_BP_Legend_Horizontal_Screen_C* Legend; // 0x408
    UCanvasPanel* Menu; // 0x410
    UUI_BP_MoneyBar_C* moneyBar; // 0x418
    UUI_BP_FG_CategoryNavBarHorizontal_C* NavBarHorizontal; // 0x420
    UOverlay* Overlay_Sparkel; // 0x428
    UVerticalBox* PlayerVerticalBox; // 0x430
    UButton* previewButton; // 0x438
    UUI_BP_FG_VendorDetails_C* previewDetails; // 0x440
    URetainerBox* RetainerBox_Shop; // 0x448
    UUI_BP_BackgroundSmoke_C* UI_BP_BackgroundSmoke_Vendor; // 0x450
    UImage* VendorShopIcon; // 0x458
    UPhoenixTextBlock* VendorShopName; // 0x460
    UVerticalBox* VendorVerticalBox; // 0x468
    char pad_470[0x10];
    int32_t icon_stride; // 0x480
    FName TargetVendor; // 0x484
    int32_t Quantity; // 0x48c
    UUI_BP_InventoryIconButton_C* hoveredButton; // 0x490
    bool IsPreviewing; // 0x498
    char pad_499[0x7];
    TArray<FInventoryResult> CumulativeTransferTotals; // 0x4a0
    FString PreviewedGearID; // 0x4b0
    int32_t PageIndex; // 0x4c0
    char pad_4c4[0x24];
    bool SpecialItemsExist; // 0x4e8
    char pad_4e9[0x47];
    bool BuyPageHidden; // 0x530
    char pad_531[0x3];
    float MatRef_FillGlow; // 0x534
    float MatRef_MoveY; // 0x538
    float MatRef_MoveY_Shop; // 0x53c
    float MatRef_MaskLerpAlpha; // 0x540
    float MatRef_MaskGradianAlpha; // 0x544
    FName PreviewedBroomID; // 0x548
    bool IsPreviewingBroom; // 0x550
    char pad_551[0x7];
    TArray<FString> VendorCategories; // 0x558
    bool IsBeastVendor; // 0x568
    char pad_569[0x3];
    float MatRef_blur; // 0x56c
    ABP_BroomPreviewLocator_C* CachedBroomPreviewLocator; // 0x570
    AActor* BroomPreviewActor; // 0x578
    FObjectHandles GearHandles; // 0x580
    TArray<FGearItemID> EquippedGearIDs; // 0x590
    UIconButtonWidget* PressedButton; // 0x5a0
    bool IsGearItem; // 0x5a8
    bool IsGearComparisonShowing; // 0x5a9
    char pad_5aa[0x6];
    TArray<UUI_BP_Vendor_ItemGroup_C*> CachedVendorItemGroups; // 0x5b0
    TArray<UUI_BP_Vendor_ItemGroup_C*> CachedPlayerItemGroups; // 0x5c0
    int32_t HoveredNavBarIndex; // 0x5d0
    bool NotifyOliAugustusVendorOnExit; // 0x5d4
    bool IsSellPage; // 0x5d5
    char pad_5d6[0x2];
    static UUI_BP_Vendor_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_Vendor_6();
    void SequenceEvent__ENTRYPOINTUI_BP_Vendor_5();
    void SequenceEvent__ENTRYPOINTUI_BP_Vendor_4();
    void SequenceEvent__ENTRYPOINTUI_BP_Vendor_3();
    void SequenceEvent__ENTRYPOINTUI_BP_Vendor_2();
    void SequenceEvent__ENTRYPOINTUI_BP_Vendor_1();
    void SequenceEvent__ENTRYPOINTUI_BP_Vendor_0();
    void AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FMargin K2Node_MakeStruct_Margin_2, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_3, FMargin K2Node_MakeStruct_Margin_4, FMargin K2Node_MakeStruct_Margin_5, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_MathExpression_ReturnValue_1, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue);
    void RefreshEquippedGearIDs(TArray<FGearItemID>& CallFunc_GetAllEquippedGearItemIDs_ReturnValue);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t Temp_int_Array_Index_Variable, FString CallFunc_SelectString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FString CallFunc_SelectString_ReturnValue_1, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    void CanPreviewBroom(bool& Result, bool CallFunc_EqualEqual_NameName_ReturnValue);
    void ToggleGearComparison(UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void DoBuySell(FInventoryResult InventoryResult, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void IsEquippedGear(FName GearID, FName GearVariation, bool& Result, FGearItemID K2Node_MakeStruct_GearItemID, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FGearItemID CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_GearItemIDGearItemID_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsGear_ReturnValue);
    void PreloadGear(TArray<FName> GearIDs, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable_1, TArray<FGearItemID>& CallFunc_GetAllEquippedGearItemIDs_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, EGenderEnum CallFunc_GetPlayerGenderRig_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, FObjectHandles CallFunc_PreloadGearIds_ReturnValue, FGearItemID CallFunc_Array_Get_Item, int32_t CallFunc_Array_Add_ReturnValue, TArray<FInventoryResult>& CallFunc_GetCharacterInventory_Inventory, int32_t CallFunc_Array_Length_ReturnValue_1, FInventoryResult CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsGear_ReturnValue);
    void StopBroomModelPreview(bool CallFunc_IsValid_ReturnValue);
    void StartBroomModelPreview(UVendorManager* CallFunc_Get_ReturnValue);
    void ToggleNotificationCategories(bool ShouldPause, TArray<ENotificationCategory> CategoriesToPause, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<ENotificationCategory>& K2Node_MakeArray_Array, ENotificationCategory CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void VO_OnItemPurchasedFailedNoSpace(FString CallFunc_Conv_NameToString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue);
    void VO_OnLeavePreview(FString CallFunc_Conv_NameToString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue);
    void VO_OnGearPreview(FString CallFunc_Conv_NameToString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue);
    void VO_AbortInteraction(bool CallFunc_AnyQueuedConversations_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue);
    void VO_OnItemSold(FString CallFunc_Conv_NameToString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue);
    void VO_OnItemPurchasedFailedNoMoney(FString CallFunc_Conv_NameToString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue);
    void VO_OnItemPurchased(FString CallFunc_Conv_NameToString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue);
    void VO_OnEnterVendor(FString CallFunc_Conv_NameToString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue);
    void Set_Vendor_Sign(FString tempShopName, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FName CallFunc_GetStatName_ReturnValue, UStatsManager* CallFunc_Get_ReturnValue, int32_t CallFunc_ReadStat_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_2, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess, FString CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_NameName_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_3, FString CallFunc_Concat_StrStr_ReturnValue_5, FString CallFunc_Conv_NameToString_ReturnValue_4, FString CallFunc_Concat_StrStr_ReturnValue_6, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_2, bool CallFunc_NotEqual_NameName_ReturnValue);
    void DisplayErrorMessage(FString ErrorMessage, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void RefreshLegend(TArray<FLegendItemData> TempTooltipLegendItems, TArray<FLegendItemData> TempLegendItems, bool CallFunc_CanPreviewBroom_Result, FLegendItemData K2Node_MakeStruct_LegendItemData, int32_t CallFunc_Array_Add_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData_1, int32_t CallFunc_Array_Add_ReturnValue_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, int32_t CallFunc_Array_Add_ReturnValue_2, int32_t CallFunc_Array_Add_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData_4, int32_t CallFunc_Array_Add_ReturnValue_4, FLegendItemData K2Node_MakeStruct_LegendItemData_5, FLegendItemData K2Node_MakeStruct_LegendItemData_6, int32_t CallFunc_Array_Add_ReturnValue_5, int32_t CallFunc_Array_Add_ReturnValue_6, FLegendItemData K2Node_MakeStruct_LegendItemData_7, int32_t CallFunc_Array_Add_ReturnValue_7, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsGear_ReturnValue);
    void ConditionalAutosave(bool CallFunc_AutoSaveGameData_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void ShowNotifications();
    void CategorySwitch(int32_t NewIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, FString CallFunc_SelectString_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_SelectInt_ReturnValue);
    void GoToPage(int32_t PageIndex, bool CallFunc_GoToCategory_CategoryChanged, bool CallFunc_NotEqual_IntInt_ReturnValue);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t NewQuantity, FLegendItemData K2Node_MakeStruct_LegendItemData, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FLegendItemData K2Node_MakeStruct_LegendItemData_1, TArray<FLegendItemData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ByteByte_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_PreviewGear_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, UPanelWidget* CallFunc_GetParent_ReturnValue, UPanelWidget* CallFunc_GetParent_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, UPanelWidget* CallFunc_GetParent_ReturnValue_2, UPanelWidget* CallFunc_GetParent_ReturnValue_3, int32_t CallFunc_Array_LastIndex_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_UpdateGearOutfitItems_ReturnValue, bool CallFunc_CanPreviewBroom_Result, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3);
    void GetItemRarityString(int32_t RarityIndex, FString& Rarity, FString TempQualityString, bool K2Node_SwitchInteger_CmpSuccess);
    void BuyItems(FInventoryResult& InventoryResult, bool& Success, int32_t& TotalCost, bool& FailReasonCost, bool& FailReasonSpace, bool TempHasEnoughSpace, bool TempHasEnoughMoney, int32_t TransactionCost, int32_t ItemCost, int32_t CallFunc_CalculateAdjustedSellBuyCost_AdjustedCost, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_GetCount_ReturnValue, int32_t CallFunc_AdjustCount_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_CanPerformTransfer_CanTransfer, int32_t CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_Transfer_Item_Success);
    void AddToCumulativeTransferTotal(FName Name, FName Variation, int32_t Count, int32_t NewTotal, FInventoryResult K2Node_MakeStruct_InventoryResult, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, FInventoryResult CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void Calculate_VendorBuySellModifier(FInventoryResult& InventoryResult, bool IsBuying, float& CostModifier, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVendorTransactionInfo K2Node_MakeStruct_VendorTransactionInfo, float CallFunc_CalculateVendorPricesModifier_ReturnValue);
    void CalculateAdjustedSellBuyCost(FInventoryResult& InventoryResult, int32_t& AdjustedCost, float Modifier, int32_t ItemValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32_t CallFunc_Multiply_IntInt_ReturnValue, int32_t CallFunc_Divide_IntInt_ReturnValue, bool Temp_bool_Variable, int32_t K2Node_Select_Default, float CallFunc_Multiply_IntFloat_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, float CallFunc_Calculate_VendorBuySellModifier_CostModifier, float CallFunc_Calculate_VendorBuySellModifier_CostModifier_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1);
    void UpdateCost(FInventoryResult InvResult, int32_t PlayerMoney, int32_t AdjustedCost, int32_t CallFunc_CalculateAdjustedSellBuyCost_AdjustedCost, bool CallFunc_EqualEqual_NameName_ReturnValue, int32_t CallFunc_GetMoney_Money);
    void Failed_Buy(UUserWidget* Button, bool FailReasonCost, bool FailReasonSpace, FName ItemName, int32_t CallFunc_PostEventAtLocation_ReturnValue);
    void Icon_Button_Released(UIconButtonWidget* IconButton);
    void Icon_Button_Pressed(UIconButtonWidget* IconButton, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void IconButton_Unhovered(UIconButtonWidget* Button, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
    void IconButton_Clicked(UIconButtonWidget* Button, FInventoryResult InventoryResult, int32_t CallFunc_PostEventAtLocation_ReturnValue);
    void IconButton_Hover(UIconButtonWidget* Button, bool IsBuying, ESlateVisibility Temp_byte_Variable, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, FGearItemID K2Node_MakeStruct_GearItemID, bool CallFunc_IsGear_ReturnValue, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void CreatePlayerItemButton(FInventoryResult InventoryResult, UUI_BP_InventoryIconButton_C*& Button, UUI_BP_InventoryIconButton_C* TempInventoryButton);
    void CreatePlayerItemGroup(FString VendorCategory, TArray<FInventoryResult>& PlayerInventory, bool& Created, UUI_BP_Vendor_ItemGroup_C*& ItemGroup, UUI_BP_Vendor_ItemGroup_C* TempItemGroupWidget, TArray<FInventoryResult> TempPlayerItems, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, FInventoryResult CallFunc_Array_Get_Item, bool CallFunc_IsEquippedGear_Result, FString CallFunc_GetVendorCategoryForItem_VendorCategory, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_Vendor_ItemGroup_C* CallFunc_Create_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, FInventoryResult CallFunc_Array_Get_Item_1, UUI_BP_InventoryIconButton_C* CallFunc_CreatePlayerItemButton_Button);
    void RefreshPlayerInventory(TArray<FInventoryResult> TempPlayerInventory, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, UCreatureManager* CallFunc_Get_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_CreatePlayerItemGroup_Created, UUI_BP_Vendor_ItemGroup_C* CallFunc_CreatePlayerItemGroup_ItemGroup, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, TArray<FInventoryResult>& CallFunc_GetInventoryTextBP_InventoryResultArray, FInventoryResult CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByFName_ReturnValue, bool CallFunc_GetCanReturnToWild_ReturnValue, FString CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_CreatePlayerItemGroup_Created_1, UUI_BP_Vendor_ItemGroup_C* CallFunc_CreatePlayerItemGroup_ItemGroup_1, bool CallFunc_Less_IntInt_ReturnValue_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_2, TArray<FInventoryResult>& CallFunc_GetInventoryTextBP_InventoryResultArray_1);
    void IsPriorityMissionItem(FInventoryResult Item, bool& IsPriority, TArray<FName> SpecialItemIDs, TArray<FName>& K2Node_MakeArray_Array, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
    void GetVendorCategoryForItem(FName ItemName, FName ItemType, FName HolderID, FString& VendorCategory, FString OutCategory, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1);
    void CreateVendorItemButton(FInventoryResult InventoryResult, float Cost_Modifier, bool IsTutorialHighlighted, bool IsAvailable, FUnavailableIconInfo UnavailableInfo, bool SpecialMissionItem, UUI_BP_InventoryIconButton_C*& Button, UUI_BP_InventoryIconButton_C* TempInventoryButton, UExperienceManager* CallFunc_Get_ReturnValue, int32_t CallFunc_GetExperienceLevel_ReturnValue, FGearItemID K2Node_MakeStruct_GearItemID, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, bool CallFunc_IsGear_ReturnValue);
    void CreateVendorItemGroup(FString VendorCategory, TArray<FInventoryResult>& VendorInventory, TArray<FUnavailableIconInfo>& UnavailableInventory, TArray<FName>& TutorialHighlights, bool& Created, UUI_BP_Vendor_ItemGroup_C*& ItemGroup, UUI_BP_Vendor_ItemGroup_C* TempItemGroupWidget, TArray<FUnavailableIconInfo> TempUnavailableItems, TArray<FInventoryResult> TempRegularItems, TArray<FInventoryResult> TempPriorityItems, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_1, FUnavailableIconInfo CallFunc_Array_Get_Item, int32_t CallFunc_Add_IntInt_ReturnValue_1, FItemProperties CallFunc_GetItemProperties_ItemProperties, bool CallFunc_GetItemProperties_ReturnValue, FString CallFunc_GetVendorCategoryForItem_VendorCategory, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable_3, FInventoryResult CallFunc_Array_Get_Item_1, bool CallFunc_IsPriorityMissionItem_IsPriority, FString CallFunc_GetVendorCategoryForItem_VendorCategory_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, FInventoryResult CallFunc_Array_Get_Item_2, FInventoryResult CallFunc_Array_Get_Item_3, UUI_BP_InventoryIconButton_C* CallFunc_CreateVendorItemButton_Button, bool CallFunc_Array_Contains_ReturnValue, UUI_BP_InventoryIconButton_C* CallFunc_CreateVendorItemButton_Button_1, int32_t CallFunc_Array_Length_ReturnValue_3, int32_t CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, int32_t Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_4, int32_t CallFunc_Add_IntInt_ReturnValue_4, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_Vendor_ItemGroup_C* CallFunc_Create_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Greater_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Greater_IntInt_ReturnValue_2, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32_t Temp_int_Array_Index_Variable_4, bool CallFunc_BooleanOR_ReturnValue_1, FUnavailableIconInfo CallFunc_Array_Get_Item_4, UUI_BP_InventoryIconButton_C* CallFunc_CreateVendorItemButton_Button_2, int32_t CallFunc_Array_Add_ReturnValue_1);
    void CreateVendorImportantItemGroup(FString VendorCategory, TArray<FInventoryResult>& VendorInventory, bool& Created, UUI_BP_Vendor_ItemGroup_C*& ItemGroup, UUI_BP_Vendor_ItemGroup_C* TempItemGroupWidget, TArray<FUnavailableIconInfo> TempUnavailableItems, TArray<FInventoryResult> TempRegularItems, TArray<FInventoryResult> TempPriorityItems, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, FInventoryResult CallFunc_Array_Get_Item, bool CallFunc_IsPriorityMissionItem_IsPriority, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_Vendor_ItemGroup_C* CallFunc_Create_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, FInventoryResult CallFunc_Array_Get_Item_1, UUI_BP_InventoryIconButton_C* CallFunc_CreateVendorItemButton_Button);
    void PopulateTutorialHighlights(TArray<FName>& TutorialHighlights, FName Temp_name_Variable, FString CallFunc_GetMissionStepBP_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue);
    void RefreshVendorInventory(TArray<FName> TempTutorialHighlights, TArray<FUnavailableIconInfo> TempVendorUnavailableInventory, TArray<FInventoryResult> TempVendorInventory, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CreateVendorImportantItemGroup_Created, UUI_BP_Vendor_ItemGroup_C* CallFunc_CreateVendorImportantItemGroup_ItemGroup, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, UVendorManager* CallFunc_Get_ReturnValue, TArray<FUnavailableIconInfo>& CallFunc_GetUnavailableVendorItems_ReturnValue, FString CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_CreateVendorItemGroup_Created, UUI_BP_Vendor_ItemGroup_C* CallFunc_CreateVendorItemGroup_ItemGroup, bool CallFunc_Less_IntInt_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_1, TArray<FInventoryResult>& CallFunc_GetCharacterInventory_Inventory);
    void RefreshAllInventories();
    void Finished_05C86C324CC2E3F67B4598AA730580A6();
    void Finished_2A89DBBA44E746A9DCB98DB457DDB514();
    void ShowPreviewDetails();
    void ShowCurrentIndex();
    void BndEvt__UI_BP_Vendor_NavBarHorizontal_K2Node_ComponentBoundEvent_0_HoveredCategory__DelegateSignature(int32_t ButtonIndex, UIconButtonWidget* CategoryButton);
    void Construct();
    void Destruct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_BP_Vendor_NavBarHorizontal_K2Node_ComponentBoundEvent_0_ChangedCategory__DelegateSignature(int32_t NewCategoryIndex);
    void CollapseItemDetails();
    void SequenceEvent_ItemFadeOut();
    void InitVendor();
    void SequenceEvent_SmokeFadeOut();
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void OnOutroEnded(int32_t OutroType);
    void OnIntroEnded(int32_t IntroType);
    void OnVendorBroomPreviewClassLoaded(FName BroomID, UClass* ActorClass);
    void BndEvt__UI_BP_Vendor_itemDetails_K2Node_ComponentBoundEvent_1_OnHoldButtonReleasedEvent__DelegateSignature(bool HoldWasComplete);
    void BndEvt__UI_BP_Vendor_previewDetails_K2Node_ComponentBoundEvent_0_OnHoldButtonReleasedEvent__DelegateSignature(bool HoldWasComplete);
    void BndEvt__UI_BP_Vendor_previewButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void GearTutorialRefreshAllInventories(UObject* Caller);
    void BndEvt__UI_BP_Vendor_previewButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void SequenceEvent_SmokeFadeIn();
    void ExecuteUbergraph_UI_BP_Vendor(int32_t EntryPoint, FName CallFunc_GetStatName_ReturnValue);
    void OnItemPurchaseFailedNoSpace__DelegateSignature();
    void OnItemPurchaseFailedNoMoney__DelegateSignature();
    void OnItemSold__DelegateSignature();
    void OnItemPurchased__DelegateSignature();
    void LeavePreview__DelegateSignature(FString PreviewedGearID);
    void StartPreview__DelegateSignature(FString PreviewedGearID);
    void AbortInteraction__DelegateSignature();
}; // Size: 0x5d8
#pragma pack(pop)
