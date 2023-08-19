#include "EDescendantScrollDestination.hpp"
#include "EOrientation.hpp"
#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FMargin.hpp"
#include "FPointerEvent.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FScrollBarStyle.hpp"
#include "FScrollBoxStyle.hpp"
#include "FUMGConsolidatedAxisInputData.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UInvalidationBox.hpp"
#include "UItemScrollBox.hpp"
#include "UNamedSlot.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_SimpleScrollBox_C.hpp"
UUI_BP_SimpleScrollBox_C* UUI_BP_SimpleScrollBox_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C");
    return (UUI_BP_SimpleScrollBox_C*)res;
}
void UUI_BP_SimpleScrollBox_C::SetCanCache(bool CanCache) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.SetCanCache"));
    struct Params_SetCanCache {
        bool CanCache; // 0x0
    }; // Size: 0x1
    Params_SetCanCache params{};
    params.CanCache = (bool)CanCache;
    ProcessEvent(func, &params);
}
void UUI_BP_SimpleScrollBox_C::Set_Scrollbar_Thickness(FVector2D Thickness) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.Set Scrollbar Thickness"));
    struct Params_Set_Scrollbar_Thickness {
        FVector2D Thickness; // 0x0
    }; // Size: 0x8
    Params_Set_Scrollbar_Thickness params{};
    params.Thickness = (FVector2D)Thickness;
    ProcessEvent(func, &params);
}
void UUI_BP_SimpleScrollBox_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_SimpleScrollBox_C::OnInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.OnInitialized"));
    struct Params_OnInitialized {
    }; // Size: 0x0
    Params_OnInitialized params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SimpleScrollBox_C::OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.OnMouseEnter"));
    struct Params_OnMouseEnter {
        FGeometry MyGeometry; // 0x0
        FPointerEvent MouseEvent; // 0x38
    }; // Size: 0xa8
    Params_OnMouseEnter params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.MouseEvent = (FPointerEvent)MouseEvent;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
}
void UUI_BP_SimpleScrollBox_C::BndEvt__InternalScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.BndEvt__InternalScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature"));
    struct Params_BndEvt__InternalScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature {
        float CurrentOffset; // 0x0
    }; // Size: 0x4
    Params_BndEvt__InternalScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature params{};
    params.CurrentOffset = (float)CurrentOffset;
    ProcessEvent(func, &params);
}
void UUI_BP_SimpleScrollBox_C::OnMouseLeave(FPointerEvent& MouseEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.OnMouseLeave"));
    struct Params_OnMouseLeave {
        FPointerEvent MouseEvent; // 0x0
    }; // Size: 0x70
    Params_OnMouseLeave params{};
    params.MouseEvent = (FPointerEvent)MouseEvent;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
}
void UUI_BP_SimpleScrollBox_C::BlueprintConsolidatedUMGInputAxis(FUMGConsolidatedAxisInputData& AxisInputData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.BlueprintConsolidatedUMGInputAxis"));
    struct Params_BlueprintConsolidatedUMGInputAxis {
        FUMGConsolidatedAxisInputData AxisInputData; // 0x0
    }; // Size: 0x30
    Params_BlueprintConsolidatedUMGInputAxis params{};
    params.AxisInputData = (FUMGConsolidatedAxisInputData)AxisInputData;
    ProcessEvent(func, &params);
    AxisInputData = params.AxisInputData;
}
void UUI_BP_SimpleScrollBox_C::BlueprintFocusLost() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.BlueprintFocusLost"));
    struct Params_BlueprintFocusLost {
    }; // Size: 0x0
    Params_BlueprintFocusLost params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SimpleScrollBox_C::ExecuteUbergraph_UI_BP_SimpleScrollBox(int32_t EntryPoint, bool CallFunc_IsHovered_ReturnValue, FPointerEvent K2Node_Event_MouseEvent, FUMGConsolidatedAxisInputData K2Node_Event_AxisInputData, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Abs_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float K2Node_ComponentBoundEvent_CurrentOffset, FGeometry K2Node_Event_MyGeometry, FPointerEvent K2Node_Event_MouseEvent_1, bool K2Node_Event_IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.ExecuteUbergraph_UI_BP_SimpleScrollBox"));
    struct Params_ExecuteUbergraph_UI_BP_SimpleScrollBox {
        int32_t EntryPoint; // 0x0
        bool CallFunc_IsHovered_ReturnValue; // 0x4
        char pad_5[0x3];
        FPointerEvent K2Node_Event_MouseEvent; // 0x8
        FUMGConsolidatedAxisInputData K2Node_Event_AxisInputData; // 0x78
        float CallFunc_BreakVector2D_X; // 0xa8
        float CallFunc_BreakVector2D_Y; // 0xac
        float CallFunc_Abs_ReturnValue; // 0xb0
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0xb4
        bool CallFunc_BooleanAND_ReturnValue; // 0xb5
        char pad_b6[0x2];
        float K2Node_ComponentBoundEvent_CurrentOffset; // 0xb8
        FGeometry K2Node_Event_MyGeometry; // 0xbc
        char pad_f4[0x4];
        FPointerEvent K2Node_Event_MouseEvent_1; // 0xf8
        bool K2Node_Event_IsDesignTime; // 0x168
    }; // Size: 0x169
    Params_ExecuteUbergraph_UI_BP_SimpleScrollBox params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_IsHovered_ReturnValue = (bool)CallFunc_IsHovered_ReturnValue;
    params.K2Node_Event_MouseEvent = (FPointerEvent)K2Node_Event_MouseEvent;
    params.K2Node_Event_AxisInputData = (FUMGConsolidatedAxisInputData)K2Node_Event_AxisInputData;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Abs_ReturnValue = (float)CallFunc_Abs_ReturnValue;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.K2Node_ComponentBoundEvent_CurrentOffset = (float)K2Node_ComponentBoundEvent_CurrentOffset;
    params.K2Node_Event_MyGeometry = (FGeometry)K2Node_Event_MyGeometry;
    params.K2Node_Event_MouseEvent_1 = (FPointerEvent)K2Node_Event_MouseEvent_1;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_SimpleScrollBox_C::ScrollFocusLost__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_SimpleScrollBox.UI_BP_SimpleScrollBox_C.ScrollFocusLost__DelegateSignature"));
    struct Params_ScrollFocusLost__DelegateSignature {
    }; // Size: 0x0
    Params_ScrollFocusLost__DelegateSignature params{};
    ProcessEvent(func, &params);
}
