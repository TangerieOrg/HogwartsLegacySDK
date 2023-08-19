#include "AActor.hpp"
#include "AHUD.hpp"
#include "APhoenixHUD.hpp"
#include "APlayerController.hpp"
#include "EGearSlotIDEnum.hpp"
#include "EInventoryChangeReason.hpp"
#include "FDataTableRowHandle.hpp"
#include "FGearItem.hpp"
#include "FGearItemID.hpp"
#include "FInventoryResult.hpp"
#include "FItemProperties.hpp"
#include "FLegendItemData.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UExperienceManager.hpp"
#include "UFunction.hpp"
#include "ULootDropComponent.hpp"
#include "UMenuCursorWidget.hpp"
#include "UObject.hpp"
#include "UObjectStateInfo.hpp"
#include "UPhoenixHUDWidget.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_GearTooltipContent_C.hpp"
#include "UUI_BP_InventoryCreatureToolTipContent_C.hpp"
#include "UUI_BP_InventoryFunctionLibrary_C.hpp"
#include "UUI_BP_InventoryIconButton_C.hpp"
#include "UUI_BP_LevelRequirement_TooltipContent_C.hpp"
#include "UUI_BP_UnidentifiedGear_TooltipContent_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_InventoryFunctionLibrary_C* UUI_BP_InventoryFunctionLibrary_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryFunctionLibrary.UI_BP_InventoryFunctionLibrary_C");
    return (UUI_BP_InventoryFunctionLibrary_C*)res;
}
void UUI_BP_InventoryFunctionLibrary_C::BuildDefaultTooltipContent(FName ItemName, FName Variation, UObject* __WorldContext, UUserWidget*& TooltipContent, UUI_BP_InventoryCreatureToolTipContent_C* CallFunc_Create_ReturnValue, UUI_BP_GearTooltipContent_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsGear_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, FGearItemID K2Node_MakeStruct_GearItemID, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryFunctionLibrary.UI_BP_InventoryFunctionLibrary_C.BuildDefaultTooltipContent"));
    struct Params_BuildDefaultTooltipContent {
        FName ItemName; // 0x0
        FName Variation; // 0x8
        UObject* __WorldContext; // 0x10
        UUserWidget* TooltipContent; // 0x18
        UUI_BP_InventoryCreatureToolTipContent_C* CallFunc_Create_ReturnValue; // 0x20
        UUI_BP_GearTooltipContent_C* CallFunc_Create_ReturnValue_1; // 0x28
        bool CallFunc_IsGear_ReturnValue; // 0x30
        char pad_31[0x7];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x38
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x48
        char pad_49[0x7];
        FString CallFunc_Conv_NameToString_ReturnValue_1; // 0x50
        FGearItemID K2Node_MakeStruct_GearItemID; // 0x60
        char pad_74[0x4];
        FGearItem CallFunc_GetGearItem_OutGearItem; // 0x78
        bool CallFunc_GetGearItem_ReturnValue; // 0xd0
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0xd1
    }; // Size: 0xd2
    Params_BuildDefaultTooltipContent params{};
    params.ItemName = (FName)ItemName;
    params.Variation = (FName)Variation;
    params.__WorldContext = (UObject*)__WorldContext;
    params.TooltipContent = (UUserWidget*)TooltipContent;
    params.CallFunc_Create_ReturnValue = (UUI_BP_InventoryCreatureToolTipContent_C*)CallFunc_Create_ReturnValue;
    params.CallFunc_Create_ReturnValue_1 = (UUI_BP_GearTooltipContent_C*)CallFunc_Create_ReturnValue_1;
    params.CallFunc_IsGear_ReturnValue = (bool)CallFunc_IsGear_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue_1 = (FString)CallFunc_Conv_NameToString_ReturnValue_1;
    params.K2Node_MakeStruct_GearItemID = (FGearItemID)K2Node_MakeStruct_GearItemID;
    params.CallFunc_GetGearItem_OutGearItem = (FGearItem)CallFunc_GetGearItem_OutGearItem;
    params.CallFunc_GetGearItem_ReturnValue = (bool)CallFunc_GetGearItem_ReturnValue;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TooltipContent = params.TooltipContent;
}
void UUI_BP_InventoryFunctionLibrary_C::GetCharacterInventory(FName CharacterID, FName Category, FName HolderID, bool SkipLockedItems, UObject* __WorldContext, TArray<FInventoryResult>& Inventory, FName Local_CharacterID, FName CategoryName, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue, TArray<FInventoryResult>& CallFunc_GetInventoryTextBP_InventoryResultArray) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryFunctionLibrary.UI_BP_InventoryFunctionLibrary_C.GetCharacterInventory"));
    struct Params_GetCharacterInventory {
        FName CharacterID; // 0x0
        FName Category; // 0x8
        FName HolderID; // 0x10
        bool SkipLockedItems; // 0x18
        char pad_19[0x7];
        UObject* __WorldContext; // 0x20
        TArray<FInventoryResult> Inventory; // 0x28
        FName Local_CharacterID; // 0x38
        FName CategoryName; // 0x40
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x48
        bool CallFunc_EqualEqual_NameName_ReturnValue_1; // 0x49
        char pad_4a[0x2];
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x4c
        char pad_54[0x4];
        TArray<FInventoryResult> CallFunc_GetInventoryTextBP_InventoryResultArray; // 0x58
    }; // Size: 0x68
    Params_GetCharacterInventory params{};
    params.CharacterID = (FName)CharacterID;
    params.Category = (FName)Category;
    params.HolderID = (FName)HolderID;
    params.SkipLockedItems = (bool)SkipLockedItems;
    params.__WorldContext = (UObject*)__WorldContext;
    params.Inventory = (TArray<FInventoryResult>)Inventory;
    params.Local_CharacterID = (FName)Local_CharacterID;
    params.CategoryName = (FName)CategoryName;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue_1 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_1;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_GetInventoryTextBP_InventoryResultArray = (TArray<FInventoryResult>)CallFunc_GetInventoryTextBP_InventoryResultArray;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CallFunc_GetInventoryTextBP_InventoryResultArray = params.CallFunc_GetInventoryTextBP_InventoryResultArray;
    Inventory = params.Inventory;
}
void UUI_BP_InventoryFunctionLibrary_C::GetGearItemStats(FGearItemID GearItemID, UObject* __WorldContext, int32_t& OffenseStat, int32_t& DefenseStat, int32_t TempDefenseStat, int32_t TempOffenseStat, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryFunctionLibrary.UI_BP_InventoryFunctionLibrary_C.GetGearItemStats"));
    struct Params_GetGearItemStats {
        FGearItemID GearItemID; // 0x0
        char pad_14[0x4];
        UObject* __WorldContext; // 0x18
        int32_t OffenseStat; // 0x20
        int32_t DefenseStat; // 0x24
        int32_t TempDefenseStat; // 0x28
        int32_t TempOffenseStat; // 0x2c
        FGearItem CallFunc_GetGearItem_OutGearItem; // 0x30
        bool CallFunc_GetGearItem_ReturnValue; // 0x88
    }; // Size: 0x89
    Params_GetGearItemStats params{};
    params.GearItemID = (FGearItemID)GearItemID;
    params.__WorldContext = (UObject*)__WorldContext;
    params.OffenseStat = (int32_t)OffenseStat;
    params.DefenseStat = (int32_t)DefenseStat;
    params.TempDefenseStat = (int32_t)TempDefenseStat;
    params.TempOffenseStat = (int32_t)TempOffenseStat;
    params.CallFunc_GetGearItem_OutGearItem = (FGearItem)CallFunc_GetGearItem_OutGearItem;
    params.CallFunc_GetGearItem_ReturnValue = (bool)CallFunc_GetGearItem_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OffenseStat = params.OffenseStat;
    DefenseStat = params.DefenseStat;
}
void UUI_BP_InventoryFunctionLibrary_C::GetRarityColorTag(FName RarityTier, UObject* __WorldContext, FDataTableRowHandle& ColorTag, FDataTableRowHandle TempColorTag, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, bool K2Node_SwitchName_CmpSuccess, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_2, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_3, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_4, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_5) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryFunctionLibrary.UI_BP_InventoryFunctionLibrary_C.GetRarityColorTag"));
    struct Params_GetRarityColorTag {
        FName RarityTier; // 0x0
        UObject* __WorldContext; // 0x8
        FDataTableRowHandle ColorTag; // 0x10
        FDataTableRowHandle TempColorTag; // 0x20
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle; // 0x30
        bool K2Node_SwitchName_CmpSuccess; // 0x40
        char pad_41[0x7];
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1; // 0x48
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_2; // 0x58
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_3; // 0x68
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_4; // 0x78
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_5; // 0x88
    }; // Size: 0x98
    Params_GetRarityColorTag params{};
    params.RarityTier = (FName)RarityTier;
    params.__WorldContext = (UObject*)__WorldContext;
    params.ColorTag = (FDataTableRowHandle)ColorTag;
    params.TempColorTag = (FDataTableRowHandle)TempColorTag;
    params.K2Node_MakeStruct_DataTableRowHandle = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle;
    params.K2Node_SwitchName_CmpSuccess = (bool)K2Node_SwitchName_CmpSuccess;
    params.K2Node_MakeStruct_DataTableRowHandle_1 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_1;
    params.K2Node_MakeStruct_DataTableRowHandle_2 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_2;
    params.K2Node_MakeStruct_DataTableRowHandle_3 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_3;
    params.K2Node_MakeStruct_DataTableRowHandle_4 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_4;
    params.K2Node_MakeStruct_DataTableRowHandle_5 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_5;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ColorTag = params.ColorTag;
}
void UUI_BP_InventoryFunctionLibrary_C::Get_Inventory_Count(AActor* InActor, UObject* __WorldContext, int32_t& ReturnCount, int32_t InventoryCount, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, int32_t Temp_int_Array_Index_Variable, FName CallFunc_GetDbPersistentId_ReturnValue, TArray<FInventoryResult>& CallFunc_GetInventoryTextBP_InventoryResultArray, FInventoryResult CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryFunctionLibrary.UI_BP_InventoryFunctionLibrary_C.Get Inventory Count"));
    struct Params_Get_Inventory_Count {
        AActor* InActor; // 0x0
        UObject* __WorldContext; // 0x8
        int32_t ReturnCount; // 0x10
        int32_t InventoryCount; // 0x14
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x18
        int32_t Temp_int_Array_Index_Variable; // 0x20
        FName CallFunc_GetDbPersistentId_ReturnValue; // 0x24
        char pad_2c[0x4];
        TArray<FInventoryResult> CallFunc_GetInventoryTextBP_InventoryResultArray; // 0x30
        FInventoryResult CallFunc_Array_Get_Item; // 0x40
        int32_t CallFunc_Array_Length_ReturnValue; // 0xc8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xcc
        int32_t Temp_int_Loop_Counter_Variable; // 0xd0
        bool CallFunc_Less_IntInt_ReturnValue; // 0xd4
        char pad_d5[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0xd8
    }; // Size: 0xdc
    Params_Get_Inventory_Count params{};
    params.InActor = (AActor*)InActor;
    params.__WorldContext = (UObject*)__WorldContext;
    params.ReturnCount = (int32_t)ReturnCount;
    params.InventoryCount = (int32_t)InventoryCount;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_GetDbPersistentId_ReturnValue = (FName)CallFunc_GetDbPersistentId_ReturnValue;
    params.CallFunc_GetInventoryTextBP_InventoryResultArray = (TArray<FInventoryResult>)CallFunc_GetInventoryTextBP_InventoryResultArray;
    params.CallFunc_Array_Get_Item = (FInventoryResult)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ReturnCount = params.ReturnCount;
    CallFunc_GetInventoryTextBP_InventoryResultArray = params.CallFunc_GetInventoryTextBP_InventoryResultArray;
}
void UUI_BP_InventoryFunctionLibrary_C::GetGearTooltipInfo(FGearItemID GearItemID, UObject* __WorldContext, FString& Title, FString& Description, FString& Quality, FName& Rarity, int32_t& SellPrice, bool& Sellable, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, EGearSlotIDEnum CallFunc_GetSlotIDFromGearID_ReturnValue, FString CallFunc_GearSlotIDToString_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FItemProperties CallFunc_GetItemProperties_ItemProperties, bool CallFunc_GetItemProperties_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryFunctionLibrary.UI_BP_InventoryFunctionLibrary_C.GetGearTooltipInfo"));
    struct Params_GetGearTooltipInfo {
        FGearItemID GearItemID; // 0x0
        char pad_14[0x4];
        UObject* __WorldContext; // 0x18
        FString Title; // 0x20
        FString Description; // 0x30
        FString Quality; // 0x40
        FName Rarity; // 0x50
        int32_t SellPrice; // 0x58
        bool Sellable; // 0x5c
        char pad_5d[0x3];
        FGearItem CallFunc_GetGearItem_OutGearItem; // 0x60
        bool CallFunc_GetGearItem_ReturnValue; // 0xb8
        EGearSlotIDEnum CallFunc_GetSlotIDFromGearID_ReturnValue; // 0xb9
        char pad_ba[0x6];
        FString CallFunc_GearSlotIDToString_ReturnValue; // 0xc0
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0xd0
        char pad_d1[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0xd8
        FItemProperties CallFunc_GetItemProperties_ItemProperties; // 0xe8
        bool CallFunc_GetItemProperties_ReturnValue; // 0x154
        char pad_155[0x3];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x158
        FString CallFunc_Conv_NameToString_ReturnValue_1; // 0x168
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x178
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x188
    }; // Size: 0x198
    Params_GetGearTooltipInfo params{};
    params.GearItemID = (FGearItemID)GearItemID;
    params.__WorldContext = (UObject*)__WorldContext;
    params.Title = (FString)Title;
    params.Description = (FString)Description;
    params.Quality = (FString)Quality;
    params.Rarity = (FName)Rarity;
    params.SellPrice = (int32_t)SellPrice;
    params.Sellable = (bool)Sellable;
    params.CallFunc_GetGearItem_OutGearItem = (FGearItem)CallFunc_GetGearItem_OutGearItem;
    params.CallFunc_GetGearItem_ReturnValue = (bool)CallFunc_GetGearItem_ReturnValue;
    params.CallFunc_GetSlotIDFromGearID_ReturnValue = (EGearSlotIDEnum)CallFunc_GetSlotIDFromGearID_ReturnValue;
    params.CallFunc_GearSlotIDToString_ReturnValue = (FString)CallFunc_GearSlotIDToString_ReturnValue;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_GetItemProperties_ItemProperties = (FItemProperties)CallFunc_GetItemProperties_ItemProperties;
    params.CallFunc_GetItemProperties_ReturnValue = (bool)CallFunc_GetItemProperties_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue_1 = (FString)CallFunc_Conv_NameToString_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Quality = params.Quality;
    Title = params.Title;
    Description = params.Description;
    Rarity = params.Rarity;
    SellPrice = params.SellPrice;
    Sellable = params.Sellable;
}
void UUI_BP_InventoryFunctionLibrary_C::BuildDefaultNonExpandContent(FName ItemName, FName Variation, UObject* __WorldContext, UUserWidget*& Content, UExperienceManager* CallFunc_Get_ReturnValue, UUI_BP_LevelRequirement_TooltipContent_C* CallFunc_Create_ReturnValue, int32_t CallFunc_GetExperienceLevel_ReturnValue, UUI_BP_UnidentifiedGear_TooltipContent_C* CallFunc_Create_ReturnValue_1, UUI_BP_LevelRequirement_TooltipContent_C* CallFunc_Create_ReturnValue_2, bool CallFunc_IsGear_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, int32_t CallFunc_GetLevelRequiermentsForItem_outLevel, bool CallFunc_GetLevelRequiermentsForItem_outUsable, FGearItemID K2Node_MakeStruct_GearItemID, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryFunctionLibrary.UI_BP_InventoryFunctionLibrary_C.BuildDefaultNonExpandContent"));
    struct Params_BuildDefaultNonExpandContent {
        FName ItemName; // 0x0
        FName Variation; // 0x8
        UObject* __WorldContext; // 0x10
        UUserWidget* Content; // 0x18
        UExperienceManager* CallFunc_Get_ReturnValue; // 0x20
        UUI_BP_LevelRequirement_TooltipContent_C* CallFunc_Create_ReturnValue; // 0x28
        int32_t CallFunc_GetExperienceLevel_ReturnValue; // 0x30
        char pad_34[0x4];
        UUI_BP_UnidentifiedGear_TooltipContent_C* CallFunc_Create_ReturnValue_1; // 0x38
        UUI_BP_LevelRequirement_TooltipContent_C* CallFunc_Create_ReturnValue_2; // 0x40
        bool CallFunc_IsGear_ReturnValue; // 0x48
        char pad_49[0x7];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x50
        int32_t CallFunc_GetLevelRequiermentsForItem_outLevel; // 0x60
        bool CallFunc_GetLevelRequiermentsForItem_outUsable; // 0x64
        char pad_65[0x3];
        FGearItemID K2Node_MakeStruct_GearItemID; // 0x68
        char pad_7c[0x4];
        FGearItem CallFunc_GetGearItem_OutGearItem; // 0x80
        bool CallFunc_GetGearItem_ReturnValue; // 0xd8
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0xd9
        bool CallFunc_GreaterEqual_IntInt_ReturnValue; // 0xda
    }; // Size: 0xdb
    Params_BuildDefaultNonExpandContent params{};
    params.ItemName = (FName)ItemName;
    params.Variation = (FName)Variation;
    params.__WorldContext = (UObject*)__WorldContext;
    params.Content = (UUserWidget*)Content;
    params.CallFunc_Get_ReturnValue = (UExperienceManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_Create_ReturnValue = (UUI_BP_LevelRequirement_TooltipContent_C*)CallFunc_Create_ReturnValue;
    params.CallFunc_GetExperienceLevel_ReturnValue = (int32_t)CallFunc_GetExperienceLevel_ReturnValue;
    params.CallFunc_Create_ReturnValue_1 = (UUI_BP_UnidentifiedGear_TooltipContent_C*)CallFunc_Create_ReturnValue_1;
    params.CallFunc_Create_ReturnValue_2 = (UUI_BP_LevelRequirement_TooltipContent_C*)CallFunc_Create_ReturnValue_2;
    params.CallFunc_IsGear_ReturnValue = (bool)CallFunc_IsGear_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_GetLevelRequiermentsForItem_outLevel = (int32_t)CallFunc_GetLevelRequiermentsForItem_outLevel;
    params.CallFunc_GetLevelRequiermentsForItem_outUsable = (bool)CallFunc_GetLevelRequiermentsForItem_outUsable;
    params.K2Node_MakeStruct_GearItemID = (FGearItemID)K2Node_MakeStruct_GearItemID;
    params.CallFunc_GetGearItem_OutGearItem = (FGearItem)CallFunc_GetGearItem_OutGearItem;
    params.CallFunc_GetGearItem_ReturnValue = (bool)CallFunc_GetGearItem_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_GreaterEqual_IntInt_ReturnValue = (bool)CallFunc_GreaterEqual_IntInt_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Content = params.Content;
}
void UUI_BP_InventoryFunctionLibrary_C::GetItemCount(FName CharacterID, FName ItemId, FName HolderID, FName Variation, UObject* __WorldContext, int32_t& Count, int32_t CallFunc_GetCount_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryFunctionLibrary.UI_BP_InventoryFunctionLibrary_C.GetItemCount"));
    struct Params_GetItemCount {
        FName CharacterID; // 0x0
        FName ItemId; // 0x8
        FName HolderID; // 0x10
        FName Variation; // 0x18
        UObject* __WorldContext; // 0x20
        int32_t Count; // 0x28
        int32_t CallFunc_GetCount_ReturnValue; // 0x2c
    }; // Size: 0x30
    Params_GetItemCount params{};
    params.CharacterID = (FName)CharacterID;
    params.ItemId = (FName)ItemId;
    params.HolderID = (FName)HolderID;
    params.Variation = (FName)Variation;
    params.__WorldContext = (UObject*)__WorldContext;
    params.Count = (int32_t)Count;
    params.CallFunc_GetCount_ReturnValue = (int32_t)CallFunc_GetCount_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Count = params.Count;
}
void UUI_BP_InventoryFunctionLibrary_C::BuildInventoryTooltip(UUI_BP_InventoryIconButton_C* Button, TArray<FLegendItemData>& Legend, UUserWidget* Content, UUserWidget* NonExpandContent, UObject* __WorldContext, FString Description, FName Rarity, bool TranslateTitle, FString Title, FString QualityString, bool IsAlbino, bool IsMale, FString ItemName, bool CapturedCreature, FInventoryResult InvResult, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_1, UUIManager* CallFunc_Get_ReturnValue, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue) {}
void UUI_BP_InventoryFunctionLibrary_C::LootItemsFromActor(AActor* Container, UObject* __WorldContext, UPhoenixHUDWidget* HudReference, FName Name, int32_t Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, ULootDropComponent* CallFunc_GetLootDropComponent_ReturnValue, TArray<FInventoryResult>& CallFunc_GetInventoryInfo_ReturnValue, FInventoryResult CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, FName CallFunc_GetItemInventoryFullString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, FString CallFunc_Conv_NameToString_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IFL_Transfer_to_Inventory_Success) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryFunctionLibrary.UI_BP_InventoryFunctionLibrary_C.LootItemsFromActor"));
    struct Params_LootItemsFromActor {
        AActor* Container; // 0x0
        UObject* __WorldContext; // 0x8
        UPhoenixHUDWidget* HudReference; // 0x10
        FName Name; // 0x18
        int32_t Temp_int_Array_Index_Variable; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x24
        char pad_25[0x3];
        ULootDropComponent* CallFunc_GetLootDropComponent_ReturnValue; // 0x28
        TArray<FInventoryResult> CallFunc_GetInventoryInfo_ReturnValue; // 0x30
        FInventoryResult CallFunc_Array_Get_Item; // 0x40
        int32_t CallFunc_Array_Length_ReturnValue; // 0xc8
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0xcc
        char pad_cd[0x3];
        FName CallFunc_GetItemInventoryFullString_ReturnValue; // 0xd0
        FString CallFunc_Conv_NameToString_ReturnValue; // 0xd8
        FString CallFunc_Conv_NameToString_ReturnValue_1; // 0xe8
        FString CallFunc_Conv_NameToString_ReturnValue_2; // 0xf8
        bool CallFunc_IsValid_ReturnValue_1; // 0x108
        char pad_109[0x3];
        int32_t Temp_int_Loop_Counter_Variable; // 0x10c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x110
        char pad_111[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x114
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x118
        AHUD* CallFunc_GetHUD_ReturnValue; // 0x120
        APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD; // 0x128
        bool K2Node_DynamicCast_bSuccess; // 0x130
        bool CallFunc_IFL_Transfer_to_Inventory_Success; // 0x131
    }; // Size: 0x132
    Params_LootItemsFromActor params{};
    params.Container = (AActor*)Container;
    params.__WorldContext = (UObject*)__WorldContext;
    params.HudReference = (UPhoenixHUDWidget*)HudReference;
    params.Name = (FName)Name;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetLootDropComponent_ReturnValue = (ULootDropComponent*)CallFunc_GetLootDropComponent_ReturnValue;
    params.CallFunc_GetInventoryInfo_ReturnValue = (TArray<FInventoryResult>)CallFunc_GetInventoryInfo_ReturnValue;
    params.CallFunc_Array_Get_Item = (FInventoryResult)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_GetItemInventoryFullString_ReturnValue = (FName)CallFunc_GetItemInventoryFullString_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue_1 = (FString)CallFunc_Conv_NameToString_ReturnValue_1;
    params.CallFunc_Conv_NameToString_ReturnValue_2 = (FString)CallFunc_Conv_NameToString_ReturnValue_2;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_GetHUD_ReturnValue = (AHUD*)CallFunc_GetHUD_ReturnValue;
    params.K2Node_DynamicCast_AsPhoenix_HUD = (APhoenixHUD*)K2Node_DynamicCast_AsPhoenix_HUD;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_IFL_Transfer_to_Inventory_Success = (bool)CallFunc_IFL_Transfer_to_Inventory_Success;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CallFunc_GetInventoryInfo_ReturnValue = params.CallFunc_GetInventoryInfo_ReturnValue;
}
void UUI_BP_InventoryFunctionLibrary_C::IFL_Transfer_to_Inventory(FInventoryResult InvResult, UObject* __WorldContext, bool& Success, FName VictimID, FInventoryResult CurInventoryItem, TArray<FInventoryResult> PlayerInventory, bool Stolen, bool Found, FName DestinationHolder, FInventoryResult Container_Inventory_Item, bool CallFunc_TransferItemToPlayerInventoryBP_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryFunctionLibrary.UI_BP_InventoryFunctionLibrary_C.IFL Transfer to Inventory"));
    struct Params_IFL_Transfer_to_Inventory {
        FInventoryResult InvResult; // 0x0
        UObject* __WorldContext; // 0x88
        bool Success; // 0x90
        char pad_91[0x3];
        FName VictimID; // 0x94
        char pad_9c[0x4];
        FInventoryResult CurInventoryItem; // 0xa0
        TArray<FInventoryResult> PlayerInventory; // 0x128
        bool Stolen; // 0x138
        bool Found; // 0x139
        char pad_13a[0x2];
        FName DestinationHolder; // 0x13c
        char pad_144[0x4];
        FInventoryResult Container_Inventory_Item; // 0x148
        bool CallFunc_TransferItemToPlayerInventoryBP_ReturnValue; // 0x1d0
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x1d1
    }; // Size: 0x1d2
    Params_IFL_Transfer_to_Inventory params{};
    params.InvResult = (FInventoryResult)InvResult;
    params.__WorldContext = (UObject*)__WorldContext;
    params.Success = (bool)Success;
    params.VictimID = (FName)VictimID;
    params.CurInventoryItem = (FInventoryResult)CurInventoryItem;
    params.PlayerInventory = (TArray<FInventoryResult>)PlayerInventory;
    params.Stolen = (bool)Stolen;
    params.Found = (bool)Found;
    params.DestinationHolder = (FName)DestinationHolder;
    params.Container_Inventory_Item = (FInventoryResult)Container_Inventory_Item;
    params.CallFunc_TransferItemToPlayerInventoryBP_ReturnValue = (bool)CallFunc_TransferItemToPlayerInventoryBP_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Success = params.Success;
}
void UUI_BP_InventoryFunctionLibrary_C::CanPerformTransfer(FName FromCharacterID, FName Item, FName ToCharacterID, int32_t howMany, FName FromHolderID, FName ToHolderID, FName Variation, UObject* __WorldContext, bool& CanTransfer, bool RecieverCanRecieve, bool SenderCanSend, int32_t NumRemoved, int32_t CallFunc_CanAddItem_ReturnValue, int32_t CallFunc_GetCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryFunctionLibrary.UI_BP_InventoryFunctionLibrary_C.CanPerformTransfer"));
    struct Params_CanPerformTransfer {
        FName FromCharacterID; // 0x0
        FName Item; // 0x8
        FName ToCharacterID; // 0x10
        int32_t howMany; // 0x18
        FName FromHolderID; // 0x1c
        FName ToHolderID; // 0x24
        FName Variation; // 0x2c
        char pad_34[0x4];
        UObject* __WorldContext; // 0x38
        bool CanTransfer; // 0x40
        bool RecieverCanRecieve; // 0x41
        bool SenderCanSend; // 0x42
        char pad_43[0x1];
        int32_t NumRemoved; // 0x44
        int32_t CallFunc_CanAddItem_ReturnValue; // 0x48
        int32_t CallFunc_GetCount_ReturnValue; // 0x4c
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x50
        bool CallFunc_BooleanAND_ReturnValue; // 0x51
        bool CallFunc_GreaterEqual_IntInt_ReturnValue; // 0x52
    }; // Size: 0x53
    Params_CanPerformTransfer params{};
    params.FromCharacterID = (FName)FromCharacterID;
    params.Item = (FName)Item;
    params.ToCharacterID = (FName)ToCharacterID;
    params.howMany = (int32_t)howMany;
    params.FromHolderID = (FName)FromHolderID;
    params.ToHolderID = (FName)ToHolderID;
    params.Variation = (FName)Variation;
    params.__WorldContext = (UObject*)__WorldContext;
    params.CanTransfer = (bool)CanTransfer;
    params.RecieverCanRecieve = (bool)RecieverCanRecieve;
    params.SenderCanSend = (bool)SenderCanSend;
    params.NumRemoved = (int32_t)NumRemoved;
    params.CallFunc_CanAddItem_ReturnValue = (int32_t)CallFunc_CanAddItem_ReturnValue;
    params.CallFunc_GetCount_ReturnValue = (int32_t)CallFunc_GetCount_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_GreaterEqual_IntInt_ReturnValue = (bool)CallFunc_GreaterEqual_IntInt_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CanTransfer = params.CanTransfer;
}
void UUI_BP_InventoryFunctionLibrary_C::UIUpdateItem(UUserWidget* Button, UObject* __WorldContext) {}
void UUI_BP_InventoryFunctionLibrary_C::UpdateInventoryIconFromInventoryResult(UUserWidget* Button, FInventoryResult InventoryItem, float Modifier, UObject* __WorldContext) {}
void UUI_BP_InventoryFunctionLibrary_C::Transfer_Item(FName FromCharacterID, FName Item, FName ToCharacterID, int32_t howMany, EInventoryChangeReason Reason, FName FromHolderID, FName ToHolderID, bool SuppressHUDNotification, FName Variation, bool IsUnique, UObject* __WorldContext, bool& Success, int32_t NumRemoved, int32_t Temp_int_Variable, bool CallFunc_CanPerformTransfer_CanTransfer, int32_t CallFunc_AdjustCount_ReturnValue, int32_t CallFunc_AdjustCount_ReturnValue_1, int32_t CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryFunctionLibrary.UI_BP_InventoryFunctionLibrary_C.Transfer Item"));
    struct Params_Transfer_Item {
        FName FromCharacterID; // 0x0
        FName Item; // 0x8
        FName ToCharacterID; // 0x10
        int32_t howMany; // 0x18
        EInventoryChangeReason Reason; // 0x1c
        char pad_1d[0x3];
        FName FromHolderID; // 0x20
        FName ToHolderID; // 0x28
        bool SuppressHUDNotification; // 0x30
        char pad_31[0x3];
        FName Variation; // 0x34
        bool IsUnique; // 0x3c
        char pad_3d[0x3];
        UObject* __WorldContext; // 0x40
        bool Success; // 0x48
        char pad_49[0x3];
        int32_t NumRemoved; // 0x4c
        int32_t Temp_int_Variable; // 0x50
        bool CallFunc_CanPerformTransfer_CanTransfer; // 0x54
        char pad_55[0x3];
        int32_t CallFunc_AdjustCount_ReturnValue; // 0x58
        int32_t CallFunc_AdjustCount_ReturnValue_1; // 0x5c
        int32_t CallFunc_Multiply_IntInt_ReturnValue; // 0x60
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x64
    }; // Size: 0x65
    Params_Transfer_Item params{};
    params.FromCharacterID = (FName)FromCharacterID;
    params.Item = (FName)Item;
    params.ToCharacterID = (FName)ToCharacterID;
    params.howMany = (int32_t)howMany;
    params.Reason = (EInventoryChangeReason)Reason;
    params.FromHolderID = (FName)FromHolderID;
    params.ToHolderID = (FName)ToHolderID;
    params.SuppressHUDNotification = (bool)SuppressHUDNotification;
    params.Variation = (FName)Variation;
    params.IsUnique = (bool)IsUnique;
    params.__WorldContext = (UObject*)__WorldContext;
    params.Success = (bool)Success;
    params.NumRemoved = (int32_t)NumRemoved;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_CanPerformTransfer_CanTransfer = (bool)CallFunc_CanPerformTransfer_CanTransfer;
    params.CallFunc_AdjustCount_ReturnValue = (int32_t)CallFunc_AdjustCount_ReturnValue;
    params.CallFunc_AdjustCount_ReturnValue_1 = (int32_t)CallFunc_AdjustCount_ReturnValue_1;
    params.CallFunc_Multiply_IntInt_ReturnValue = (int32_t)CallFunc_Multiply_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Success = params.Success;
}
void UUI_BP_InventoryFunctionLibrary_C::GetMoney(FName CharacterID, UObject* __WorldContext, int32_t& Money, int32_t CallFunc_GetCount_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_InventoryFunctionLibrary.UI_BP_InventoryFunctionLibrary_C.GetMoney"));
    struct Params_GetMoney {
        FName CharacterID; // 0x0
        UObject* __WorldContext; // 0x8
        int32_t Money; // 0x10
        int32_t CallFunc_GetCount_ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetMoney params{};
    params.CharacterID = (FName)CharacterID;
    params.__WorldContext = (UObject*)__WorldContext;
    params.Money = (int32_t)Money;
    params.CallFunc_GetCount_ReturnValue = (int32_t)CallFunc_GetCount_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Money = params.Money;
}
