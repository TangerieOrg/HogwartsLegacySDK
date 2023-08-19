#pragma once
#include <cstdint>
#include "FInventoryResult.hpp"
#include "FLegendItemData.hpp"
#include "UPhoenixUserWidget.hpp"
class UUI_BP_Legend_Horizontal_Tooltip_C;
class UPhoenixTextBlock;
class UCreatureManager;
class ULegendItem;
class UVerticalBox;
class UOverlay;
class UUI_BP_FG_IDP_ItemHeader_C;
class UUI_BP_MoneyBar_C;
class UCreatureState;
class UUI_BP_InventoryIconButton_C;
#pragma pack(push, 1)
class UUI_BP_FG_InventoryDetails_C : public UPhoenixUserWidget {
public:
    UPhoenixTextBlock* beastNotification; // 0x328
    UVerticalBox* beastVivariumNotice; // 0x330
    UVerticalBox* destroyNotification; // 0x338
    UPhoenixTextBlock* destroyText; // 0x340
    UPhoenixTextBlock* detailsDescription; // 0x348
    UOverlay* detailsLegend; // 0x350
    UUI_BP_Legend_Horizontal_Tooltip_C* detailsLegendBar; // 0x358
    UPhoenixTextBlock* emptyInventoryMessage; // 0x360
    UVerticalBox* Item; // 0x368
    UUI_BP_FG_IDP_ItemHeader_C* itemHeader; // 0x370
    UVerticalBox* SellValue; // 0x378
    UUI_BP_MoneyBar_C* SellValue_MoneyBar; // 0x380
    UPhoenixTextBlock* SellValueText; // 0x388
    ULegendItem* LegendHoldItem; // 0x390
    char pad_398[0x10];
    static UUI_BP_FG_InventoryDetails_C* StaticClass();
    void Inventory_Hold_Event_Complete(ULegendItem* LegendItem, bool HoldWasCompleted);
    void SetLegendItemData(TArray<FLegendItemData>& LegendItemArray, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue);
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    void SetSellValue(bool Sellable, int32_t SellPrice);
    void BuildEmptyTooltip(TArray<FName> tempTraitArray, FString Description, FName Rarity, bool TranslateTitle, FString Title, FString QualityString, bool IsCreatureAlbino, bool IsCreatureMale, FString InventoryItemName, bool IsCapturedCreature, FInventoryResult InvResult);
    void ResetTooltip();
    void SetStandardTooltip(FName GearID, FName GearVariation, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    void SetCapturedCreatureInfo(FName GearID, FName Variation, FString TempTitle, FName CallFunc_GetLockName_ReturnValue, bool CallFunc_IsUnlockedPure_ReturnValue, FName CallFunc_GetLockName_ReturnValue_1, bool CallFunc_IsUnlockedPure_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FString CallFunc_GetCreatureDisplayNameFromUIDName_OutName, bool CallFunc_GetCreatureDisplayNameFromUIDName_OutIsLocalizationKey, FString CallFunc_GetCreatureInventoryInfoString_OutInfoString, UCreatureManager* CallFunc_Get_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByFName_ReturnValue, bool CallFunc_GetIsMale_ReturnValue, FName CallFunc_GetTypeID_ReturnValue, bool CallFunc_IsAlbino_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    void Build_Inventory_Tooltip(UUI_BP_InventoryIconButton_C* Button, TArray<FLegendItemData>& ToolTip, TArray<FName> tempTraitArray, FString Description, FName Rarity, bool TranslateTitle, FString Title, FString QualityString, bool IsCreatureAlbino, bool IsCreatureMale, FString InventoryItemName, bool IsCapturedCreature, FInventoryResult InvResult, UCreatureManager* CallFunc_Get_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByFName_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_GetCanReturnToWild_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void LegendHoldItemReleased__DelegateSignature(ULegendItem* InventoryLegendItem, bool HoldWasCompleted);
}; // Size: 0x3a8
#pragma pack(pop)
