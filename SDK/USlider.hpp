#pragma once
#include <cstdint>
#include "EOrientation.hpp"
#include "FLinearColor.hpp"
#include "FSliderStyle.hpp"
#include "UWidget.hpp"
#pragma pack(push, 1)
class USlider : public UWidget {
public:
    float Value; // 0x108
    char pad_10c[0x10];
    float MinValue; // 0x11c
    float MaxValue; // 0x120
    char pad_124[0x4];
    FSliderStyle WidgetStyle; // 0x128
    EOrientation Orientation; // 0x468
    char pad_469[0x3];
    FLinearColor SliderBarColor; // 0x46c
    FLinearColor SliderHandleColor; // 0x47c
    bool IndentHandle; // 0x48c
    bool Locked; // 0x48d
    bool MouseUsesStep; // 0x48e
    bool RequiresControllerLock; // 0x48f
    float StepSize; // 0x490
    bool IsFocusable; // 0x494
    char pad_495[0x63];
    static USlider* StaticClass();
    void SetValue(float InValue);
    void SetStepSize(float InValue);
    void SetSliderHandleColor(FLinearColor InValue);
    void SetSliderBarColor(FLinearColor InValue);
    void SetMinValue(float InValue);
    void SetMaxValue(float InValue);
    void SetLocked(bool InValue);
    void SetIndentHandle(bool InValue);
    float GetValue();
    float GetNormalizedValue();
}; // Size: 0x4f8
#pragma pack(pop)
