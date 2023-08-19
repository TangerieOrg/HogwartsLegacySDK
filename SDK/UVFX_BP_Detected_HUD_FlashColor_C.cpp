#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UUserWidget.hpp"
#include "UVFX_BP_Detected_HUD_FlashColor_C.hpp"
#include "UWidgetAnimation.hpp"
UVFX_BP_Detected_HUD_FlashColor_C* UVFX_BP_Detected_HUD_FlashColor_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/VFX/Screen_FX/Detected/VFX_BP_Detected_HUD_FlashColor.VFX_BP_Detected_HUD_FlashColor_C");
    return (UVFX_BP_Detected_HUD_FlashColor_C*)res;
}
void UVFX_BP_Detected_HUD_FlashColor_C::PreConstruct0(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Detected/VFX_BP_Detected_HUD_FlashColor.VFX_BP_Detected_HUD_FlashColor_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UVFX_BP_Detected_HUD_FlashColor_C::ExecuteUbergraph_VFX_BP_Detected_HUD_FlashColor(int32_t EntryPoint, bool K2Node_Event_IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Detected/VFX_BP_Detected_HUD_FlashColor.VFX_BP_Detected_HUD_FlashColor_C.ExecuteUbergraph_VFX_BP_Detected_HUD_FlashColor"));
    struct Params_ExecuteUbergraph_VFX_BP_Detected_HUD_FlashColor {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_VFX_BP_Detected_HUD_FlashColor params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    ProcessEvent(func, &params);
}
