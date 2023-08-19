#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "UFunction.hpp"
#include "ULegendItem.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUI_BP_Skip_C.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_Skip_C* UUI_BP_Skip_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/Cinematics/UI/UI_BP_Skip.UI_BP_Skip_C");
    return (UUI_BP_Skip_C*)res;
}
void UUI_BP_Skip_C::SequenceEvent__ENTRYPOINTUI_BP_Skip_0(UUI_BP_Legend_Horizontal_Screen_C* Legend) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/UI/UI_BP_Skip.UI_BP_Skip_C.SequenceEvent__ENTRYPOINTUI_BP_Skip_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Skip_0 {
        UUI_BP_Legend_Horizontal_Screen_C* Legend; // 0x0
    }; // Size: 0x8
    Params_SequenceEvent__ENTRYPOINTUI_BP_Skip_0 params{};
    params.Legend = (UUI_BP_Legend_Horizontal_Screen_C*)Legend;
    ProcessEvent(func, &params);
}
void UUI_BP_Skip_C::OnSkipHoldReleased(ULegendItem* LegendItem, bool HoldWasCompleted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/UI/UI_BP_Skip.UI_BP_Skip_C.OnSkipHoldReleased"));
    struct Params_OnSkipHoldReleased {
        ULegendItem* LegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
    }; // Size: 0x9
    Params_OnSkipHoldReleased params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    ProcessEvent(func, &params);
}
bool UUI_BP_Skip_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, ULegendItem* CallFunc_GetLegendItem_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, ULegendItem* CallFunc_GetLegendItem_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/UI/UI_BP_Skip.UI_BP_Skip_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        char pad_3[0x5];
        ULegendItem* CallFunc_GetLegendItem_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x10
        char pad_11[0x7];
        ULegendItem* CallFunc_GetLegendItem_ReturnValue_1; // 0x18
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x20
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x24
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x25
    }; // Size: 0x26
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_GetLegendItem_ReturnValue = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_GetLegendItem_ReturnValue_1 = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ULegendItem* UUI_BP_Skip_C::GetSkipLegendItem(ULegendItem* CallFunc_GetLegendItem_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/UI/UI_BP_Skip.UI_BP_Skip_C.GetSkipLegendItem"));
    struct Params_GetSkipLegendItem {
        ULegendItem* ReturnValue; // 0x0
        ULegendItem* CallFunc_GetLegendItem_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSkipLegendItem params{};
    params.CallFunc_GetLegendItem_ReturnValue = (ULegendItem*)CallFunc_GetLegendItem_ReturnValue;
    ProcessEvent(func, &params);
    return (ULegendItem*)params.ReturnValue;
}
bool UUI_BP_Skip_C::Should_Animate_Forward(UWidgetAnimation* InAnimation, bool CallFunc_IsAnimationPlayingForward_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/UI/UI_BP_Skip.UI_BP_Skip_C.Should Animate Forward"));
    struct Params_Should_Animate_Forward {
        UWidgetAnimation* InAnimation; // 0x0
        bool ReturnValue; // 0x8
        bool CallFunc_IsAnimationPlayingForward_ReturnValue; // 0x9
        bool CallFunc_IsVisible_ReturnValue; // 0xa
        bool CallFunc_Not_PreBool_ReturnValue; // 0xb
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0xc
        bool CallFunc_BooleanOR_ReturnValue; // 0xd
    }; // Size: 0xe
    Params_Should_Animate_Forward params{};
    params.InAnimation = (UWidgetAnimation*)InAnimation;
    params.CallFunc_IsAnimationPlayingForward_ReturnValue = (bool)CallFunc_IsAnimationPlayingForward_ReturnValue;
    params.CallFunc_IsVisible_ReturnValue = (bool)CallFunc_IsVisible_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_Skip_C::Refresh_Timer() {}
void UUI_BP_Skip_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/UI/UI_BP_Skip.UI_BP_Skip_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Skip_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/UI/UI_BP_Skip.UI_BP_Skip_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Skip_C::Show() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/UI/UI_BP_Skip.UI_BP_Skip_C.Show"));
    struct Params_Show {
    }; // Size: 0x0
    Params_Show params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Skip_C::Hide() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/UI/UI_BP_Skip.UI_BP_Skip_C.Hide"));
    struct Params_Hide {
    }; // Size: 0x0
    Params_Hide params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Skip_C::OnLegendHidden(UUI_BP_Legend_Horizontal_Screen_C* Legend) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/UI/UI_BP_Skip.UI_BP_Skip_C.OnLegendHidden"));
    struct Params_OnLegendHidden {
        UUI_BP_Legend_Horizontal_Screen_C* Legend; // 0x0
    }; // Size: 0x8
    Params_OnLegendHidden params{};
    params.Legend = (UUI_BP_Legend_Horizontal_Screen_C*)Legend;
    ProcessEvent(func, &params);
}
void UUI_BP_Skip_C::ExecuteUbergraph_UI_BP_Skip(int32_t EntryPoint) {}
