#pragma once
#include <cstdint>
#include "ETextCommit\Type.hpp"
#include "ETextJustify\Type.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FSpinBoxStyle.hpp"
#include "UWidget.hpp"
class USlateWidgetStyleAsset;
#pragma pack(push, 1)
class USpinBox : public UWidget {
public:
    float Value; // 0x108
    char pad_10c[0x14];
    FSpinBoxStyle WidgetStyle; // 0x120
    USlateWidgetStyleAsset* Style; // 0x408
    int32_t MinFractionalDigits; // 0x410
    int32_t MaxFractionalDigits; // 0x414
    bool bAlwaysUsesDeltaSnap; // 0x418
    char pad_419[0x3];
    float Delta; // 0x41c
    float SliderExponent; // 0x420
    char pad_424[0x4];
    FSlateFontInfo Font; // 0x428
    ETextJustify::Type Justification; // 0x480
    char pad_481[0x3];
    float MinDesiredWidth; // 0x484
    bool ClearKeyboardFocusOnCommit; // 0x488
    bool SelectAllTextOnCommit; // 0x489
    char pad_48a[0x6];
    FSlateColor ForegroundColor; // 0x490
    char pad_4b8[0x40];
    uint8_t bOverride_MinValue : 1; // 0x4f8
    uint8_t bOverride_MaxValue : 1; // 0x4f8
    uint8_t bOverride_MinSliderValue : 1; // 0x4f8
    uint8_t bOverride_MaxSliderValue : 1; // 0x4f8
    uint8_t pad_bitfield_4f8_4 : 4;
    char pad_4f9[0x3];
    float MinValue; // 0x4fc
    float MaxValue; // 0x500
    float MinSliderValue; // 0x504
    float MaxSliderValue; // 0x508
    char pad_50c[0x14];
    static USpinBox* StaticClass();
    void SetValue(float NewValue);
    void SetMinValue(float NewValue);
    void SetMinSliderValue(float NewValue);
    void SetMinFractionalDigits(int32_t NewValue);
    void SetMaxValue(float NewValue);
    void SetMaxSliderValue(float NewValue);
    void SetMaxFractionalDigits(int32_t NewValue);
    void SetForegroundColor(FSlateColor InForegroundColor);
    void SetDelta(float NewValue);
    void SetAlwaysUsesDeltaSnap(bool bNewValue);
    void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit::Type CommitMethod);
    void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void OnSpinBoxBeginSliderMovement__DelegateSignature();
    float GetValue();
    float GetMinValue();
    float GetMinSliderValue();
    int32_t GetMinFractionalDigits();
    float GetMaxValue();
    float GetMaxSliderValue();
    int32_t GetMaxFractionalDigits();
    float GetDelta();
    bool GetAlwaysUsesDeltaSnap();
    void ClearMinValue();
    void ClearMinSliderValue();
    void ClearMaxValue();
    void ClearMaxSliderValue();
}; // Size: 0x520
#pragma pack(pop)
