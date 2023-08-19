#include "AActor.hpp"
#include "ACharacter.hpp"
#include "AHerb.hpp"
#include "AHerbPlot.hpp"
#include "EHerbGrowthState.hpp"
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UHerbPlotState.hpp"
#include "UImage.hpp"
#include "ULegendItem.hpp"
#include "UObject.hpp"
#include "UOverlay.hpp"
#include "UPhoenixTextBlock.hpp"
#include "URetainerBox.hpp"
#include "UScreen.hpp"
#include "UUI_BP_BackgroundSmoke_C.hpp"
#include "UUI_BP_HerbologyApplyItems_C.hpp"
#include "UUI_BP_HerbologyFertilizerButton_C.hpp"
#include "UUI_BP_HerbologyGrown_C.hpp"
#include "UUI_BP_HerbologyMenu_C.hpp"
#include "UUI_BP_HerbologySeedSelection_C.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
#include "UWidgetSwitcher.hpp"
void UUI_BP_HerbologyMenu_C::SwitchToLeftPlot(FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_IsInLineWithNeighbors_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool Temp_bool_Variable, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FRotator CallFunc_FindLookAtRotation_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, bool K2Node_MathExpression_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, AHerbPlot* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.SwitchToLeftPlot"));
    struct Params_SwitchToLeftPlot {
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x0
        FVector CallFunc_GetActorForwardVector_ReturnValue; // 0xc
        bool CallFunc_IsInLineWithNeighbors_ReturnValue; // 0x18
        char pad_19[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x1c
        bool Temp_bool_Variable; // 0x20
        char pad_21[0x7];
        ACharacter* CallFunc_GetPlayerCharacter_ReturnValue; // 0x28
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x30
        FRotator CallFunc_FindLookAtRotation_ReturnValue; // 0x3c
        FVector CallFunc_GetForwardVector_ReturnValue; // 0x48
        bool K2Node_MathExpression_ReturnValue; // 0x54
        bool CallFunc_BooleanAND_ReturnValue; // 0x55
        bool CallFunc_Not_PreBool_ReturnValue; // 0x56
        char pad_57[0x1];
        AHerbPlot* K2Node_Select_Default; // 0x58
        bool CallFunc_IsValid_ReturnValue; // 0x60
    }; // Size: 0x61
    Params_SwitchToLeftPlot params{};
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_GetActorForwardVector_ReturnValue = (FVector)CallFunc_GetActorForwardVector_ReturnValue;
    params.CallFunc_IsInLineWithNeighbors_ReturnValue = (bool)CallFunc_IsInLineWithNeighbors_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_GetPlayerCharacter_ReturnValue = (ACharacter*)CallFunc_GetPlayerCharacter_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_FindLookAtRotation_ReturnValue = (FRotator)CallFunc_FindLookAtRotation_ReturnValue;
    params.CallFunc_GetForwardVector_ReturnValue = (FVector)CallFunc_GetForwardVector_ReturnValue;
    params.K2Node_MathExpression_ReturnValue = (bool)K2Node_MathExpression_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.K2Node_Select_Default = (AHerbPlot*)K2Node_Select_Default;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::RefreshButtonLegend(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default, UHerbPlotState* CallFunc_GetPlotState_ReturnValue, EHerbGrowthState CallFunc_GetGrowthState_ReturnValue, FName CallFunc_GetPlantID_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, ESlateVisibility K2Node_Select_Default_1, ESlateVisibility K2Node_Select_Default_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.RefreshButtonLegend"));
    struct Params_RefreshButtonLegend {
        ESlateVisibility Temp_byte_Variable; // 0x0
        ESlateVisibility Temp_byte_Variable_1; // 0x1
        bool Temp_bool_Variable; // 0x2
        ESlateVisibility Temp_byte_Variable_2; // 0x3
        ESlateVisibility Temp_byte_Variable_3; // 0x4
        bool Temp_bool_Variable_1; // 0x5
        ESlateVisibility Temp_byte_Variable_4; // 0x6
        ESlateVisibility Temp_byte_Variable_5; // 0x7
        UWidget* CallFunc_GetActiveWidget_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x10
        bool CallFunc_BooleanAND_ReturnValue; // 0x11
        bool Temp_bool_Variable_2; // 0x12
        ESlateVisibility K2Node_Select_Default; // 0x13
        char pad_14[0x4];
        UHerbPlotState* CallFunc_GetPlotState_ReturnValue; // 0x18
        EHerbGrowthState CallFunc_GetGrowthState_ReturnValue; // 0x20
        char pad_21[0x3];
        FName CallFunc_GetPlantID_ReturnValue; // 0x24
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x2c
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x2d
        ESlateVisibility K2Node_Select_Default_1; // 0x2e
        ESlateVisibility K2Node_Select_Default_2; // 0x2f
    }; // Size: 0x30
    Params_RefreshButtonLegend params{};
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_byte_Variable_4 = (ESlateVisibility)Temp_byte_Variable_4;
    params.Temp_byte_Variable_5 = (ESlateVisibility)Temp_byte_Variable_5;
    params.CallFunc_GetActiveWidget_ReturnValue = (UWidget*)CallFunc_GetActiveWidget_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.Temp_bool_Variable_2 = (bool)Temp_bool_Variable_2;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_GetPlotState_ReturnValue = (UHerbPlotState*)CallFunc_GetPlotState_ReturnValue;
    params.CallFunc_GetGrowthState_ReturnValue = (EHerbGrowthState)CallFunc_GetGrowthState_ReturnValue;
    params.CallFunc_GetPlantID_ReturnValue = (FName)CallFunc_GetPlantID_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    params.K2Node_Select_Default_2 = (ESlateVisibility)K2Node_Select_Default_2;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::TriggerPanelChangeWithAnimation(bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.TriggerPanelChangeWithAnimation"));
    struct Params_TriggerPanelChangeWithAnimation {
        bool CallFunc_Not_PreBool_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_TriggerPanelChangeWithAnimation params{};
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
}
UUI_BP_HerbologyMenu_C* UUI_BP_HerbologyMenu_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C");
    return (UUI_BP_HerbologyMenu_C*)res;
}
TArray<FString> UUI_BP_HerbologyMenu_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue) {}
void UUI_BP_HerbologyMenu_C::SetFadingEnabledForPlot(AHerbPlot* HerbPlot, bool FadingEnabled, bool AlsoForParentAcotr, AActor* CallFunc_GetParentActor_ReturnValue, AHerb* CallFunc_GetPlantedHerb_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {}
bool UUI_BP_HerbologyMenu_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, UHerbPlotState* CallFunc_GetPlotState_ReturnValue, FName CallFunc_GetPlantID_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UHerbPlotState* CallFunc_GetPlotState_ReturnValue_1, FName CallFunc_GetPlantID_ReturnValue_1, FName CallFunc_GetFertilizerID_ReturnValue, FName CallFunc_GetPlantByproductID_ReturnValue, bool CallFunc_GetHasInventorySpaceToHarvestPlantOfType_ReturnValue, FName CallFunc_GetItemInventoryFullString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, EHerbGrowthState CallFunc_GetGrowthState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        char pad_3[0x5];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x10
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x11
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x12
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x13
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x14
        char pad_15[0x3];
        UHerbPlotState* CallFunc_GetPlotState_ReturnValue; // 0x18
        FName CallFunc_GetPlantID_ReturnValue; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x28
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x29
        bool CallFunc_Not_PreBool_ReturnValue; // 0x2a
        char pad_2b[0x5];
        UHerbPlotState* CallFunc_GetPlotState_ReturnValue_1; // 0x30
        FName CallFunc_GetPlantID_ReturnValue_1; // 0x38
        FName CallFunc_GetFertilizerID_ReturnValue; // 0x40
        FName CallFunc_GetPlantByproductID_ReturnValue; // 0x48
        bool CallFunc_GetHasInventorySpaceToHarvestPlantOfType_ReturnValue; // 0x50
        char pad_51[0x3];
        FName CallFunc_GetItemInventoryFullString_ReturnValue; // 0x54
        char pad_5c[0x4];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x60
        EHerbGrowthState CallFunc_GetGrowthState_ReturnValue; // 0x70
        bool K2Node_SwitchEnum_CmpSuccess; // 0x71
    }; // Size: 0x72
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_GetPlotState_ReturnValue = (UHerbPlotState*)CallFunc_GetPlotState_ReturnValue;
    params.CallFunc_GetPlantID_ReturnValue = (FName)CallFunc_GetPlantID_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_GetPlotState_ReturnValue_1 = (UHerbPlotState*)CallFunc_GetPlotState_ReturnValue_1;
    params.CallFunc_GetPlantID_ReturnValue_1 = (FName)CallFunc_GetPlantID_ReturnValue_1;
    params.CallFunc_GetFertilizerID_ReturnValue = (FName)CallFunc_GetFertilizerID_ReturnValue;
    params.CallFunc_GetPlantByproductID_ReturnValue = (FName)CallFunc_GetPlantByproductID_ReturnValue;
    params.CallFunc_GetHasInventorySpaceToHarvestPlantOfType_ReturnValue = (bool)CallFunc_GetHasInventorySpaceToHarvestPlantOfType_ReturnValue;
    params.CallFunc_GetItemInventoryFullString_ReturnValue = (FName)CallFunc_GetItemInventoryFullString_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_GetGrowthState_ReturnValue = (EHerbGrowthState)CallFunc_GetGrowthState_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_HerbologyMenu_C::RemoveNoFadeTag(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.RemoveNoFadeTag"));
    struct Params_RemoveNoFadeTag {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_RemoveNoFadeTag params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::SwitchToRightPlot(FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_IsInLineWithNeighbors_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool Temp_bool_Variable, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FRotator CallFunc_FindLookAtRotation_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, bool K2Node_MathExpression_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, AHerbPlot* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.SwitchToRightPlot"));
    struct Params_SwitchToRightPlot {
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x0
        FVector CallFunc_GetActorForwardVector_ReturnValue; // 0xc
        bool CallFunc_IsInLineWithNeighbors_ReturnValue; // 0x18
        char pad_19[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x1c
        bool Temp_bool_Variable; // 0x20
        char pad_21[0x7];
        ACharacter* CallFunc_GetPlayerCharacter_ReturnValue; // 0x28
        FVector CallFunc_K2_GetActorLocation_ReturnValue_1; // 0x30
        FRotator CallFunc_FindLookAtRotation_ReturnValue; // 0x3c
        FVector CallFunc_GetForwardVector_ReturnValue; // 0x48
        bool K2Node_MathExpression_ReturnValue; // 0x54
        bool CallFunc_BooleanAND_ReturnValue; // 0x55
        bool CallFunc_Not_PreBool_ReturnValue; // 0x56
        char pad_57[0x1];
        AHerbPlot* K2Node_Select_Default; // 0x58
        bool CallFunc_IsValid_ReturnValue; // 0x60
    }; // Size: 0x61
    Params_SwitchToRightPlot params{};
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_GetActorForwardVector_ReturnValue = (FVector)CallFunc_GetActorForwardVector_ReturnValue;
    params.CallFunc_IsInLineWithNeighbors_ReturnValue = (bool)CallFunc_IsInLineWithNeighbors_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_GetPlayerCharacter_ReturnValue = (ACharacter*)CallFunc_GetPlayerCharacter_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue_1 = (FVector)CallFunc_K2_GetActorLocation_ReturnValue_1;
    params.CallFunc_FindLookAtRotation_ReturnValue = (FRotator)CallFunc_FindLookAtRotation_ReturnValue;
    params.CallFunc_GetForwardVector_ReturnValue = (FVector)CallFunc_GetForwardVector_ReturnValue;
    params.K2Node_MathExpression_ReturnValue = (bool)K2Node_MathExpression_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.K2Node_Select_Default = (AHerbPlot*)K2Node_Select_Default;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::BndEvt__UI_BP_HerbologyMenu_NavRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.BndEvt__UI_BP_HerbologyMenu_NavRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_HerbologyMenu_NavRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_HerbologyMenu_NavRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::RefreshForHerbPlot() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.RefreshForHerbPlot"));
    struct Params_RefreshForHerbPlot {
    }; // Size: 0x0
    Params_RefreshForHerbPlot params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::OnFertilizerSelected(FName FertilizerID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.OnFertilizerSelected"));
    struct Params_OnFertilizerSelected {
        FName FertilizerID; // 0x0
    }; // Size: 0x8
    Params_OnFertilizerSelected params{};
    params.FertilizerID = (FName)FertilizerID;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::BeginInputTimeout(float TimeoutTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.BeginInputTimeout"));
    struct Params_BeginInputTimeout {
        float TimeoutTime; // 0x0
    }; // Size: 0x4
    Params_BeginInputTimeout params{};
    params.TimeoutTime = (float)TimeoutTime;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::OnOutroEnded(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.OnOutroEnded"));
    struct Params_OnOutroEnded {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_OnOutroEnded params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::BndEvt__UI_BP_HerbologyMenu_ApplyItemsWidget_K2Node_ComponentBoundEvent_2_OnFertilizerHovered__DelegateSignature(UUI_BP_HerbologyFertilizerButton_C* FertilizerButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.BndEvt__UI_BP_HerbologyMenu_ApplyItemsWidget_K2Node_ComponentBoundEvent_2_OnFertilizerHovered__DelegateSignature"));
    struct Params_BndEvt__UI_BP_HerbologyMenu_ApplyItemsWidget_K2Node_ComponentBoundEvent_2_OnFertilizerHovered__DelegateSignature {
        UUI_BP_HerbologyFertilizerButton_C* FertilizerButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_HerbologyMenu_ApplyItemsWidget_K2Node_ComponentBoundEvent_2_OnFertilizerHovered__DelegateSignature params{};
    params.FertilizerButton = (UUI_BP_HerbologyFertilizerButton_C*)FertilizerButton;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::OnIntroEnded(int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.OnIntroEnded"));
    struct Params_OnIntroEnded {
        int32_t IntroType; // 0x0
    }; // Size: 0x4
    Params_OnIntroEnded params{};
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::ApplyItemsWidgetRequiresLegendUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.ApplyItemsWidgetRequiresLegendUpdate"));
    struct Params_ApplyItemsWidgetRequiresLegendUpdate {
    }; // Size: 0x0
    Params_ApplyItemsWidgetRequiresLegendUpdate params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::DisableFadingForHerbPlot() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.DisableFadingForHerbPlot"));
    struct Params_DisableFadingForHerbPlot {
    }; // Size: 0x0
    Params_DisableFadingForHerbPlot params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::OnPlantSelected(FName PlantID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.OnPlantSelected"));
    struct Params_OnPlantSelected {
        FName PlantID; // 0x0
    }; // Size: 0x8
    Params_OnPlantSelected params{};
    params.PlantID = (FName)PlantID;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::BndEvt__UI_BP_HerbologyMenu_NavLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyMenu.UI_BP_HerbologyMenu_C.BndEvt__UI_BP_HerbologyMenu_NavLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_HerbologyMenu_NavLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_HerbologyMenu_NavLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyMenu_C::ExecuteUbergraph_UI_BP_HerbologyMenu(int32_t EntryPoint) {}
