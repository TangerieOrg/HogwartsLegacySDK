#pragma once
#include <cstdint>
#include "EOrientation.hpp"
#include "FAkPropertyToControl.hpp"
#include "FAkWwiseItemToControl.hpp"
#include "FGuid.hpp"
#include "FLinearColor.hpp"
#include "FSliderStyle.hpp"
#include "UWidget.hpp"
#pragma pack(push, 1)
class UAkSlider : public UWidget {
public:
    float Value; // 0x108
    char pad_10c[0x14];
    FSliderStyle WidgetStyle; // 0x120
    EOrientation Orientation; // 0x460
    char pad_461[0x3];
    FLinearColor SliderBarColor; // 0x464
    FLinearColor SliderHandleColor; // 0x474
    bool IndentHandle; // 0x484
    bool Locked; // 0x485
    char pad_486[0x2];
    float StepSize; // 0x488
    bool IsFocusable; // 0x48c
    char pad_48d[0x3];
    FAkPropertyToControl ThePropertyToControl; // 0x490
    FAkWwiseItemToControl ItemToControl; // 0x4a0
    char pad_4e0[0x50];
    static UAkSlider* StaticClass();
    void SetValue(float InValue);
    void SetStepSize(float InValue);
    void SetSliderHandleColor(FLinearColor InValue);
    void SetSliderBarColor(FLinearColor InValue);
    void SetLocked(bool InValue);
    void SetIndentHandle(bool InValue);
    void SetAkSliderItemProperty(FString ItemProperty);
    void SetAkSliderItemId(FGuid& ItemId);
    float GetValue();
    FString GetAkSliderItemProperty();
    FGuid GetAkSliderItemId();
}; // Size: 0x530
#pragma pack(pop)
