#include "AHerbPlot.hpp"
#include "EMenuReaderInterruptType.hpp"
#include "FInventoryResult.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSeedInfo.hpp"
#include "UFunction.hpp"
#include "UIconButtonWidget.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_HerbologySeedSelection_C.hpp"
#include "UUI_BP_HerbologySeedTooltip_C.hpp"
#include "UUI_BP_InventoryIconButton_C.hpp"
#include "UUI_BP_PottingDetails_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUniformGridPanel.hpp"
#include "UUniformGridSlot.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_HerbologySeedSelection_C::OnSeedButtonClicked(UIconButtonWidget* Seed_Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.OnSeedButtonClicked"));
    struct Params_OnSeedButtonClicked {
        UIconButtonWidget* Seed_Button; // 0x0
    }; // Size: 0x8
    Params_OnSeedButtonClicked params{};
    params.Seed_Button = (UIconButtonWidget*)Seed_Button;
    ProcessEvent(func, &params);
}
UUI_BP_HerbologySeedSelection_C* UUI_BP_HerbologySeedSelection_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C");
    return (UUI_BP_HerbologySeedSelection_C*)res;
}
void UUI_BP_HerbologySeedSelection_C::GetSeedInfoFromButton(UIconButtonWidget* Button, FSeedInfo& SeedInfo, bool& CanPlantInPlot, int32_t Index, UUniformGridSlot* CallFunc_SlotAsUniformGridSlot_ReturnValue, int32_t CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_Array_Get_Item, int32_t CallFunc_Add_IntInt_ReturnValue, FSeedInfo CallFunc_Array_Get_Item_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.GetSeedInfoFromButton"));
    struct Params_GetSeedInfoFromButton {
        UIconButtonWidget* Button; // 0x0
        FSeedInfo SeedInfo; // 0x8
        bool CanPlantInPlot; // 0x38
        char pad_39[0x3];
        int32_t Index; // 0x3c
        UUniformGridSlot* CallFunc_SlotAsUniformGridSlot_ReturnValue; // 0x40
        int32_t CallFunc_Multiply_IntInt_ReturnValue; // 0x48
        bool CallFunc_Array_Get_Item; // 0x4c
        char pad_4d[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x50
        FSeedInfo CallFunc_Array_Get_Item_1; // 0x54
    }; // Size: 0x84
    Params_GetSeedInfoFromButton params{};
    params.Button = (UIconButtonWidget*)Button;
    params.SeedInfo = (FSeedInfo)SeedInfo;
    params.CanPlantInPlot = (bool)CanPlantInPlot;
    params.Index = (int32_t)Index;
    params.CallFunc_SlotAsUniformGridSlot_ReturnValue = (UUniformGridSlot*)CallFunc_SlotAsUniformGridSlot_ReturnValue;
    params.CallFunc_Multiply_IntInt_ReturnValue = (int32_t)CallFunc_Multiply_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (bool)CallFunc_Array_Get_Item;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (FSeedInfo)CallFunc_Array_Get_Item_1;
    ProcessEvent(func, &params);
    SeedInfo = params.SeedInfo;
    CanPlantInPlot = params.CanPlantInPlot;
}
void UUI_BP_HerbologySeedSelection_C::GridIndexToRowColumn(int32_t GridIndex, int32_t GridWidth, int32_t& OutRow, int32_t& OutColumn, int32_t CallFunc_Divide_IntInt_ReturnValue, int32_t CallFunc_Percent_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.GridIndexToRowColumn"));
    struct Params_GridIndexToRowColumn {
        int32_t GridIndex; // 0x0
        int32_t GridWidth; // 0x4
        int32_t OutRow; // 0x8
        int32_t OutColumn; // 0xc
        int32_t CallFunc_Divide_IntInt_ReturnValue; // 0x10
        int32_t CallFunc_Percent_IntInt_ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GridIndexToRowColumn params{};
    params.GridIndex = (int32_t)GridIndex;
    params.GridWidth = (int32_t)GridWidth;
    params.OutRow = (int32_t)OutRow;
    params.OutColumn = (int32_t)OutColumn;
    params.CallFunc_Divide_IntInt_ReturnValue = (int32_t)CallFunc_Divide_IntInt_ReturnValue;
    params.CallFunc_Percent_IntInt_ReturnValue = (int32_t)CallFunc_Percent_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    OutRow = params.OutRow;
    OutColumn = params.OutColumn;
}
void UUI_BP_HerbologySeedSelection_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologySeedSelection_C::RefreshSeedList(AHerbPlot* Herb_Plot, TArray<FSeedInfo>& CallFunc_GetOwnedSeeds_OwnedSeeds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.RefreshSeedList"));
    struct Params_RefreshSeedList {
        AHerbPlot* Herb_Plot; // 0x0
        TArray<FSeedInfo> CallFunc_GetOwnedSeeds_OwnedSeeds; // 0x8
    }; // Size: 0x18
    Params_RefreshSeedList params{};
    params.Herb_Plot = (AHerbPlot*)Herb_Plot;
    params.CallFunc_GetOwnedSeeds_OwnedSeeds = (TArray<FSeedInfo>)CallFunc_GetOwnedSeeds_OwnedSeeds;
    ProcessEvent(func, &params);
    CallFunc_GetOwnedSeeds_OwnedSeeds = params.CallFunc_GetOwnedSeeds_OwnedSeeds;
}
void UUI_BP_HerbologySeedSelection_C::UpdateSeedTooltip(TArray<FLegendItemData> LegendDataArray, bool LocalCanPlantInPlot, FString TempLegend, FSeedInfo CallFunc_GetSeedInfoFromButton_SeedInfo, bool CallFunc_GetSeedInfoFromButton_CanPlantInPlot) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.UpdateSeedTooltip"));
    struct Params_UpdateSeedTooltip {
        TArray<FLegendItemData> LegendDataArray; // 0x0
        bool LocalCanPlantInPlot; // 0x10
        char pad_11[0x7];
        FString TempLegend; // 0x18
        FSeedInfo CallFunc_GetSeedInfoFromButton_SeedInfo; // 0x28
        bool CallFunc_GetSeedInfoFromButton_CanPlantInPlot; // 0x58
    }; // Size: 0x59
    Params_UpdateSeedTooltip params{};
    params.LegendDataArray = (TArray<FLegendItemData>)LegendDataArray;
    params.LocalCanPlantInPlot = (bool)LocalCanPlantInPlot;
    params.TempLegend = (FString)TempLegend;
    params.CallFunc_GetSeedInfoFromButton_SeedInfo = (FSeedInfo)CallFunc_GetSeedInfoFromButton_SeedInfo;
    params.CallFunc_GetSeedInfoFromButton_CanPlantInPlot = (bool)CallFunc_GetSeedInfoFromButton_CanPlantInPlot;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologySeedSelection_C::GetCurrentlyHoveredPlantID(FName& PlantID, bool CallFunc_IsValid_ReturnValue, FSeedInfo CallFunc_GetSeedInfoFromButton_SeedInfo, bool CallFunc_GetSeedInfoFromButton_CanPlantInPlot) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.GetCurrentlyHoveredPlantID"));
    struct Params_GetCurrentlyHoveredPlantID {
        FName PlantID; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x8
        char pad_9[0x3];
        FSeedInfo CallFunc_GetSeedInfoFromButton_SeedInfo; // 0xc
        bool CallFunc_GetSeedInfoFromButton_CanPlantInPlot; // 0x3c
    }; // Size: 0x3d
    Params_GetCurrentlyHoveredPlantID params{};
    params.PlantID = (FName)PlantID;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetSeedInfoFromButton_SeedInfo = (FSeedInfo)CallFunc_GetSeedInfoFromButton_SeedInfo;
    params.CallFunc_GetSeedInfoFromButton_CanPlantInPlot = (bool)CallFunc_GetSeedInfoFromButton_CanPlantInPlot;
    ProcessEvent(func, &params);
    PlantID = params.PlantID;
}
void UUI_BP_HerbologySeedSelection_C::PopulatePreviewSeedList(int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.PopulatePreviewSeedList"));
    struct Params_PopulatePreviewSeedList {
        int32_t Temp_int_Variable; // 0x0
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x4
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_PopulatePreviewSeedList params{};
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologySeedSelection_C::PopulateSeedList(TArray<FSeedInfo>& Seeds, AHerbPlot* Herb_Plot, int32_t GridIndex, bool CanPlantHerb, UUI_BP_InventoryIconButton_C* IconButton, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, FSeedInfo CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, FInventoryResult K2Node_MakeStruct_InventoryResult, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_GridIndexToRowColumn_OutRow, int32_t CallFunc_GridIndexToRowColumn_OutColumn, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Variable, UUI_BP_InventoryIconButton_C* CallFunc_Create_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_DoesSeedFitInPlot_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {}
void UUI_BP_HerbologySeedSelection_C::ExecuteUbergraph_UI_BP_HerbologySeedSelection(int32_t EntryPoint, FName Temp_name_Variable, bool Temp_bool_Variable, EMenuReaderInterruptType Temp_byte_Variable, EMenuReaderInterruptType Temp_byte_Variable_1, UIconButtonWidget* K2Node_CustomEvent_Seed_Button_2, UIconButtonWidget* K2Node_CustomEvent_Seed_Button_1, UIconButtonWidget* K2Node_CustomEvent_Seed_Button, FSeedInfo CallFunc_GetSeedInfoFromButton_SeedInfo, bool CallFunc_GetSeedInfoFromButton_CanPlantInPlot, UUI_BP_HerbologySeedTooltip_C* CallFunc_Create_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t K2Node_Event_IntroType, float K2Node_Event_IntroDuration, int32_t K2Node_Event_OutroType, float K2Node_Event_OutroDuration, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FString CallFunc_GetMissionStepBP_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool K2Node_Event_IsDesignTime, int32_t CallFunc_Array_Add_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, EMenuReaderInterruptType K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.ExecuteUbergraph_UI_BP_HerbologySeedSelection"));
    struct Params_ExecuteUbergraph_UI_BP_HerbologySeedSelection {
        int32_t EntryPoint; // 0x0
        FName Temp_name_Variable; // 0x4
        bool Temp_bool_Variable; // 0xc
        EMenuReaderInterruptType Temp_byte_Variable; // 0xd
        EMenuReaderInterruptType Temp_byte_Variable_1; // 0xe
        char pad_f[0x1];
        UIconButtonWidget* K2Node_CustomEvent_Seed_Button_2; // 0x10
        UIconButtonWidget* K2Node_CustomEvent_Seed_Button_1; // 0x18
        UIconButtonWidget* K2Node_CustomEvent_Seed_Button; // 0x20
        FSeedInfo CallFunc_GetSeedInfoFromButton_SeedInfo; // 0x28
        bool CallFunc_GetSeedInfoFromButton_CanPlantInPlot; // 0x58
        char pad_59[0x7];
        UUI_BP_HerbologySeedTooltip_C* CallFunc_Create_ReturnValue; // 0x60
        UWidget* CallFunc_GetChildAt_ReturnValue; // 0x68
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x70
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x74
        int32_t K2Node_Event_IntroType; // 0x78
        float K2Node_Event_IntroDuration; // 0x7c
        int32_t K2Node_Event_OutroType; // 0x80
        float K2Node_Event_OutroDuration; // 0x84
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x88
        float CallFunc_Divide_FloatFloat_ReturnValue_1; // 0x8c
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x90
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x98
        FString CallFunc_GetMissionStepBP_ReturnValue; // 0xa0
        bool CallFunc_EqualEqual_StriStri_ReturnValue; // 0xb0
        bool K2Node_Event_IsDesignTime; // 0xb1
        char pad_b2[0x2];
        int32_t CallFunc_Array_Add_ReturnValue; // 0xb4
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1; // 0xb8
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0xc0
        EMenuReaderInterruptType K2Node_Select_Default; // 0xc8
    }; // Size: 0xc9
    Params_ExecuteUbergraph_UI_BP_HerbologySeedSelection params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_name_Variable = (FName)Temp_name_Variable;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (EMenuReaderInterruptType)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (EMenuReaderInterruptType)Temp_byte_Variable_1;
    params.K2Node_CustomEvent_Seed_Button_2 = (UIconButtonWidget*)K2Node_CustomEvent_Seed_Button_2;
    params.K2Node_CustomEvent_Seed_Button_1 = (UIconButtonWidget*)K2Node_CustomEvent_Seed_Button_1;
    params.K2Node_CustomEvent_Seed_Button = (UIconButtonWidget*)K2Node_CustomEvent_Seed_Button;
    params.CallFunc_GetSeedInfoFromButton_SeedInfo = (FSeedInfo)CallFunc_GetSeedInfoFromButton_SeedInfo;
    params.CallFunc_GetSeedInfoFromButton_CanPlantInPlot = (bool)CallFunc_GetSeedInfoFromButton_CanPlantInPlot;
    params.CallFunc_Create_ReturnValue = (UUI_BP_HerbologySeedTooltip_C*)CallFunc_Create_ReturnValue;
    params.CallFunc_GetChildAt_ReturnValue = (UWidget*)CallFunc_GetChildAt_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.K2Node_Event_IntroType = (int32_t)K2Node_Event_IntroType;
    params.K2Node_Event_IntroDuration = (float)K2Node_Event_IntroDuration;
    params.K2Node_Event_OutroType = (int32_t)K2Node_Event_OutroType;
    params.K2Node_Event_OutroDuration = (float)K2Node_Event_OutroDuration;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_Divide_FloatFloat_ReturnValue_1 = (float)CallFunc_Divide_FloatFloat_ReturnValue_1;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_GetMissionStepBP_ReturnValue = (FString)CallFunc_GetMissionStepBP_ReturnValue;
    params.CallFunc_EqualEqual_StriStri_ReturnValue = (bool)CallFunc_EqualEqual_StriStri_ReturnValue;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue_1;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    params.K2Node_Select_Default = (EMenuReaderInterruptType)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologySeedSelection_C::OnSeedButtonHovered(UIconButtonWidget* Seed_Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.OnSeedButtonHovered"));
    struct Params_OnSeedButtonHovered {
        UIconButtonWidget* Seed_Button; // 0x0
    }; // Size: 0x8
    Params_OnSeedButtonHovered params{};
    params.Seed_Button = (UIconButtonWidget*)Seed_Button;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologySeedSelection_C::OnSeedButtonUnhovered(UIconButtonWidget* Seed_Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.OnSeedButtonUnhovered"));
    struct Params_OnSeedButtonUnhovered {
        UIconButtonWidget* Seed_Button; // 0x0
    }; // Size: 0x8
    Params_OnSeedButtonUnhovered params{};
    params.Seed_Button = (UIconButtonWidget*)Seed_Button;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologySeedSelection_C::HoverFirstSeed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.HoverFirstSeed"));
    struct Params_HoverFirstSeed {
    }; // Size: 0x0
    Params_HoverFirstSeed params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologySeedSelection_C::OnIntroStarted0(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologySeedSelection_C::OnOutroStarted0(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologySeedSelection_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologySeedSelection_C::OnPlantSelected__DelegateSignature(FName PlantID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedSelection.UI_BP_HerbologySeedSelection_C.OnPlantSelected__DelegateSignature"));
    struct Params_OnPlantSelected__DelegateSignature {
        FName PlantID; // 0x0
    }; // Size: 0x8
    Params_OnPlantSelected__DelegateSignature params{};
    params.PlantID = (FName)PlantID;
    ProcessEvent(func, &params);
}
