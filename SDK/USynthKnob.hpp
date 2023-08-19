#pragma once
#include <cstdint>
#include "FSynthKnobStyle.hpp"
#include "UWidget.hpp"
#pragma pack(push, 1)
class USynthKnob : public UWidget {
public:
    float Value; // 0x108
    float StepSize; // 0x10c
    float MouseSpeed; // 0x110
    float MouseFineTuneSpeed; // 0x114
    uint8_t ShowTooltipInfo : 1; // 0x118
    uint8_t pad_bitfield_118_1 : 7;
    char pad_119[0x47];
    FSynthKnobStyle WidgetStyle; // 0x160
    bool Locked; // 0x398
    bool IsFocusable; // 0x399
    char pad_39a[0x66];
    static USynthKnob* StaticClass();
    void SetValue(float InValue);
    void SetStepSize(float InValue);
    void SetLocked(bool InValue);
    float GetValue();
}; // Size: 0x400
#pragma pack(pop)
