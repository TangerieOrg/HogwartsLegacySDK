#include "ESlateVisibility.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCreatureState.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "ULegendItem.hpp"
#include "UOverlay.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_CreatureManagement_DetailsPanel_C.hpp"
#include "UUI_BP_CreatureStatusSummary_C.hpp"
#include "UUI_BP_FG_DetailsPanelBack_C.hpp"
#include "UUI_BP_Legend_Horizontal_Tooltip_C.hpp"
void UUI_BP_CreatureManagement_DetailsPanel_C::Update_Tooltip(UCreatureState* CreatureState, FName NurturingSpaceID, UUI_BP_Legend_Horizontal_Tooltip_C* NewLocalVar_0, FString TempErrorMessage, bool CanReleaseToNurturingSpace, FName TempTypeID, bool Temp_bool_Variable, FName CallFunc_GetTypeID_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, FLegendItemData K2Node_MakeStruct_LegendItemData, TArray<FLegendItemData>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsAlbino_ReturnValue, bool CallFunc_GetIsMale_ReturnValue, bool Temp_bool_Variable_2, FString CallFunc_Conv_NameToString_ReturnValue, ESlateVisibility K2Node_Select_Default, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, ESlateVisibility Temp_byte_Variable_4, UTexture2D* K2Node_Select_Default_1, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility K2Node_Select_Default_2, bool Temp_bool_Variable_3, ESlateVisibility K2Node_Select_Default_3, FString CallFunc_GetCreatureDisplayName_OutName, bool CallFunc_GetCreatureDisplayName_OutIsLocalizationKey) {}
UUI_BP_CreatureManagement_DetailsPanel_C* UUI_BP_CreatureManagement_DetailsPanel_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagement_DetailsPanel.UI_BP_CreatureManagement_DetailsPanel_C");
    return (UUI_BP_CreatureManagement_DetailsPanel_C*)res;
}
void UUI_BP_CreatureManagement_DetailsPanel_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagement_DetailsPanel.UI_BP_CreatureManagement_DetailsPanel_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_CreatureManagement_DetailsPanel_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, ESlateVisibility CallFunc_GetVisibility_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_2) {}
void UUI_BP_CreatureManagement_DetailsPanel_C::UpdateBreedTooltip(UCreatureState* CreatureState, bool TempCanSelectCreature, FString TempErrorMessage, FName TempTypeID, bool Temp_bool_Variable, FString CallFunc_CanCreatureBreed_ErrorMessage, bool CallFunc_CanCreatureBreed_ReturnValue, FName CallFunc_GetTypeID_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, FLegendItemData K2Node_MakeStruct_LegendItemData, bool CallFunc_IsAlbino_ReturnValue, TArray<FLegendItemData>& K2Node_MakeArray_Array, bool CallFunc_GetIsMale_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default, ESlateVisibility Temp_byte_Variable_4, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, UTexture2D* K2Node_Select_Default_1, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility K2Node_Select_Default_2, bool Temp_bool_Variable_3, ESlateVisibility K2Node_Select_Default_3, FString CallFunc_GetCreatureDisplayName_OutName, bool CallFunc_GetCreatureDisplayName_OutIsLocalizationKey) {}
void UUI_BP_CreatureManagement_DetailsPanel_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagement_DetailsPanel.UI_BP_CreatureManagement_DetailsPanel_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagement_DetailsPanel_C::UpdateSpeciesTooltip(FName SpeciesName, TArray<FLegendItemData>& TooltipLegendArray, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagement_DetailsPanel.UI_BP_CreatureManagement_DetailsPanel_C.UpdateSpeciesTooltip"));
    struct Params_UpdateSpeciesTooltip {
        FName SpeciesName; // 0x0
        TArray<FLegendItemData> TooltipLegendArray; // 0x8
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x18
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x28
    }; // Size: 0x38
    Params_UpdateSpeciesTooltip params{};
    params.SpeciesName = (FName)SpeciesName;
    params.TooltipLegendArray = (TArray<FLegendItemData>)TooltipLegendArray;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    ProcessEvent(func, &params);
    TooltipLegendArray = params.TooltipLegendArray;
}
void UUI_BP_CreatureManagement_DetailsPanel_C::ExecuteUbergraph_UI_BP_CreatureManagement_DetailsPanel(int32_t EntryPoint, bool K2Node_Event_IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagement_DetailsPanel.UI_BP_CreatureManagement_DetailsPanel_C.ExecuteUbergraph_UI_BP_CreatureManagement_DetailsPanel"));
    struct Params_ExecuteUbergraph_UI_BP_CreatureManagement_DetailsPanel {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_UI_BP_CreatureManagement_DetailsPanel params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagement_DetailsPanel_C::ApplyUpgradeOnSelected__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagement_DetailsPanel.UI_BP_CreatureManagement_DetailsPanel_C.ApplyUpgradeOnSelected__DelegateSignature"));
    struct Params_ApplyUpgradeOnSelected__DelegateSignature {
    }; // Size: 0x0
    Params_ApplyUpgradeOnSelected__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureManagement_DetailsPanel_C::OnGetUpgradeStats__DelegateSignature(int32_t BaseValue, int32_t NextUpgradeValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureManagement_DetailsPanel.UI_BP_CreatureManagement_DetailsPanel_C.OnGetUpgradeStats__DelegateSignature"));
    struct Params_OnGetUpgradeStats__DelegateSignature {
        int32_t BaseValue; // 0x0
        int32_t NextUpgradeValue; // 0x4
    }; // Size: 0x8
    Params_OnGetUpgradeStats__DelegateSignature params{};
    params.BaseValue = (int32_t)BaseValue;
    params.NextUpgradeValue = (int32_t)NextUpgradeValue;
    ProcessEvent(func, &params);
}
