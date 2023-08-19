#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UImage;
class UHorizontalBox;
class UCreatureState;
class UUI_BP_Legend_Horizontal_Tooltip_C;
class UPhoenixTextBlock;
class UOverlay;
class UUI_BP_CreatureStatusSummary_C;
class UUI_BP_FG_DetailsPanelBack_C;
class ULegendItem;
class UTexture2D;
#pragma pack(push, 1)
class UUI_BP_CreatureManagement_DetailsPanel_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UImage* CreatureAlbinoIcon; // 0x330
    UImage* CreatureGenderIcon; // 0x338
    UPhoenixTextBlock* descriptionText; // 0x340
    UOverlay* detailsLegend; // 0x348
    UUI_BP_Legend_Horizontal_Tooltip_C* detailsLegendBar; // 0x350
    UPhoenixTextBlock* detailsTitle; // 0x358
    UHorizontalBox* ErrorText; // 0x360
    UPhoenixTextBlock* ErrorTextMain; // 0x368
    UImage* Image_4; // 0x370
    UImage* meterDivider; // 0x378
    UUI_BP_FG_DetailsPanelBack_C* panelBack; // 0x380
    UUI_BP_CreatureStatusSummary_C* StatusSummary; // 0x388
    char pad_390[0x10];
    ULegendItem* LegendGearUpgrade; // 0x3a0
    ULegendItem* LegendGearApplyTrait; // 0x3a8
    char pad_3b0[0x10];
    bool hasLegend; // 0x3c0
    bool IsMale; // 0x3c1
    bool IsAlbino; // 0x3c2
    char pad_3c3[0x5];
    static UUI_BP_CreatureManagement_DetailsPanel_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, ESlateVisibility CallFunc_GetVisibility_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_2);
    void UpdateBreedTooltip(UCreatureState* CreatureState, bool TempCanSelectCreature, FString TempErrorMessage, FName TempTypeID, bool Temp_bool_Variable, FString CallFunc_CanCreatureBreed_ErrorMessage, bool CallFunc_CanCreatureBreed_ReturnValue, FName CallFunc_GetTypeID_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, FLegendItemData K2Node_MakeStruct_LegendItemData, bool CallFunc_IsAlbino_ReturnValue, TArray<FLegendItemData>& K2Node_MakeArray_Array, bool CallFunc_GetIsMale_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default, ESlateVisibility Temp_byte_Variable_4, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, UTexture2D* K2Node_Select_Default_1, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility K2Node_Select_Default_2, bool Temp_bool_Variable_3, ESlateVisibility K2Node_Select_Default_3, FString CallFunc_GetCreatureDisplayName_OutName, bool CallFunc_GetCreatureDisplayName_OutIsLocalizationKey);
    void UpdateSpeciesTooltip(FName SpeciesName, TArray<FLegendItemData>& TooltipLegendArray, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    void Update_Tooltip(UCreatureState* CreatureState, FName NurturingSpaceID, UUI_BP_Legend_Horizontal_Tooltip_C* NewLocalVar_0, FString TempErrorMessage, bool CanReleaseToNurturingSpace, FName TempTypeID, bool Temp_bool_Variable, FName CallFunc_GetTypeID_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, FLegendItemData K2Node_MakeStruct_LegendItemData, TArray<FLegendItemData>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsAlbino_ReturnValue, bool CallFunc_GetIsMale_ReturnValue, bool Temp_bool_Variable_2, FString CallFunc_Conv_NameToString_ReturnValue, ESlateVisibility K2Node_Select_Default, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, ESlateVisibility Temp_byte_Variable_4, UTexture2D* K2Node_Select_Default_1, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility K2Node_Select_Default_2, bool Temp_bool_Variable_3, ESlateVisibility K2Node_Select_Default_3, FString CallFunc_GetCreatureDisplayName_OutName, bool CallFunc_GetCreatureDisplayName_OutIsLocalizationKey);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_BP_CreatureManagement_DetailsPanel(int32_t EntryPoint, bool K2Node_Event_IsDesignTime);
    void ApplyUpgradeOnSelected__DelegateSignature();
    void OnGetUpgradeStats__DelegateSignature(int32_t BaseValue, int32_t NextUpgradeValue);
}; // Size: 0x3c8
#pragma pack(pop)
