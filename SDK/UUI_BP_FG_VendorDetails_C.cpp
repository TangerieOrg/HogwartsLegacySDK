#include "EGearSlotIDEnum.hpp"
#include "ESlateVisibility.hpp"
#include "FDataTableRowHandle.hpp"
#include "FGearItem.hpp"
#include "FGearItemID.hpp"
#include "FInventoryResult.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "GearStatType.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UCreatureManager.hpp"
#include "UCreatureState.hpp"
#include "UExperienceManager.hpp"
#include "UFunction.hpp"
#include "UGearManager.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "ULegendItem.hpp"
#include "UOverlay.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_FG_DetailsPanelBack_C.hpp"
#include "UUI_BP_FG_IDP_GearHeader_C.hpp"
#include "UUI_BP_FG_IDP_TraitStat_C.hpp"
#include "UUI_BP_FG_VDP_ItemValue_C.hpp"
#include "UUI_BP_FG_VendorDetails_C.hpp"
#include "UUI_BP_GearStat_C.hpp"
#include "UUI_BP_GearUpgrades_C.hpp"
#include "UUI_BP_InventoryIconButton_C.hpp"
#include "UUI_BP_Legend_Horizontal_Tooltip_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_FG_VendorDetails_C::SetUnidentifiedInfo(EGearSlotIDEnum GearSlot) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetUnidentifiedInfo"));
    struct Params_SetUnidentifiedInfo {
        EGearSlotIDEnum GearSlot; // 0x0
    }; // Size: 0x1
    Params_SetUnidentifiedInfo params{};
    params.GearSlot = (EGearSlotIDEnum)GearSlot;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VendorDetails_C::Compare_Stats_to_Equipped(EGearSlotIDEnum EquippedSlot, int32_t TempSecondaryValue, int32_t TempMainValue, FGearItem TempGearItem, GearStatType TempSecondaryStat, GearStatType TempMainStat, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, GearStatType CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue, GearStatType CallFunc_DefineGearStatTypeFromSlot_ReturnValue, UGearManager* CallFunc_Get_ReturnValue, FGearItemID CallFunc_GetEquippedGearItemID_ReturnValue, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.Compare Stats to Equipped"));
    struct Params_Compare_Stats_to_Equipped {
        EGearSlotIDEnum EquippedSlot; // 0x0
        char pad_1[0x3];
        int32_t TempSecondaryValue; // 0x4
        int32_t TempMainValue; // 0x8
        char pad_c[0x4];
        FGearItem TempGearItem; // 0x10
        GearStatType TempSecondaryStat; // 0x68
        GearStatType TempMainStat; // 0x69
        bool K2Node_SwitchEnum_CmpSuccess; // 0x6a
        bool K2Node_SwitchEnum_CmpSuccess_1; // 0x6b
        GearStatType CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue; // 0x6c
        GearStatType CallFunc_DefineGearStatTypeFromSlot_ReturnValue; // 0x6d
        char pad_6e[0x2];
        UGearManager* CallFunc_Get_ReturnValue; // 0x70
        FGearItemID CallFunc_GetEquippedGearItemID_ReturnValue; // 0x78
        char pad_8c[0x4];
        FGearItem CallFunc_GetGearItem_OutGearItem; // 0x90
        bool CallFunc_GetGearItem_ReturnValue; // 0xe8
    }; // Size: 0xe9
    Params_Compare_Stats_to_Equipped params{};
    params.EquippedSlot = (EGearSlotIDEnum)EquippedSlot;
    params.TempSecondaryValue = (int32_t)TempSecondaryValue;
    params.TempMainValue = (int32_t)TempMainValue;
    params.TempGearItem = (FGearItem)TempGearItem;
    params.TempSecondaryStat = (GearStatType)TempSecondaryStat;
    params.TempMainStat = (GearStatType)TempMainStat;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.K2Node_SwitchEnum_CmpSuccess_1 = (bool)K2Node_SwitchEnum_CmpSuccess_1;
    params.CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue = (GearStatType)CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue;
    params.CallFunc_DefineGearStatTypeFromSlot_ReturnValue = (GearStatType)CallFunc_DefineGearStatTypeFromSlot_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UGearManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetEquippedGearItemID_ReturnValue = (FGearItemID)CallFunc_GetEquippedGearItemID_ReturnValue;
    params.CallFunc_GetGearItem_OutGearItem = (FGearItem)CallFunc_GetGearItem_OutGearItem;
    params.CallFunc_GetGearItem_ReturnValue = (bool)CallFunc_GetGearItem_ReturnValue;
    ProcessEvent(func, &params);
}
UUI_BP_FG_VendorDetails_C* UUI_BP_FG_VendorDetails_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C");
    return (UUI_BP_FG_VendorDetails_C*)res;
}
void UUI_BP_FG_VendorDetails_C::SetTooltipLegend(TArray<FLegendItemData>& LegendItemArray, bool UseHold, int32_t HoldIndex, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue) {}
TArray<FString> UUI_BP_FG_VendorDetails_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2) {}
void UUI_BP_FG_VendorDetails_C::PlayVendorDetailsAppearAnimm() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.PlayVendorDetailsAppearAnimm"));
    struct Params_PlayVendorDetailsAppearAnimm {
    }; // Size: 0x0
    Params_PlayVendorDetailsAppearAnimm params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VendorDetails_C::SetGearStats(EGearSlotIDEnum GearSlot, int32_t Offense, int32_t Defense, bool isUnidentified, FName ItemRarity, GearStatType TempSecondarySlotID, GearStatType TempMainSlotID, GearStatType CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue, GearStatType CallFunc_DefineGearStatTypeFromSlot_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetGearStats"));
    struct Params_SetGearStats {
        EGearSlotIDEnum GearSlot; // 0x0
        char pad_1[0x3];
        int32_t Offense; // 0x4
        int32_t Defense; // 0x8
        bool isUnidentified; // 0xc
        char pad_d[0x3];
        FName ItemRarity; // 0x10
        GearStatType TempSecondarySlotID; // 0x18
        GearStatType TempMainSlotID; // 0x19
        GearStatType CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue; // 0x1a
        GearStatType CallFunc_DefineGearStatTypeFromSlot_ReturnValue; // 0x1b
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_SetGearStats params{};
    params.GearSlot = (EGearSlotIDEnum)GearSlot;
    params.Offense = (int32_t)Offense;
    params.Defense = (int32_t)Defense;
    params.isUnidentified = (bool)isUnidentified;
    params.ItemRarity = (FName)ItemRarity;
    params.TempSecondarySlotID = (GearStatType)TempSecondarySlotID;
    params.TempMainSlotID = (GearStatType)TempMainSlotID;
    params.CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue = (GearStatType)CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue;
    params.CallFunc_DefineGearStatTypeFromSlot_ReturnValue = (GearStatType)CallFunc_DefineGearStatTypeFromSlot_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VendorDetails_C::SetGearUpgrades(FGearItemID GearItemID, FName ItemRarity, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, int32_t CallFunc_GetNumOfStatUpgradeForGearItem_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetGearUpgrades"));
    struct Params_SetGearUpgrades {
        FGearItemID GearItemID; // 0x0
        FName ItemRarity; // 0x14
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x1c
        bool CallFunc_EqualEqual_NameName_ReturnValue_1; // 0x1d
        bool CallFunc_EqualEqual_NameName_ReturnValue_2; // 0x1e
        bool CallFunc_EqualEqual_NameName_ReturnValue_3; // 0x1f
        int32_t CallFunc_GetNumOfStatUpgradeForGearItem_ReturnValue; // 0x20
        bool CallFunc_BooleanOR_ReturnValue; // 0x24
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x25
        bool CallFunc_BooleanOR_ReturnValue_2; // 0x26
    }; // Size: 0x27
    Params_SetGearUpgrades params{};
    params.GearItemID = (FGearItemID)GearItemID;
    params.ItemRarity = (FName)ItemRarity;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue_1 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_1;
    params.CallFunc_EqualEqual_NameName_ReturnValue_2 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_2;
    params.CallFunc_EqualEqual_NameName_ReturnValue_3 = (bool)CallFunc_EqualEqual_NameName_ReturnValue_3;
    params.CallFunc_GetNumOfStatUpgradeForGearItem_ReturnValue = (int32_t)CallFunc_GetNumOfStatUpgradeForGearItem_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VendorDetails_C::SetRequiredGearLevel(int32_t ItemLevel, FName ItemRarity, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle) {}
void UUI_BP_FG_VendorDetails_C::PlayVendorDetailsDisAppearAnim(float CallFunc_PauseAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.PlayVendorDetailsDisAppearAnim"));
    struct Params_PlayVendorDetailsDisAppearAnim {
        float CallFunc_PauseAnimation_ReturnValue; // 0x0
        char pad_4[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_PlayVendorDetailsDisAppearAnim params{};
    params.CallFunc_PauseAnimation_ReturnValue = (float)CallFunc_PauseAnimation_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VendorDetails_C::PlayVendorDetailsAppearAnim(bool Temp_bool_Variable, float CallFunc_PauseAnimation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.PlayVendorDetailsAppearAnim"));
    struct Params_PlayVendorDetailsAppearAnim {
        bool Temp_bool_Variable; // 0x0
        char pad_1[0x3];
        float CallFunc_PauseAnimation_ReturnValue; // 0x4
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x8
        char pad_9[0x3];
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0xc
        float K2Node_Select_Default; // 0x10
        char pad_14[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_PlayVendorDetailsAppearAnim params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_PauseAnimation_ReturnValue = (float)CallFunc_PauseAnimation_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.K2Node_Select_Default = (float)K2Node_Select_Default;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VendorDetails_C::SetLevel(int32_t Level, bool Usable, bool Temp_bool_Variable) {}
void UUI_BP_FG_VendorDetails_C::ExecuteUbergraph_UI_BP_FG_VendorDetails(int32_t EntryPoint, ULegendItem* K2Node_CustomEvent_LegendItem, bool K2Node_CustomEvent_HoldWasCompleted) {}
void UUI_BP_FG_VendorDetails_C::ResetTooltip() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.ResetTooltip"));
    struct Params_ResetTooltip {
    }; // Size: 0x0
    Params_ResetTooltip params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VendorDetails_C::SetStandardTooltip(FName GearID, FName GearVariation, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, int32_t CallFunc_GetLevelRequiermentsForItem_outLevel, bool CallFunc_GetLevelRequiermentsForItem_outUsable) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetStandardTooltip"));
    struct Params_SetStandardTooltip {
        FName GearID; // 0x0
        FName GearVariation; // 0x8
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x10
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x20
        FString CallFunc_Conv_NameToString_ReturnValue_1; // 0x30
        int32_t CallFunc_GetLevelRequiermentsForItem_outLevel; // 0x40
        bool CallFunc_GetLevelRequiermentsForItem_outUsable; // 0x44
    }; // Size: 0x45
    Params_SetStandardTooltip params{};
    params.GearID = (FName)GearID;
    params.GearVariation = (FName)GearVariation;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue_1 = (FString)CallFunc_Conv_NameToString_ReturnValue_1;
    params.CallFunc_GetLevelRequiermentsForItem_outLevel = (int32_t)CallFunc_GetLevelRequiermentsForItem_outLevel;
    params.CallFunc_GetLevelRequiermentsForItem_outUsable = (bool)CallFunc_GetLevelRequiermentsForItem_outUsable;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VendorDetails_C::SetCapturedCreatureInfo(FName GearID, FName Variation, FString tempDesc, FName TempTypeID, FString TempTitle, UTexture2D* Temp_object_Variable, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, ESlateVisibility K2Node_Select_Default, UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable_1, UTexture2D* K2Node_Select_Default_1, UCreatureManager* CallFunc_Get_ReturnValue, FString CallFunc_GetCreatureDisplayNameFromUIDName_OutName, bool CallFunc_GetCreatureDisplayNameFromUIDName_OutIsLocalizationKey, UCreatureState* CallFunc_BP_GetCreatureStateByFName_ReturnValue, FName CallFunc_GetTypeID_ReturnValue, bool CallFunc_IsAlbino_ReturnValue, bool CallFunc_GetIsMale_ReturnValue) {}
void UUI_BP_FG_VendorDetails_C::SetGearLevelRequirement(FName GearID, FName GearVariation, UExperienceManager* CallFunc_Get_ReturnValue, FGearItemID K2Node_MakeStruct_GearItemID, int32_t CallFunc_GetExperienceLevel_ReturnValue, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetGearLevelRequirement"));
    struct Params_SetGearLevelRequirement {
        FName GearID; // 0x0
        FName GearVariation; // 0x8
        UExperienceManager* CallFunc_Get_ReturnValue; // 0x10
        FGearItemID K2Node_MakeStruct_GearItemID; // 0x18
        int32_t CallFunc_GetExperienceLevel_ReturnValue; // 0x2c
        FGearItem CallFunc_GetGearItem_OutGearItem; // 0x30
        bool CallFunc_GetGearItem_ReturnValue; // 0x88
        bool CallFunc_GreaterEqual_IntInt_ReturnValue; // 0x89
    }; // Size: 0x8a
    Params_SetGearLevelRequirement params{};
    params.GearID = (FName)GearID;
    params.GearVariation = (FName)GearVariation;
    params.CallFunc_Get_ReturnValue = (UExperienceManager*)CallFunc_Get_ReturnValue;
    params.K2Node_MakeStruct_GearItemID = (FGearItemID)K2Node_MakeStruct_GearItemID;
    params.CallFunc_GetExperienceLevel_ReturnValue = (int32_t)CallFunc_GetExperienceLevel_ReturnValue;
    params.CallFunc_GetGearItem_OutGearItem = (FGearItem)CallFunc_GetGearItem_OutGearItem;
    params.CallFunc_GetGearItem_ReturnValue = (bool)CallFunc_GetGearItem_ReturnValue;
    params.CallFunc_GreaterEqual_IntInt_ReturnValue = (bool)CallFunc_GreaterEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VendorDetails_C::SetGearDeleteMessage(FName GearID, FName GearVariation, bool DisplayIfSafeToDelete) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetGearDeleteMessage"));
    struct Params_SetGearDeleteMessage {
        FName GearID; // 0x0
        FName GearVariation; // 0x8
        bool DisplayIfSafeToDelete; // 0x10
    }; // Size: 0x11
    Params_SetGearDeleteMessage params{};
    params.GearID = (FName)GearID;
    params.GearVariation = (FName)GearVariation;
    params.DisplayIfSafeToDelete = (bool)DisplayIfSafeToDelete;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VendorDetails_C::SetGearTraits(TArray<FName>& GearAbilityArray, FGearItemID GearItemID, int32_t emptyTraitCount, TArray<FName> tempTraitArray, int32_t CallFunc_GetGearEmptyTraitSlots_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, int32_t CallFunc_GetTotalAvailableTriats_TotalAvailableTraits, UGearManager* CallFunc_Get_ReturnValue, FName CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetGearTraits"));
    struct Params_SetGearTraits {
        TArray<FName> GearAbilityArray; // 0x0
        FGearItemID GearItemID; // 0x10
        int32_t emptyTraitCount; // 0x24
        TArray<FName> tempTraitArray; // 0x28
        int32_t CallFunc_GetGearEmptyTraitSlots_ReturnValue; // 0x38
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x3c
        char pad_3d[0x3];
        FGearItem CallFunc_GetGearItem_OutGearItem; // 0x40
        bool CallFunc_GetGearItem_ReturnValue; // 0x98
        char pad_99[0x3];
        int32_t CallFunc_GetTotalAvailableTriats_TotalAvailableTraits; // 0x9c
        UGearManager* CallFunc_Get_ReturnValue; // 0xa0
        FName CallFunc_Array_Get_Item; // 0xa8
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0xb0
        bool CallFunc_BooleanAND_ReturnValue; // 0xb1
    }; // Size: 0xb2
    Params_SetGearTraits params{};
    params.GearAbilityArray = (TArray<FName>)GearAbilityArray;
    params.GearItemID = (FGearItemID)GearItemID;
    params.emptyTraitCount = (int32_t)emptyTraitCount;
    params.tempTraitArray = (TArray<FName>)tempTraitArray;
    params.CallFunc_GetGearEmptyTraitSlots_ReturnValue = (int32_t)CallFunc_GetGearEmptyTraitSlots_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_GetGearItem_OutGearItem = (FGearItem)CallFunc_GetGearItem_OutGearItem;
    params.CallFunc_GetGearItem_ReturnValue = (bool)CallFunc_GetGearItem_ReturnValue;
    params.CallFunc_GetTotalAvailableTriats_TotalAvailableTraits = (int32_t)CallFunc_GetTotalAvailableTriats_TotalAvailableTraits;
    params.CallFunc_Get_ReturnValue = (UGearManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    GearAbilityArray = params.GearAbilityArray;
}
void UUI_BP_FG_VendorDetails_C::SetGearInfo(FGearItemID GearItemID, TArray<FName> TempGearTraitArray, FName TempRarity, FGearItem TempGearItem, FString CallFunc_GetGearTooltipInfo_Title, FString CallFunc_GetGearTooltipInfo_Description, FString CallFunc_GetGearTooltipInfo_Quality, FName CallFunc_GetGearTooltipInfo_Rarity, int32_t CallFunc_GetGearTooltipInfo_SellPrice, bool CallFunc_GetGearTooltipInfo_Sellable, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_SetHeaderData_ShowRarityGraphics) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.SetGearInfo"));
    struct Params_SetGearInfo {
        FGearItemID GearItemID; // 0x0
        char pad_14[0x4];
        TArray<FName> TempGearTraitArray; // 0x18
        FName TempRarity; // 0x28
        FGearItem TempGearItem; // 0x30
        FString CallFunc_GetGearTooltipInfo_Title; // 0x88
        FString CallFunc_GetGearTooltipInfo_Description; // 0x98
        FString CallFunc_GetGearTooltipInfo_Quality; // 0xa8
        FName CallFunc_GetGearTooltipInfo_Rarity; // 0xb8
        int32_t CallFunc_GetGearTooltipInfo_SellPrice; // 0xc0
        bool CallFunc_GetGearTooltipInfo_Sellable; // 0xc4
        char pad_c5[0x3];
        FGearItem CallFunc_GetGearItem_OutGearItem; // 0xc8
        bool CallFunc_GetGearItem_ReturnValue; // 0x120
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x121
        bool CallFunc_SetHeaderData_ShowRarityGraphics; // 0x122
    }; // Size: 0x123
    Params_SetGearInfo params{};
    params.GearItemID = (FGearItemID)GearItemID;
    params.TempGearTraitArray = (TArray<FName>)TempGearTraitArray;
    params.TempRarity = (FName)TempRarity;
    params.TempGearItem = (FGearItem)TempGearItem;
    params.CallFunc_GetGearTooltipInfo_Title = (FString)CallFunc_GetGearTooltipInfo_Title;
    params.CallFunc_GetGearTooltipInfo_Description = (FString)CallFunc_GetGearTooltipInfo_Description;
    params.CallFunc_GetGearTooltipInfo_Quality = (FString)CallFunc_GetGearTooltipInfo_Quality;
    params.CallFunc_GetGearTooltipInfo_Rarity = (FName)CallFunc_GetGearTooltipInfo_Rarity;
    params.CallFunc_GetGearTooltipInfo_SellPrice = (int32_t)CallFunc_GetGearTooltipInfo_SellPrice;
    params.CallFunc_GetGearTooltipInfo_Sellable = (bool)CallFunc_GetGearTooltipInfo_Sellable;
    params.CallFunc_GetGearItem_OutGearItem = (FGearItem)CallFunc_GetGearItem_OutGearItem;
    params.CallFunc_GetGearItem_ReturnValue = (bool)CallFunc_GetGearItem_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_SetHeaderData_ShowRarityGraphics = (bool)CallFunc_SetHeaderData_ShowRarityGraphics;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VendorDetails_C::BuildItemTooltip(UUI_BP_InventoryIconButton_C* Button, TArray<FName> tempTraitArray, FString Description, FName Rarity, bool TranslateTitle, FString Title, FString QualityString, bool IsCreatureAlbino, bool IsCreatureMale, FString InventoryItemName, bool IsCapturedCreature, FInventoryResult InvResult, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_IsGear_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, FString CallFunc_SelectString_ReturnValue, FGearItemID K2Node_MakeStruct_GearItemID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.BuildItemTooltip"));
    struct Params_BuildItemTooltip {
        UUI_BP_InventoryIconButton_C* Button; // 0x0
        TArray<FName> tempTraitArray; // 0x8
        FString Description; // 0x18
        FName Rarity; // 0x28
        bool TranslateTitle; // 0x30
        char pad_31[0x7];
        FString Title; // 0x38
        FString QualityString; // 0x48
        bool IsCreatureAlbino; // 0x58
        bool IsCreatureMale; // 0x59
        char pad_5a[0x6];
        FString InventoryItemName; // 0x60
        bool IsCapturedCreature; // 0x70
        char pad_71[0x7];
        FInventoryResult InvResult; // 0x78
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x100
        bool CallFunc_IsGear_ReturnValue; // 0x110
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x111
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x112
        char pad_113[0x5];
        FString CallFunc_SelectString_ReturnValue; // 0x118
        FGearItemID K2Node_MakeStruct_GearItemID; // 0x128
    }; // Size: 0x13c
    Params_BuildItemTooltip params{};
    params.Button = (UUI_BP_InventoryIconButton_C*)Button;
    params.tempTraitArray = (TArray<FName>)tempTraitArray;
    params.Description = (FString)Description;
    params.Rarity = (FName)Rarity;
    params.TranslateTitle = (bool)TranslateTitle;
    params.Title = (FString)Title;
    params.QualityString = (FString)QualityString;
    params.IsCreatureAlbino = (bool)IsCreatureAlbino;
    params.IsCreatureMale = (bool)IsCreatureMale;
    params.InventoryItemName = (FString)InventoryItemName;
    params.IsCapturedCreature = (bool)IsCapturedCreature;
    params.InvResult = (FInventoryResult)InvResult;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_IsGear_ReturnValue = (bool)CallFunc_IsGear_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_SelectString_ReturnValue = (FString)CallFunc_SelectString_ReturnValue;
    params.K2Node_MakeStruct_GearItemID = (FGearItemID)K2Node_MakeStruct_GearItemID;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VendorDetails_C::Finished_C5DEB46F48574714135D02ADCD8BFB31() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.Finished_C5DEB46F48574714135D02ADCD8BFB31"));
    struct Params_Finished_C5DEB46F48574714135D02ADCD8BFB31 {
    }; // Size: 0x0
    Params_Finished_C5DEB46F48574714135D02ADCD8BFB31 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VendorDetails_C::PlayVendorDetailsDisAppearAnimm() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.PlayVendorDetailsDisAppearAnimm"));
    struct Params_PlayVendorDetailsDisAppearAnimm {
    }; // Size: 0x0
    Params_PlayVendorDetailsDisAppearAnimm params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VendorDetails_C::DetailsHoldButtonReleased(ULegendItem* LegendItem, bool HoldWasCompleted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.DetailsHoldButtonReleased"));
    struct Params_DetailsHoldButtonReleased {
        ULegendItem* LegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
    }; // Size: 0x9
    Params_DetailsHoldButtonReleased params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VendorDetails_C::OnHoldButtonReleasedEvent__DelegateSignature(bool HoldWasComplete) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.OnHoldButtonReleasedEvent__DelegateSignature"));
    struct Params_OnHoldButtonReleasedEvent__DelegateSignature {
        bool HoldWasComplete; // 0x0
    }; // Size: 0x1
    Params_OnHoldButtonReleasedEvent__DelegateSignature params{};
    params.HoldWasComplete = (bool)HoldWasComplete;
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VendorDetails_C::VendorDetailCollapseDistpatch__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VendorDetails.UI_BP_FG_VendorDetails_C.VendorDetailCollapseDistpatch__DelegateSignature"));
    struct Params_VendorDetailCollapseDistpatch__DelegateSignature {
    }; // Size: 0x0
    Params_VendorDetailCollapseDistpatch__DelegateSignature params{};
    ProcessEvent(func, &params);
}
