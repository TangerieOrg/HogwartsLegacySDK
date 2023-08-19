#pragma once
#include <cstdint>
#include "EButtonClickMethod\Type.hpp"
#include "EButtonPressMethod\Type.hpp"
#include "EButtonTouchMethod\Type.hpp"
#include "FButtonStyle.hpp"
#include "FLinearColor.hpp"
#include "UContentWidget.hpp"
class USlateWidgetStyleAsset;
#pragma pack(push, 1)
class UButton : public UContentWidget {
public:
    USlateWidgetStyleAsset* Style; // 0x120
    FButtonStyle WidgetStyle; // 0x128
    FLinearColor ColorAndOpacity; // 0x3a0
    FLinearColor BackgroundColor; // 0x3b0
    EButtonClickMethod::Type ClickMethod; // 0x3c0
    EButtonTouchMethod::Type TouchMethod; // 0x3c1
    EButtonPressMethod::Type PressMethod; // 0x3c2
    bool IsFocusable; // 0x3c3
    char pad_3c4[0x64];
    static UButton* StaticClass();
    void SetTouchMethod(EButtonTouchMethod::Type InTouchMethod);
    void SetStyle(FButtonStyle& InStyle);
    void SetPressMethod(EButtonPressMethod::Type InPressMethod);
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    void SetClickMethod(EButtonClickMethod::Type InClickMethod);
    void SetBackgroundColor(FLinearColor InBackgroundColor);
    bool IsPressed();
}; // Size: 0x428
#pragma pack(pop)
