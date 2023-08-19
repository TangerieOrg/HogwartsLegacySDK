#pragma once
#include <cstdint>
#include "EGearSlotIDEnum.hpp"
#include "ESlateVisibility.hpp"
#include "FDataTableRowHandle.hpp"
#include "FGearItem.hpp"
#include "FGearItemID.hpp"
#include "FItemProperties.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "GearStatType.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UCanvasPanel;
class UOverlay;
class UHorizontalBox;
class UUI_BP_Legend_Horizontal_Tooltip_C;
class UPhoenixTextBlock;
class UPhoenixImage;
class UVerticalBox;
class UPhoenixRichTextBlock;
class UBorder;
class UUI_BP_GearUpgrades_C;
class UUI_BP_InventoryIconButton_C;
class UUI_BP_FG_IDP_TraitStat_C;
class UUI_BP_GearStat_C;
class UUI_BP_FG_DetailsPanelBack_C;
class UUI_BP_MoneyBar_C;
class AActor;
class ULegendItem;
class UUMGSequencePlayer;
class UIconButtonWidget;
class UUI_BP_GearButton_C;
class UUI_BP_AppearanceIcon_C;
class UGearManager;
#pragma pack(push, 1)
class UUI_BP_FG_GearInvTooltip_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* AppearanceAttractPulse; // 0x330
    UWidgetAnimation* ShowAppearanceAttract; // 0x338
    UOverlay* appearancePulse; // 0x340
    UPhoenixTextBlock* broomUpgradeDesc; // 0x348
    UOverlay* detailsLegend; // 0x350
    UUI_BP_Legend_Horizontal_Tooltip_C* detailsLegendBar; // 0x358
    UVerticalBox* emptyContent; // 0x360
    UPhoenixRichTextBlock* emptyDescription; // 0x368
    UHorizontalBox* equippedTitle; // 0x370
    UPhoenixTextBlock* equippedTitleText; // 0x378
    UVerticalBox* gearContent; // 0x380
    UPhoenixImage* gearHeaderBackLeft; // 0x388
    UPhoenixImage* gearHeaderBackMiddle; // 0x390
    UPhoenixImage* gearHeaderBackRight; // 0x398
    UBorder* GearRarityFlame; // 0x3a0
    UUI_BP_GearUpgrades_C* gearUpgrades; // 0x3a8
    UPhoenixTextBlock* itemDesc; // 0x3b0
    UPhoenixTextBlock* itemTitle; // 0x3b8
    UUI_BP_FG_IDP_TraitStat_C* itemTraits; // 0x3c0
    UPhoenixTextBlock* ItemType; // 0x3c8
    UUI_BP_GearStat_C* mainStat; // 0x3d0
    UPhoenixTextBlock* NoMagicMessage; // 0x3d8
    UUI_BP_FG_DetailsPanelBack_C* panelBack; // 0x3e0
    UPhoenixImage* rarityHeaderBack; // 0x3e8
    UBorder* rarityHeaderBackBorder; // 0x3f0
    UPhoenixTextBlock* RequiredLevel; // 0x3f8
    UCanvasPanel* requiredLevelShield; // 0x400
    UVerticalBox* SellValue; // 0x408
    UUI_BP_MoneyBar_C* SellValue_MoneyBar; // 0x410
    UPhoenixTextBlock* SellValueText; // 0x418
    UVerticalBox* SimpleContent; // 0x420
    UPhoenixTextBlock* simpleDescription; // 0x428
    UPhoenixTextBlock* simpleSubTitle; // 0x430
    UPhoenixTextBlock* simpleTitle; // 0x438
    UOverlay* Stats; // 0x440
    UHorizontalBox* statsBox; // 0x448
    UUI_BP_GearStat_C* upgradeStat; // 0x450
    FName subjectRarity; // 0x458
    AActor* UpgradeBlipArray; // 0x460
    int32_t EquippedRequiredLevel; // 0x468
    char pad_46c[0x4];
    ULegendItem* LegendHoldItem; // 0x470
    char pad_478[0x10];
    FGearItemID EquippedGearItemID; // 0x488
    char pad_49c[0x4];
    static UUI_BP_FG_GearInvTooltip_C* StaticClass();
    void ResetAppearanceFX();
    void Set_Appearance_FXVisibility(ESlateVisibility ShowFX, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void UpdateWandTooltip(FName ToolType, UIconButtonWidget* Button, bool Temp_bool_Variable, UUI_BP_GearButton_C* K2Node_DynamicCast_AsUI_BP_Gear_Button, bool K2Node_DynamicCast_bSuccess, ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default, FString CallFunc_Conv_NameToString_ReturnValue);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
    void Update_Appearance_Tooltip(UUI_BP_AppearanceIcon_C* Button, bool IsEquipped, EGearSlotIDEnum tempGearSlot, TArray<FName> tempTraitArray, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default, FName CallFunc_UpdateGearSharedInfo_GearID);
    void SetLegendItemData(TArray<FLegendItemData>& LegendItemData, ESlateVisibility Temp_byte_Variable, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable);
    void SetEquippedItemData(EGearSlotIDEnum GearSlot, FGearItemID CallFunc_GetEquippedGearItemID_ReturnValue);
    void Update_Unidentified_Info(EGearSlotIDEnum GearSlotID);
    void UpdateAppearanceInfo(bool CallFunc_SetRarity_ShowRarityGraphics);
    void UpdateGearSharedInfo(FGearItemID GearItemID, bool IsAppearance, FName& GearID, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_GetGearTooltipInfo_Title, FString CallFunc_GetGearTooltipInfo_Description, FString CallFunc_GetGearTooltipInfo_Quality, FName CallFunc_GetGearTooltipInfo_Rarity, int32_t CallFunc_GetGearTooltipInfo_SellPrice, bool CallFunc_GetGearTooltipInfo_Sellable);
    void UpdateGearUpgrades(FGearItemID CurrentGearItem, FName ItemRarity, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, int32_t CallFunc_GetNumOfStatUpgradeForGearItem_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
    void UpdateMainToolTooltip(FName ToolType, UIconButtonWidget* Button, ESlateVisibility Temp_byte_Variable, UUI_BP_GearButton_C* K2Node_DynamicCast_AsUI_BP_Gear_Button, bool K2Node_DynamicCast_bSuccess, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_NameName_ReturnValue_2);
    void SetSellValue(bool Sellable, int32_t SellPrice);
    void UpdateEmptyTooltip(FString EmptyMessage);
    void Compare_Stats_to_Equipped(EGearSlotIDEnum hoveredGearSlot, int32_t TempSecondaryValue, int32_t TempMainValue, GearStatType TempSecondarySlot, GearStatType TempMainSlot, GearStatType CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue, GearStatType CallFunc_DefineGearStatTypeFromSlot_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1);
    void SetTraitData(TArray<FName>& TraitData, FGearItemID GearItemID, TArray<FName> tempTraitArray, FName CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, UGearManager* CallFunc_Get_ReturnValue, int32_t CallFunc_GetTotalAvailableTriats_TotalAvailableTraits, int32_t CallFunc_GetGearEmptyTraitSlots_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void UpdateTraits(FName NewTraitID, int32_t EmptySlotCount, TArray<FName>& K2Node_MakeArray_Array);
    void Update_Simple_Tooltip(FString WandStyle, FString CallFunc_Concat_StrStr_ReturnValue);
    void SetRequiredLevel(int32_t ItemLevel, FName ItemRarity, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle);
    void UpdateEquippedTooltip(EGearSlotIDEnum EquippedSlot, bool TempSellable, int32_t TempSellPrice, FString TempDescription, TArray<FName> tempTraitArray, FName TempRarity, FString TempTitle, FGearItemID CallFunc_GetEquippedGearItemID_ReturnValue, FString CallFunc_GetGearTooltipInfo_Title, FString CallFunc_GetGearTooltipInfo_Description, FString CallFunc_GetGearTooltipInfo_Quality, FName CallFunc_GetGearTooltipInfo_Rarity, int32_t CallFunc_GetGearTooltipInfo_SellPrice, bool CallFunc_GetGearTooltipInfo_Sellable, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, FGearItem CallFunc_GetGearItem_OutGearItem_1, bool CallFunc_GetGearItem_ReturnValue_1, bool CallFunc_SetRarity_ShowRarityGraphics);
    void UpdateStatTooltip(FString statTitle, FString CallFunc_Concat_StrStr_ReturnValue);
    void Update_Tool_Tooltip(FName ToolType, UIconButtonWidget* Button, bool Temp_bool_Variable, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess, ESlateVisibility Temp_byte_Variable, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_SetInventoryIconOverride_OutDisplayName, FString CallFunc_SetInventoryIconOverride_OutIconName, bool CallFunc_SetInventoryIconOverride_OutIsNameTranslatable, bool CallFunc_SetInventoryIconOverride_ReturnValue, ESlateVisibility Temp_byte_Variable_1, FString CallFunc_Concat_StrStr_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_NameName_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1);
    void SetStats(EGearSlotIDEnum GearSlot, int32_t Offense, int32_t Defense, bool isUnidentified, FName ItemRarity, GearStatType TempSecondarySlotID, GearStatType TempMainSlotID, int32_t TempCooldown, int32_t TempDeffense, int32_t TempOffense, GearStatType CallFunc_DefineGearStatTypeFromSlot_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, GearStatType CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue);
    void SetRarity(FName Rarity, bool& ShowRarityGraphics, ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, FDataTableRowHandle CallFunc_GetRarityColorTag_ColorTag, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, FDataTableRowHandle CallFunc_GetRarityColorTag_ColorTag_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
    void Update_Gear_Tooltip(UUI_BP_GearButton_C* Button, bool IsAppearanceInventory, bool IsEquipped, EGearSlotIDEnum tempGearSlot, TArray<FName> tempTraitArray, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_SetRarity_ShowRarityGraphics, FItemProperties CallFunc_GetItemProperties_ItemProperties, bool CallFunc_GetItemProperties_ReturnValue, FGearItem CallFunc_GetGearItem_OutGearItem_1, bool CallFunc_GetGearItem_ReturnValue_1, FName CallFunc_UpdateGearSharedInfo_GearID, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void HoldReleased(ULegendItem* LegendItem, bool HoldWasCompleted);
    void PlayPanelAnimation();
    void ExecuteUbergraph_UI_BP_FG_GearInvTooltip(int32_t EntryPoint, ULegendItem* K2Node_CustomEvent_LegendItem, bool K2Node_CustomEvent_HoldWasCompleted, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void LegendHoldItemReleased__DelegateSignature(ULegendItem* LegendItem, bool HoldWasCompleted);
}; // Size: 0x4a0
#pragma pack(pop)
