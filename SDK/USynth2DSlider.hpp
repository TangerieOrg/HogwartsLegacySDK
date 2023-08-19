#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FSynth2DSliderStyle.hpp"
#include "FVector2D.hpp"
#include "UWidget.hpp"
#pragma pack(push, 1)
class USynth2DSlider : public UWidget {
public:
    float ValueX; // 0x108
    float ValueY; // 0x10c
    char pad_110[0x20];
    FSynth2DSliderStyle WidgetStyle; // 0x130
    FLinearColor SliderHandleColor; // 0x3e8
    bool IndentHandle; // 0x3f8
    bool Locked; // 0x3f9
    char pad_3fa[0x2];
    float StepSize; // 0x3fc
    bool IsFocusable; // 0x400
    char pad_401[0x77];
    static USynth2DSlider* StaticClass();
    void SetValue(FVector2D InValue);
    void SetStepSize(float InValue);
    void SetSliderHandleColor(FLinearColor InValue);
    void SetLocked(bool InValue);
    void SetIndentHandle(bool InValue);
    FVector2D GetValue();
}; // Size: 0x478
#pragma pack(pop)
