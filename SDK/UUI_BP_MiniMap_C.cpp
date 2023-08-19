#include "EMiniMapSizeOption.hpp"
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMinimapManager.hpp"
#include "UMinimapRetentionBox.hpp"
#include "UObject.hpp"
#include "UOverlay.hpp"
#include "URetainerBox.hpp"
#include "UUI_BP_MiniMap_C.hpp"
#include "UUI_BP_MinimapDungeon_C.hpp"
#include "UUI_BP_MinimapHogsmeade_C.hpp"
#include "UUI_BP_MinimapHogwarts_C.hpp"
#include "UUI_BP_MinimapOverland_C.hpp"
#include "UUI_BP_MinimapSanctuary_C.hpp"
#include "UUI_BP_MinimapTents_C.hpp"
#include "UUI_BP_MinimapTutorial_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_MiniMap_C* UUI_BP_MiniMap_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C");
    return (UUI_BP_MiniMap_C*)res;
}
void UUI_BP_MiniMap_C::AnimationIntroDone() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.AnimationIntroDone"));
    struct Params_AnimationIntroDone {
    }; // Size: 0x0
    Params_AnimationIntroDone params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::TogglePOIFlash(bool TurnOn, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.TogglePOIFlash"));
    struct Params_TogglePOIFlash {
        bool TurnOn; // 0x0
        ESlateVisibility Temp_byte_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable_1; // 0x2
        bool Temp_bool_Variable; // 0x3
        ESlateVisibility K2Node_Select_Default; // 0x4
        char pad_5[0x3];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_TogglePOIFlash params{};
    params.TurnOn = (bool)TurnOn;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::TurnOnCloudyMiniMapDarkEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.TurnOnCloudyMiniMapDarkEvent"));
    struct Params_TurnOnCloudyMiniMapDarkEvent {
    }; // Size: 0x0
    Params_TurnOnCloudyMiniMapDarkEvent params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::RevealMiniMapEvent(bool InstantIntro) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.RevealMiniMapEvent"));
    struct Params_RevealMiniMapEvent {
        bool InstantIntro; // 0x0
    }; // Size: 0x1
    Params_RevealMiniMapEvent params{};
    params.InstantIntro = (bool)InstantIntro;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::Play_Mini_Map_Outro(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {}
void UUI_BP_MiniMap_C::InPOIRange(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.InPOIRange"));
    struct Params_InPOIRange {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_InPOIRange params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::AnimationOutroDone() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.AnimationOutroDone"));
    struct Params_AnimationOutroDone {
    }; // Size: 0x0
    Params_AnimationOutroDone params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::SetOpacityMiniMapEvent(float Opacity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.SetOpacityMiniMapEvent"));
    struct Params_SetOpacityMiniMapEvent {
        float Opacity; // 0x0
    }; // Size: 0x4
    Params_SetOpacityMiniMapEvent params{};
    params.Opacity = (float)Opacity;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::PlayMiniMapIntro(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {}
void UUI_BP_MiniMap_C::ShowMiniMapEvent(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.ShowMiniMapEvent"));
    struct Params_ShowMiniMapEvent {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_ShowMiniMapEvent params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::UnrevealMiniMapEvent(bool InstantIntro) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.UnrevealMiniMapEvent"));
    struct Params_UnrevealMiniMapEvent {
        bool InstantIntro; // 0x0
    }; // Size: 0x1
    Params_UnrevealMiniMapEvent params{};
    params.InstantIntro = (bool)InstantIntro;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::ShowPathLayerEvent(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.ShowPathLayerEvent"));
    struct Params_ShowPathLayerEvent {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_ShowPathLayerEvent params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::TurnOffCloudyMiniMapEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.TurnOffCloudyMiniMapEvent"));
    struct Params_TurnOffCloudyMiniMapEvent {
    }; // Size: 0x0
    Params_TurnOffCloudyMiniMapEvent params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::SetIntrusionAlertOnBP(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.SetIntrusionAlertOnBP"));
    struct Params_SetIntrusionAlertOnBP {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_SetIntrusionAlertOnBP params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::DistanceToPOI(UObject* Caller, float float) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.DistanceToPOI"));
    struct Params_DistanceToPOI {
        UObject* Caller; // 0x0
        float float; // 0x8
    }; // Size: 0xc
    Params_DistanceToPOI params{};
    params.Caller = (UObject*)Caller;
    params.float = (float)float;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::WidgetAnimationEvt_POI_Ring_Pulse_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.WidgetAnimationEvt_POI_Ring_Pulse_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_POI_Ring_Pulse_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_POI_Ring_Pulse_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::Repulse() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.Repulse"));
    struct Params_Repulse {
    }; // Size: 0x0
    Params_Repulse params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::POICollectedNotification(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.POICollectedNotification"));
    struct Params_POICollectedNotification {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_POICollectedNotification params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::StartMinimapTutorial(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.StartMinimapTutorial"));
    struct Params_StartMinimapTutorial {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_StartMinimapTutorial params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::MinimapTutorialComplete(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.MinimapTutorialComplete"));
    struct Params_MinimapTutorialComplete {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_MinimapTutorialComplete params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::TurnOnCloudyMiniMapEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.TurnOnCloudyMiniMapEvent"));
    struct Params_TurnOnCloudyMiniMapEvent {
    }; // Size: 0x0
    Params_TurnOnCloudyMiniMapEvent params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::SetVisibleOpacityMiniMapEvent(bool Visible, float Opacity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.SetVisibleOpacityMiniMapEvent"));
    struct Params_SetVisibleOpacityMiniMapEvent {
        bool Visible; // 0x0
        char pad_1[0x3];
        float Opacity; // 0x4
    }; // Size: 0x8
    Params_SetVisibleOpacityMiniMapEvent params{};
    params.Visible = (bool)Visible;
    params.Opacity = (float)Opacity;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::fadeInSimple() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.fadeInSimple"));
    struct Params_fadeInSimple {
    }; // Size: 0x0
    Params_fadeInSimple params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::EventTurnOnFelixFelicisMap() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.EventTurnOnFelixFelicisMap"));
    struct Params_EventTurnOnFelixFelicisMap {
    }; // Size: 0x0
    Params_EventTurnOnFelixFelicisMap params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::fadeOutSimple() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.fadeOutSimple"));
    struct Params_fadeOutSimple {
    }; // Size: 0x0
    Params_fadeOutSimple params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::SetOpacityQucikMiniMapEvent(float Opacity, float MapOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.SetOpacityQucikMiniMapEvent"));
    struct Params_SetOpacityQucikMiniMapEvent {
        float Opacity; // 0x0
        float MapOpacity; // 0x4
    }; // Size: 0x8
    Params_SetOpacityQucikMiniMapEvent params{};
    params.Opacity = (float)Opacity;
    params.MapOpacity = (float)MapOpacity;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::MinimapScaleChanged(EMiniMapSizeOption MiniMapSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.MinimapScaleChanged"));
    struct Params_MinimapScaleChanged {
        EMiniMapSizeOption MiniMapSize; // 0x0
    }; // Size: 0x1
    Params_MinimapScaleChanged params{};
    params.MiniMapSize = (EMiniMapSizeOption)MiniMapSize;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::EventTurnOffFelixFelicisMap() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.EventTurnOffFelixFelicisMap"));
    struct Params_EventTurnOffFelixFelicisMap {
    }; // Size: 0x0
    Params_EventTurnOffFelixFelicisMap params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::FelixFelicisPotionStart(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.FelixFelicisPotionStart"));
    struct Params_FelixFelicisPotionStart {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_FelixFelicisPotionStart params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::FelixFelicisPotionStop(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.FelixFelicisPotionStop"));
    struct Params_FelixFelicisPotionStop {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_FelixFelicisPotionStop params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::DoMapTransitionStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.DoMapTransitionStart"));
    struct Params_DoMapTransitionStart {
    }; // Size: 0x0
    Params_DoMapTransitionStart params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::DoMapTransitionEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.DoMapTransitionEnd"));
    struct Params_DoMapTransitionEnd {
    }; // Size: 0x0
    Params_DoMapTransitionEnd params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MiniMap_C::ExecuteUbergraph_UI_BP_MiniMap(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, EMiniMapSizeOption Temp_byte_Variable) {}
void UUI_BP_MiniMap_C::OnMinimapScaleChanged__DelegateSignature(EMiniMapSizeOption NewMapSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/MiniMap/UI_BP_MiniMap.UI_BP_MiniMap_C.OnMinimapScaleChanged__DelegateSignature"));
    struct Params_OnMinimapScaleChanged__DelegateSignature {
        EMiniMapSizeOption NewMapSize; // 0x0
    }; // Size: 0x1
    Params_OnMinimapScaleChanged__DelegateSignature params{};
    params.NewMapSize = (EMiniMapSizeOption)NewMapSize;
    ProcessEvent(func, &params);
}
