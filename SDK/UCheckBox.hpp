#pragma once
#include <cstdint>
#include "EButtonClickMethod\Type.hpp"
#include "EButtonPressMethod\Type.hpp"
#include "EButtonTouchMethod\Type.hpp"
#include "ECheckBoxState.hpp"
#include "EHorizontalAlignment.hpp"
#include "FCheckBoxStyle.hpp"
#include "FMargin.hpp"
#include "FSlateColor.hpp"
#include "UContentWidget.hpp"
class USlateWidgetStyleAsset;
class USlateBrushAsset;
#pragma pack(push, 1)
class UCheckBox : public UContentWidget {
public:
    ECheckBoxState CheckedState; // 0x120
    char pad_121[0x17];
    FCheckBoxStyle WidgetStyle; // 0x138
    USlateWidgetStyleAsset* Style; // 0x6b8
    USlateBrushAsset* UncheckedImage; // 0x6c0
    USlateBrushAsset* UncheckedHoveredImage; // 0x6c8
    USlateBrushAsset* UncheckedPressedImage; // 0x6d0
    USlateBrushAsset* CheckedImage; // 0x6d8
    USlateBrushAsset* CheckedHoveredImage; // 0x6e0
    USlateBrushAsset* CheckedPressedImage; // 0x6e8
    USlateBrushAsset* UndeterminedImage; // 0x6f0
    USlateBrushAsset* UndeterminedHoveredImage; // 0x6f8
    USlateBrushAsset* UndeterminedPressedImage; // 0x700
    EHorizontalAlignment HorizontalAlignment; // 0x708
    char pad_709[0x3];
    FMargin Padding; // 0x70c
    char pad_71c[0x4];
    FSlateColor BorderBackgroundColor; // 0x720
    EButtonClickMethod::Type ClickMethod; // 0x748
    EButtonTouchMethod::Type TouchMethod; // 0x749
    EButtonPressMethod::Type PressMethod; // 0x74a
    bool IsFocusable; // 0x74b
    char pad_74c[0x24];
    static UCheckBox* StaticClass();
    void SetTouchMethod(EButtonTouchMethod::Type InTouchMethod);
    void SetPressMethod(EButtonPressMethod::Type InPressMethod);
    void SetIsChecked(bool InIsChecked);
    void SetClickMethod(EButtonClickMethod::Type InClickMethod);
    void SetCheckedState(ECheckBoxState InCheckedState);
    bool IsPressed();
    bool IsChecked();
    ECheckBoxState GetCheckedState();
}; // Size: 0x770
#pragma pack(pop)
