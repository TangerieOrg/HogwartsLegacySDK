#include "UAvaUserWidget.hpp"
#include "UFunction.hpp"
#include "USettingsSliderButtonBase.hpp"
#include "USlider.hpp"
USettingsSliderButtonBase* USettingsSliderButtonBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SettingsSliderButtonBase");
    return (USettingsSliderButtonBase*)res;
}
void USettingsSliderButtonBase::SetMouseUsesStep_Internal(USlider* Slider, bool MouseUsesStep) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SettingsSliderButtonBase.SetMouseUsesStep_Internal"));
    struct Params_SetMouseUsesStep_Internal {
        USlider* Slider; // 0x0
        bool MouseUsesStep; // 0x8
    }; // Size: 0x9
    Params_SetMouseUsesStep_Internal params{};
    params.Slider = (USlider*)Slider;
    params.MouseUsesStep = (bool)MouseUsesStep;
    ProcessEvent(func, &params);
}
