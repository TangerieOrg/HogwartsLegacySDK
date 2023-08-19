#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UOverlay.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UUI_BP_Oppugno_Indicator_OffScreen_C.hpp"
UUI_BP_Oppugno_Indicator_OffScreen_C* UUI_BP_Oppugno_Indicator_OffScreen_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Reticles/UI_BP_Oppugno_Indicator_OffScreen.UI_BP_Oppugno_Indicator_OffScreen_C");
    return (UUI_BP_Oppugno_Indicator_OffScreen_C*)res;
}
void UUI_BP_Oppugno_Indicator_OffScreen_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Oppugno_Indicator_OffScreen.UI_BP_Oppugno_Indicator_OffScreen_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Oppugno_Indicator_OffScreen_C::RotateIndicator(UObject* Caller, FVector& Vector) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Reticles/UI_BP_Oppugno_Indicator_OffScreen.UI_BP_Oppugno_Indicator_OffScreen_C.RotateIndicator"));
    struct Params_RotateIndicator {
        UObject* Caller; // 0x0
        FVector Vector; // 0x8
    }; // Size: 0x14
    Params_RotateIndicator params{};
    params.Caller = (UObject*)Caller;
    params.Vector = (FVector)Vector;
    ProcessEvent(func, &params);
    Vector = params.Vector;
}
void UUI_BP_Oppugno_Indicator_OffScreen_C::ExecuteUbergraph_UI_BP_Oppugno_Indicator_OffScreen(int32_t EntryPoint, float Temp_float_Variable) {}
