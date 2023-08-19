#pragma once
#include <cstdint>
#include "UAvaUserWidget.hpp"
class USlider;
#pragma pack(push, 1)
class USettingsSliderButtonBase : public UAvaUserWidget {
public:
    static USettingsSliderButtonBase* StaticClass();
    void SetMouseUsesStep_Internal(USlider* Slider, bool MouseUsesStep);
}; // Size: 0x328
#pragma pack(pop)
