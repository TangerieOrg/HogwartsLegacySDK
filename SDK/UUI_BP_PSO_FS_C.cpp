#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UOverlay.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UProgressBar.hpp"
#include "UUI_BP_FullBackgroundSmoke_C.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUI_BP_PSO_FS_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_PSO_FS_C::EmergencyTimeout() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PSO_FS.UI_BP_PSO_FS_C.EmergencyTimeout"));
    struct Params_EmergencyTimeout {
    }; // Size: 0x0
    Params_EmergencyTimeout params{};
    ProcessEvent(func, &params);
}
UUI_BP_PSO_FS_C* UUI_BP_PSO_FS_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FrontendFlow/UI_BP_PSO_FS.UI_BP_PSO_FS_C");
    return (UUI_BP_PSO_FS_C*)res;
}
bool UUI_BP_PSO_FS_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PSO_FS.UI_BP_PSO_FS_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        char pad_3[0x1];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x9
        bool CallFunc_BooleanAND_ReturnValue; // 0xa
        bool CallFunc_BooleanAND_ReturnValue_1; // 0xb
    }; // Size: 0xc
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_PSO_FS_C::AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PSO_FS.UI_BP_PSO_FS_C.AdjustForViewportWidth"));
    struct Params_AdjustForViewportWidth {
        float CurrentWidth; // 0x0
        float CurrentRatio; // 0x4
        float IdealWidth; // 0x8
        float IdealRatio; // 0xc
        FMargin K2Node_MakeStruct_Margin; // 0x10
        float K2Node_MathExpression_ReturnValue; // 0x20
        FMargin K2Node_MakeStruct_Margin_1; // 0x24
        char pad_34[0x4];
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue; // 0x38
        float K2Node_MathExpression_ReturnValue_1; // 0x40
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x44
        char pad_45[0x3];
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0x48
        float CallFunc_BreakVector2D_X; // 0x50
        float CallFunc_BreakVector2D_Y; // 0x54
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x58
    }; // Size: 0x5c
    Params_AdjustForViewportWidth params{};
    params.CurrentWidth = (float)CurrentWidth;
    params.CurrentRatio = (float)CurrentRatio;
    params.IdealWidth = (float)IdealWidth;
    params.IdealRatio = (float)IdealRatio;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue;
    params.K2Node_MathExpression_ReturnValue_1 = (float)K2Node_MathExpression_ReturnValue_1;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_PSO_FS_C::RequestExit(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PSO_FS.UI_BP_PSO_FS_C.RequestExit"));
    struct Params_RequestExit {
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x0
        bool CallFunc_Not_PreBool_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RequestExit params{};
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_PSO_FS_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_PSO_FS_C::PSOUpdate(float Progress) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PSO_FS.UI_BP_PSO_FS_C.PSOUpdate"));
    struct Params_PSOUpdate {
        float Progress; // 0x0
    }; // Size: 0x4
    Params_PSOUpdate params{};
    params.Progress = (float)Progress;
    ProcessEvent(func, &params);
}
void UUI_BP_PSO_FS_C::OnMinDurationCompleted() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PSO_FS.UI_BP_PSO_FS_C.OnMinDurationCompleted"));
    struct Params_OnMinDurationCompleted {
    }; // Size: 0x0
    Params_OnMinDurationCompleted params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PSO_FS_C::StartListening() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PSO_FS.UI_BP_PSO_FS_C.StartListening"));
    struct Params_StartListening {
    }; // Size: 0x0
    Params_StartListening params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PSO_FS_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PSO_FS.UI_BP_PSO_FS_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PSO_FS_C::WidgetAnimationEvt_FrontendFadeOut_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PSO_FS.UI_BP_PSO_FS_C.WidgetAnimationEvt_FrontendFadeOut_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_FrontendFadeOut_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_FrontendFadeOut_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PSO_FS_C::ResolutionSettingsApplied(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PSO_FS.UI_BP_PSO_FS_C.ResolutionSettingsApplied"));
    struct Params_ResolutionSettingsApplied {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ResolutionSettingsApplied params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_PSO_FS_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PSO_FS.UI_BP_PSO_FS_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PSO_FS_C::ExecuteUbergraph_UI_BP_PSO_FS(int32_t EntryPoint) {}
void UUI_BP_PSO_FS_C::PSOComplete__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FrontendFlow/UI_BP_PSO_FS.UI_BP_PSO_FS_C.PSOComplete__DelegateSignature"));
    struct Params_PSOComplete__DelegateSignature {
    }; // Size: 0x0
    Params_PSOComplete__DelegateSignature params{};
    ProcessEvent(func, &params);
}
