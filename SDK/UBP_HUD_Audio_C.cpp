#include "APawn.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBP_HUD_Audio_C.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UPhoenixGameSettings.hpp"
#include "UUIAccessibilityAudioCueWidget.hpp"
UBP_HUD_Audio_C* UBP_HUD_Audio_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/AudioVisualizer/BP_HUD_Audio.BP_HUD_Audio_C");
    return (UBP_HUD_Audio_C*)res;
}
void UBP_HUD_Audio_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/AudioVisualizer/BP_HUD_Audio.BP_HUD_Audio_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UBP_HUD_Audio_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/AudioVisualizer/BP_HUD_Audio.BP_HUD_Audio_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UBP_HUD_Audio_C::ExecuteUbergraph_BP_HUD_Audio(int32_t EntryPoint, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UObject* K2Node_CustomEvent_Caller_1, UObject* K2Node_CustomEvent_Caller, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue) {}
void UBP_HUD_Audio_C::HideHUD(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/AudioVisualizer/BP_HUD_Audio.BP_HUD_Audio_C.HideHUD"));
    struct Params_HideHUD {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_HideHUD params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBP_HUD_Audio_C::ShowHUD(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/AudioVisualizer/BP_HUD_Audio.BP_HUD_Audio_C.ShowHUD"));
    struct Params_ShowHUD {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ShowHUD params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
