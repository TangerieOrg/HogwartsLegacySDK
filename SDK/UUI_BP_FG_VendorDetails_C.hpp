#pragma once
#include <cstdint>
#include "EGearSlotIDEnum.hpp"
#include "ESlateVisibility.hpp"
#include "FDataTableRowHandle.hpp"
#include "FGearItem.hpp"
#include "FGearItemID.hpp"
#include "FInventoryResult.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "GearStatType.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UCanvasPanel;
class UImage;
class UUI_BP_FG_IDP_TraitStat_C;
class UVerticalBox;
class UUI_BP_Legend_Horizontal_Tooltip_C;
class UPhoenixTextBlock;
class UOverlay;
class UUI_BP_FG_IDP_GearHeader_C;
class UUI_BP_GearUpgrades_C;
class UUI_BP_InventoryIconButton_C;
class UUI_BP_FG_VDP_ItemValue_C;
class UUI_BP_GearStat_C;
class UBorder;
class UUI_BP_FG_DetailsPanelBack_C;
class UHorizontalBox;
class UCreatureState;
class ULegendItem;
class UGearManager;
class UUMGSequencePlayer;
class UTexture2D;
class UCreatureManager;
class UExperienceManager;
#pragma pack(push, 1)
class UUI_BP_FG_VendorDetails_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* Appear; // 0x330
    UImage* AlbinoIcon; // 0x338
    UVerticalBox* destroyNotification; // 0x340
    UPhoenixTextBlock* destroyText; // 0x348
    UPhoenixTextBlock* detailsDescription; // 0x350
    UOverlay* detailsLegend; // 0x358
    UUI_BP_Legend_Horizontal_Tooltip_C* detailsLegendBar; // 0x360
    UVerticalBox* gearContent; // 0x368
    UPhoenixTextBlock* GearDeleteMessage; // 0x370
    UPhoenixTextBlock* gearDesc; // 0x378
    UUI_BP_FG_IDP_GearHeader_C* gearHeader; // 0x380
    UUI_BP_FG_IDP_TraitStat_C* GearTraits; // 0x388
    UUI_BP_GearUpgrades_C* gearUpgrades; // 0x390
    UImage* GenderIcon; // 0x398
    UVerticalBox* itemContent; // 0x3a0
    UPhoenixTextBlock* itemRequiredLevel; // 0x3a8
    UCanvasPanel* itemRequiredLevelShield; // 0x3b0
    UPhoenixTextBlock* itemTitle; // 0x3b8
    UUI_BP_FG_VDP_ItemValue_C* ItemValue; // 0x3c0
    UUI_BP_GearStat_C* mainStat; // 0x3c8
    UPhoenixTextBlock* NoMagicMessage; // 0x3d0
    UBorder* OutOfStock; // 0x3d8
    UPhoenixTextBlock* OutOfStockLabel; // 0x3e0
    UUI_BP_FG_DetailsPanelBack_C* panelBack; // 0x3e8
    UPhoenixTextBlock* RequiredLevel; // 0x3f0
    UCanvasPanel* requiredLevelShield; // 0x3f8
    UVerticalBox* SellValue; // 0x400
    UPhoenixTextBlock* SellValueText; // 0x408
    UOverlay* Stats; // 0x410
    UHorizontalBox* statsBox; // 0x418
    UUI_BP_GearStat_C* upgradeStat; // 0x420
    char pad_428[0x10];
    ULegendItem* LegendHoldItem; // 0x438
    char pad_440[0x10];
    FName ObjectRarity; // 0x450
    bool IsAlbino; // 0x458
    bool IsMale; // 0x459
    char pad_45a[0x6];
    static UUI_BP_FG_VendorDetails_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2);
    void Compare_Stats_to_Equipped(EGearSlotIDEnum EquippedSlot, int32_t TempSecondaryValue, int32_t TempMainValue, FGearItem TempGearItem, GearStatType TempSecondaryStat, GearStatType TempMainStat, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, GearStatType CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue, GearStatType CallFunc_DefineGearStatTypeFromSlot_ReturnValue, UGearManager* CallFunc_Get_ReturnValue, FGearItemID CallFunc_GetEquippedGearItemID_ReturnValue, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue);
    void SetTooltipLegend(TArray<FLegendItemData>& LegendItemArray, bool UseHold, int32_t HoldIndex, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue);
    void SetGearUpgrades(FGearItemID GearItemID, FName ItemRarity, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, int32_t CallFunc_GetNumOfStatUpgradeForGearItem_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
    void SetRequiredGearLevel(int32_t ItemLevel, FName ItemRarity, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle);
    void SetUnidentifiedInfo(EGearSlotIDEnum GearSlot);
    void SetGearStats(EGearSlotIDEnum GearSlot, int32_t Offense, int32_t Defense, bool isUnidentified, FName ItemRarity, GearStatType TempSecondarySlotID, GearStatType TempMainSlotID, GearStatType CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue, GearStatType CallFunc_DefineGearStatTypeFromSlot_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue);
    void PlayVendorDetailsDisAppearAnim(float CallFunc_PauseAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void PlayVendorDetailsAppearAnim(bool Temp_bool_Variable, float CallFunc_PauseAnimation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetLevel(int32_t Level, bool Usable, bool Temp_bool_Variable);
    void ResetTooltip();
    void SetStandardTooltip(FName GearID, FName GearVariation, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, int32_t CallFunc_GetLevelRequiermentsForItem_outLevel, bool CallFunc_GetLevelRequiermentsForItem_outUsable);
    void SetCapturedCreatureInfo(FName GearID, FName Variation, FString tempDesc, FName TempTypeID, FString TempTitle, UTexture2D* Temp_object_Variable, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, ESlateVisibility K2Node_Select_Default, UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable_1, UTexture2D* K2Node_Select_Default_1, UCreatureManager* CallFunc_Get_ReturnValue, FString CallFunc_GetCreatureDisplayNameFromUIDName_OutName, bool CallFunc_GetCreatureDisplayNameFromUIDName_OutIsLocalizationKey, UCreatureState* CallFunc_BP_GetCreatureStateByFName_ReturnValue, FName CallFunc_GetTypeID_ReturnValue, bool CallFunc_IsAlbino_ReturnValue, bool CallFunc_GetIsMale_ReturnValue);
    void SetGearLevelRequirement(FName GearID, FName GearVariation, UExperienceManager* CallFunc_Get_ReturnValue, FGearItemID K2Node_MakeStruct_GearItemID, int32_t CallFunc_GetExperienceLevel_ReturnValue, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void SetGearDeleteMessage(FName GearID, FName GearVariation, bool DisplayIfSafeToDelete);
    void SetGearTraits(TArray<FName>& GearAbilityArray, FGearItemID GearItemID, int32_t emptyTraitCount, TArray<FName> tempTraitArray, int32_t CallFunc_GetGearEmptyTraitSlots_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, int32_t CallFunc_GetTotalAvailableTriats_TotalAvailableTraits, UGearManager* CallFunc_Get_ReturnValue, FName CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetGearInfo(FGearItemID GearItemID, TArray<FName> TempGearTraitArray, FName TempRarity, FGearItem TempGearItem, FString CallFunc_GetGearTooltipInfo_Title, FString CallFunc_GetGearTooltipInfo_Description, FString CallFunc_GetGearTooltipInfo_Quality, FName CallFunc_GetGearTooltipInfo_Rarity, int32_t CallFunc_GetGearTooltipInfo_SellPrice, bool CallFunc_GetGearTooltipInfo_Sellable, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_SetHeaderData_ShowRarityGraphics);
    void BuildItemTooltip(UUI_BP_InventoryIconButton_C* Button, TArray<FName> tempTraitArray, FString Description, FName Rarity, bool TranslateTitle, FString Title, FString QualityString, bool IsCreatureAlbino, bool IsCreatureMale, FString InventoryItemName, bool IsCapturedCreature, FInventoryResult InvResult, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_IsGear_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, FString CallFunc_SelectString_ReturnValue, FGearItemID K2Node_MakeStruct_GearItemID);
    void Finished_C5DEB46F48574714135D02ADCD8BFB31();
    void PlayVendorDetailsDisAppearAnimm();
    void PlayVendorDetailsAppearAnimm();
    void DetailsHoldButtonReleased(ULegendItem* LegendItem, bool HoldWasCompleted);
    void ExecuteUbergraph_UI_BP_FG_VendorDetails(int32_t EntryPoint, ULegendItem* K2Node_CustomEvent_LegendItem, bool K2Node_CustomEvent_HoldWasCompleted);
    void OnHoldButtonReleasedEvent__DelegateSignature(bool HoldWasComplete);
    void VendorDetailCollapseDistpatch__DelegateSignature();
}; // Size: 0x460
#pragma pack(pop)
