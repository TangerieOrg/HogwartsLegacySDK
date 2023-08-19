#include "AHerbPlot.hpp"
#include "EHerbGrowthState.hpp"
#include "ESlateVisibility.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FGeometry.hpp"
#include "FInventoryResult.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimespan.hpp"
#include "UFunction.hpp"
#include "UHerbPlotState.hpp"
#include "UHorizontalBox.hpp"
#include "UIconButtonWidget.hpp"
#include "UImage.hpp"
#include "UMenuCursorWidget.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_HerbologyApplyItems_C.hpp"
#include "UUI_BP_HerbologyFertilizerButton_C.hpp"
#include "UUI_BP_ItemTooltipEffectDescription_C.hpp"
#include "UUI_BP_NurtureProgressDiamond_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_HerbologyApplyItems_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyApplyItems_C::RefreshFertilizerTooltip(FName FertilizerID, bool IsErrorUsed, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, TArray<FLegendItemData>& K2Node_MakeArray_Array, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue) {}
UUI_BP_HerbologyApplyItems_C* UUI_BP_HerbologyApplyItems_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Herbology/UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C");
    return (UUI_BP_HerbologyApplyItems_C*)res;
}
TArray<FString> UUI_BP_HerbologyApplyItems_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UUI_BP_HerbologyFertilizerButton_C* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue) {}
void UUI_BP_HerbologyApplyItems_C::SetHerbPlot(AHerbPlot* NewHerbPlot, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_GetYield_ReturnValue) {}
void UUI_BP_HerbologyApplyItems_C::AudioStopLoop(TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void UUI_BP_HerbologyApplyItems_C::AudioPlayLoop(TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void UUI_BP_HerbologyApplyItems_C::OnFertilizerButtonUnhovered(FName FertilizerID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.OnFertilizerButtonUnhovered"));
    struct Params_OnFertilizerButtonUnhovered {
        FName FertilizerID; // 0x0
    }; // Size: 0x8
    Params_OnFertilizerButtonUnhovered params{};
    params.FertilizerID = (FName)FertilizerID;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyApplyItems_C::GetGrowthProgressRation(float& Progress, float CallFunc_GetGrowthProgressRatio_ReturnValue, float CallFunc_GetRegrowthTimeRatio_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, EHerbGrowthState CallFunc_GetGrowthState_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.GetGrowthProgressRation"));
    struct Params_GetGrowthProgressRation {
        float Progress; // 0x0
        float CallFunc_GetGrowthProgressRatio_ReturnValue; // 0x4
        float CallFunc_GetRegrowthTimeRatio_ReturnValue; // 0x8
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0xc
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x10
        EHerbGrowthState CallFunc_GetGrowthState_ReturnValue; // 0x14
        char pad_15[0x3];
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x18
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_GetGrowthProgressRation params{};
    params.Progress = (float)Progress;
    params.CallFunc_GetGrowthProgressRatio_ReturnValue = (float)CallFunc_GetGrowthProgressRatio_ReturnValue;
    params.CallFunc_GetRegrowthTimeRatio_ReturnValue = (float)CallFunc_GetRegrowthTimeRatio_ReturnValue;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_GetGrowthState_ReturnValue = (EHerbGrowthState)CallFunc_GetGrowthState_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
    Progress = params.Progress;
}
void UUI_BP_HerbologyApplyItems_C::RefreshPlantTooltip(TArray<FLegendItemData>& K2Node_MakeArray_Array, FName CallFunc_GetPlantID_ReturnValue, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue) {}
void UUI_BP_HerbologyApplyItems_C::GetIsGrowing(bool& Growing, EHerbGrowthState CallFunc_GetGrowthState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.GetIsGrowing"));
    struct Params_GetIsGrowing {
        bool Growing; // 0x0
        EHerbGrowthState CallFunc_GetGrowthState_ReturnValue; // 0x1
        bool K2Node_SwitchEnum_CmpSuccess; // 0x2
    }; // Size: 0x3
    Params_GetIsGrowing params{};
    params.Growing = (bool)Growing;
    params.CallFunc_GetGrowthState_ReturnValue = (EHerbGrowthState)CallFunc_GetGrowthState_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    ProcessEvent(func, &params);
    Growing = params.Growing;
}
void UUI_BP_HerbologyApplyItems_C::UpdateToolTip(FString ItemName, bool IsErrorUsed, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue, TArray<FLegendItemData>& K2Node_MakeArray_Array) {}
void UUI_BP_HerbologyApplyItems_C::PopulateFertilizers(TArray<FInventoryResult>& Fertilizers, bool CanBeApplied, FInventoryResult InventoryResult, UUI_BP_HerbologyFertilizerButton_C* FertilizerButton, ESlateVisibility Temp_byte_Variable, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, UUI_BP_HerbologyFertilizerButton_C* CallFunc_Create_ReturnValue, int32_t Temp_int_Array_Index_Variable, ESlateVisibility Temp_byte_Variable_1, FInventoryResult CallFunc_Array_Get_Item, int32_t CallFunc_Array_Add_ReturnValue) {}
void UUI_BP_HerbologyApplyItems_C::Set_Plant_Details(FName PlantID, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.Set Plant Details"));
    struct Params_Set_Plant_Details {
        FName PlantID; // 0x0
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x8
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x18
    }; // Size: 0x28
    Params_Set_Plant_Details params{};
    params.PlantID = (FName)PlantID;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyApplyItems_C::RefreshWidget(AHerbPlot* Plot, TArray<FInventoryResult>& CallFunc_GetInventoryTextBP_InventoryResultArray, FName CallFunc_GetPlantID_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.RefreshWidget"));
    struct Params_RefreshWidget {
        AHerbPlot* Plot; // 0x0
        TArray<FInventoryResult> CallFunc_GetInventoryTextBP_InventoryResultArray; // 0x8
        FName CallFunc_GetPlantID_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_RefreshWidget params{};
    params.Plot = (AHerbPlot*)Plot;
    params.CallFunc_GetInventoryTextBP_InventoryResultArray = (TArray<FInventoryResult>)CallFunc_GetInventoryTextBP_InventoryResultArray;
    params.CallFunc_GetPlantID_ReturnValue = (FName)CallFunc_GetPlantID_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetInventoryTextBP_InventoryResultArray = params.CallFunc_GetInventoryTextBP_InventoryResultArray;
}
void UUI_BP_HerbologyApplyItems_C::OnRequiresLegendUpdate__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.OnRequiresLegendUpdate__DelegateSignature"));
    struct Params_OnRequiresLegendUpdate__DelegateSignature {
    }; // Size: 0x0
    Params_OnRequiresLegendUpdate__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyApplyItems_C::OnFertilizerButtonHovered(FName FertilizerID, UUI_BP_HerbologyFertilizerButton_C* FertilizerButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.OnFertilizerButtonHovered"));
    struct Params_OnFertilizerButtonHovered {
        FName FertilizerID; // 0x0
        UUI_BP_HerbologyFertilizerButton_C* FertilizerButton; // 0x8
    }; // Size: 0x10
    Params_OnFertilizerButtonHovered params{};
    params.FertilizerID = (FName)FertilizerID;
    params.FertilizerButton = (UUI_BP_HerbologyFertilizerButton_C*)FertilizerButton;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyApplyItems_C::OnIntroStarted0(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyApplyItems_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyApplyItems_C::OnOutroStarted0(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyApplyItems_C::OnFertilizerButtonClicked(FName FertilizerID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.OnFertilizerButtonClicked"));
    struct Params_OnFertilizerButtonClicked {
        FName FertilizerID; // 0x0
    }; // Size: 0x8
    Params_OnFertilizerButtonClicked params{};
    params.FertilizerID = (FName)FertilizerID;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyApplyItems_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyApplyItems_C::ExecuteUbergraph_UI_BP_HerbologyApplyItems(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, FName K2Node_CustomEvent_FertilizerID_2, UUI_BP_HerbologyFertilizerButton_C* K2Node_CustomEvent_FertilizerButton, FName K2Node_CustomEvent_FertilizerID_1, FString CallFunc_Conv_NameToString_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t K2Node_Event_IntroType, float K2Node_Event_IntroDuration, int32_t K2Node_Event_OutroType, float K2Node_Event_OutroDuration, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FName K2Node_CustomEvent_FertilizerID, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FString CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetGrowthProgressRation_Progress, FTimespan CallFunc_GetGrowthTimeRemaining_ReturnValue) {}
void UUI_BP_HerbologyApplyItems_C::OnFertilizerHovered__DelegateSignature(UUI_BP_HerbologyFertilizerButton_C* FertilizerButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.OnFertilizerHovered__DelegateSignature"));
    struct Params_OnFertilizerHovered__DelegateSignature {
        UUI_BP_HerbologyFertilizerButton_C* FertilizerButton; // 0x0
    }; // Size: 0x8
    Params_OnFertilizerHovered__DelegateSignature params{};
    params.FertilizerButton = (UUI_BP_HerbologyFertilizerButton_C*)FertilizerButton;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyApplyItems_C::OnFertilizerSelected__DelegateSignature(FName FertilizerID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyApplyItems.UI_BP_HerbologyApplyItems_C.OnFertilizerSelected__DelegateSignature"));
    struct Params_OnFertilizerSelected__DelegateSignature {
        FName FertilizerID; // 0x0
    }; // Size: 0x8
    Params_OnFertilizerSelected__DelegateSignature params{};
    params.FertilizerID = (FName)FertilizerID;
    ProcessEvent(func, &params);
}
