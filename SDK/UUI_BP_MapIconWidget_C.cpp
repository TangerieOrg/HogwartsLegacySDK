#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMapIconWidget.hpp"
#include "UObject.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_MapIconWidget_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_MapIconWidget_C::OnHoverRegion(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapIconWidget.UI_BP_MapIconWidget_C.OnHoverRegion"));
    struct Params_OnHoverRegion {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2; // 0x10
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3; // 0x18
    }; // Size: 0x20
    Params_OnHoverRegion params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_1;
    params.CallFunc_PlayAnimation_ReturnValue_2 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_2;
    params.CallFunc_PlayAnimation_ReturnValue_3 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_3;
    ProcessEvent(func, &params);
}
UUI_BP_MapIconWidget_C* UUI_BP_MapIconWidget_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Map/UI_BP_MapIconWidget.UI_BP_MapIconWidget_C");
    return (UUI_BP_MapIconWidget_C*)res;
}
void UUI_BP_MapIconWidget_C::OnHoverMap(bool TitleSwitch, FString Title, TArray<FString>& LegendStrings) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapIconWidget.UI_BP_MapIconWidget_C.OnHoverMap"));
    struct Params_OnHoverMap {
        bool TitleSwitch; // 0x0
        char pad_1[0x7];
        FString Title; // 0x8
        TArray<FString> LegendStrings; // 0x18
    }; // Size: 0x28
    Params_OnHoverMap params{};
    params.TitleSwitch = (bool)TitleSwitch;
    params.Title = (FString)Title;
    params.LegendStrings = (TArray<FString>)LegendStrings;
    ProcessEvent(func, &params);
    LegendStrings = params.LegendStrings;
}
void UUI_BP_MapIconWidget_C::SetIcon(UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapIconWidget.UI_BP_MapIconWidget_C.SetIcon"));
    struct Params_SetIcon {
        UTexture2D* Texture; // 0x0
    }; // Size: 0x8
    Params_SetIcon params{};
    params.Texture = (UTexture2D*)Texture;
    ProcessEvent(func, &params);
}
void UUI_BP_MapIconWidget_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapIconWidget.UI_BP_MapIconWidget_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MapIconWidget_C::WidgetAnimationEvt_MapTitle_Exit_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapIconWidget.UI_BP_MapIconWidget_C.WidgetAnimationEvt_MapTitle_Exit_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_MapTitle_Exit_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_MapTitle_Exit_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MapIconWidget_C::PlayFanfare_Event0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapIconWidget.UI_BP_MapIconWidget_C.PlayFanfare_Event"));
    struct Params_PlayFanfare_Event {
    }; // Size: 0x0
    Params_PlayFanfare_Event params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MapIconWidget_C::RegionIndexEvent(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_MapIconWidget.UI_BP_MapIconWidget_C.RegionIndexEvent"));
    struct Params_RegionIndexEvent {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_RegionIndexEvent params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_MapIconWidget_C::ExecuteUbergraph_UI_BP_MapIconWidget(int32_t EntryPoint) {}
