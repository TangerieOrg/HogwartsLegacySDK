#pragma once
#include <cstdint>
#include "EGearSlotIDEnum.hpp"
#include "EInventoryChangeReason.hpp"
#include "FDataTableRowHandle.hpp"
#include "FGearItem.hpp"
#include "FGearItemID.hpp"
#include "FInventoryResult.hpp"
#include "FItemProperties.hpp"
#include "FLegendItemData.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UUI_BP_UnidentifiedGear_TooltipContent_C;
class UObject;
class UUI_BP_LevelRequirement_TooltipContent_C;
class UMenuCursorWidget;
class AActor;
class UExperienceManager;
class UObjectStateInfo;
class UUserWidget;
class UUI_BP_InventoryCreatureToolTipContent_C;
class UUI_BP_GearTooltipContent_C;
class UUI_BP_InventoryIconButton_C;
class UUIManager;
class UPhoenixHUDWidget;
class AHUD;
class ULootDropComponent;
class APlayerController;
class APhoenixHUD;
#pragma pack(push, 1)
class UUI_BP_InventoryFunctionLibrary_C : public UBlueprintFunctionLibrary {
public:
    static UUI_BP_InventoryFunctionLibrary_C* StaticClass();
    static void GetGearItemStats(FGearItemID GearItemID, UObject* __WorldContext, int32_t& OffenseStat, int32_t& DefenseStat, int32_t TempDefenseStat, int32_t TempOffenseStat, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue);
    static void GetRarityColorTag(FName RarityTier, UObject* __WorldContext, FDataTableRowHandle& ColorTag, FDataTableRowHandle TempColorTag, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, bool K2Node_SwitchName_CmpSuccess, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_2, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_3, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_4, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_5);
    static void Get_Inventory_Count(AActor* InActor, UObject* __WorldContext, int32_t& ReturnCount, int32_t InventoryCount, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, int32_t Temp_int_Array_Index_Variable, FName CallFunc_GetDbPersistentId_ReturnValue, TArray<FInventoryResult>& CallFunc_GetInventoryTextBP_InventoryResultArray, FInventoryResult CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1);
    static void GetGearTooltipInfo(FGearItemID GearItemID, UObject* __WorldContext, FString& Title, FString& Description, FString& Quality, FName& Rarity, int32_t& SellPrice, bool& Sellable, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, EGearSlotIDEnum CallFunc_GetSlotIDFromGearID_ReturnValue, FString CallFunc_GearSlotIDToString_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FItemProperties CallFunc_GetItemProperties_ItemProperties, bool CallFunc_GetItemProperties_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2);
    static void BuildDefaultNonExpandContent(FName ItemName, FName Variation, UObject* __WorldContext, UUserWidget*& Content, UExperienceManager* CallFunc_Get_ReturnValue, UUI_BP_LevelRequirement_TooltipContent_C* CallFunc_Create_ReturnValue, int32_t CallFunc_GetExperienceLevel_ReturnValue, UUI_BP_UnidentifiedGear_TooltipContent_C* CallFunc_Create_ReturnValue_1, UUI_BP_LevelRequirement_TooltipContent_C* CallFunc_Create_ReturnValue_2, bool CallFunc_IsGear_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, int32_t CallFunc_GetLevelRequiermentsForItem_outLevel, bool CallFunc_GetLevelRequiermentsForItem_outUsable, FGearItemID K2Node_MakeStruct_GearItemID, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    static void BuildDefaultTooltipContent(FName ItemName, FName Variation, UObject* __WorldContext, UUserWidget*& TooltipContent, UUI_BP_InventoryCreatureToolTipContent_C* CallFunc_Create_ReturnValue, UUI_BP_GearTooltipContent_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsGear_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, FGearItemID K2Node_MakeStruct_GearItemID, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
    static void BuildInventoryTooltip(UUI_BP_InventoryIconButton_C* Button, TArray<FLegendItemData>& Legend, UUserWidget* Content, UUserWidget* NonExpandContent, UObject* __WorldContext, FString Description, FName Rarity, bool TranslateTitle, FString Title, FString QualityString, bool IsAlbino, bool IsMale, FString ItemName, bool CapturedCreature, FInventoryResult InvResult, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_1, UUIManager* CallFunc_Get_ReturnValue, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue);
    static void LootItemsFromActor(AActor* Container, UObject* __WorldContext, UPhoenixHUDWidget* HudReference, FName Name, int32_t Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, ULootDropComponent* CallFunc_GetLootDropComponent_ReturnValue, TArray<FInventoryResult>& CallFunc_GetInventoryInfo_ReturnValue, FInventoryResult CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, FName CallFunc_GetItemInventoryFullString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, FString CallFunc_Conv_NameToString_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IFL_Transfer_to_Inventory_Success);
    static void IFL_Transfer_to_Inventory(FInventoryResult InvResult, UObject* __WorldContext, bool& Success, FName VictimID, FInventoryResult CurInventoryItem, TArray<FInventoryResult> PlayerInventory, bool Stolen, bool Found, FName DestinationHolder, FInventoryResult Container_Inventory_Item, bool CallFunc_TransferItemToPlayerInventoryBP_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue);
    static void CanPerformTransfer(FName FromCharacterID, FName Item, FName ToCharacterID, int32_t howMany, FName FromHolderID, FName ToHolderID, FName Variation, UObject* __WorldContext, bool& CanTransfer, bool RecieverCanRecieve, bool SenderCanSend, int32_t NumRemoved, int32_t CallFunc_CanAddItem_ReturnValue, int32_t CallFunc_GetCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    static void UIUpdateItem(UUserWidget* Button, UObject* __WorldContext);
    static void UpdateInventoryIconFromInventoryResult(UUserWidget* Button, FInventoryResult InventoryItem, float Modifier, UObject* __WorldContext);
    static void Transfer_Item(FName FromCharacterID, FName Item, FName ToCharacterID, int32_t howMany, EInventoryChangeReason Reason, FName FromHolderID, FName ToHolderID, bool SuppressHUDNotification, FName Variation, bool IsUnique, UObject* __WorldContext, bool& Success, int32_t NumRemoved, int32_t Temp_int_Variable, bool CallFunc_CanPerformTransfer_CanTransfer, int32_t CallFunc_AdjustCount_ReturnValue, int32_t CallFunc_AdjustCount_ReturnValue_1, int32_t CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
    static void GetItemCount(FName CharacterID, FName ItemId, FName HolderID, FName Variation, UObject* __WorldContext, int32_t& Count, int32_t CallFunc_GetCount_ReturnValue);
    static void GetMoney(FName CharacterID, UObject* __WorldContext, int32_t& Money, int32_t CallFunc_GetCount_ReturnValue);
    static void GetCharacterInventory(FName CharacterID, FName Category, FName HolderID, bool SkipLockedItems, UObject* __WorldContext, TArray<FInventoryResult>& Inventory, FName Local_CharacterID, FName CategoryName, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue, TArray<FInventoryResult>& CallFunc_GetInventoryTextBP_InventoryResultArray);
}; // Size: 0x28
#pragma pack(pop)
