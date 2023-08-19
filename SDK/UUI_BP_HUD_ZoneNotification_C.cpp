#include "FPointerToUberGraphFrame.hpp"
#include "UBorder.hpp"
#include "UFunction.hpp"
#include "UUI_BP_HUD_ZoneNotification_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
#include "UZoneNotification.hpp"
UUI_BP_HUD_ZoneNotification_C* UUI_BP_HUD_ZoneNotification_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/HudZoneNotification/UI_BP_HUD_ZoneNotification.UI_BP_HUD_ZoneNotification_C");
    return (UUI_BP_HUD_ZoneNotification_C*)res;
}
void UUI_BP_HUD_ZoneNotification_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HudZoneNotification/UI_BP_HUD_ZoneNotification.UI_BP_HUD_ZoneNotification_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HUD_ZoneNotification_C::HideNotificationBP0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HudZoneNotification/UI_BP_HUD_ZoneNotification.UI_BP_HUD_ZoneNotification_C.HideNotificationBP"));
    struct Params_HideNotificationBP {
    }; // Size: 0x0
    Params_HideNotificationBP params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HUD_ZoneNotification_C::DisplayNotificationBP0(bool PlaySound) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HudZoneNotification/UI_BP_HUD_ZoneNotification.UI_BP_HUD_ZoneNotification_C.DisplayNotificationBP"));
    struct Params_DisplayNotificationBP {
        bool PlaySound; // 0x0
    }; // Size: 0x1
    Params_DisplayNotificationBP params{};
    params.PlaySound = (bool)PlaySound;
    ProcessEvent(func, &params);
}
void UUI_BP_HUD_ZoneNotification_C::ExecuteUbergraph_UI_BP_HUD_ZoneNotification(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool K2Node_Event_PlaySound, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {}
void UUI_BP_HUD_ZoneNotification_C::HideAnimationFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/HudZoneNotification/UI_BP_HUD_ZoneNotification.UI_BP_HUD_ZoneNotification_C.HideAnimationFinished"));
    struct Params_HideAnimationFinished {
    }; // Size: 0x0
    Params_HideAnimationFinished params{};
    ProcessEvent(func, &params);
}
