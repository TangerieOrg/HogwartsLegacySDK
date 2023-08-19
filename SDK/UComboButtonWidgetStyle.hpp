#pragma once
#include <cstdint>
#include "FComboButtonStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
#pragma pack(push, 1)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase {
public:
    FComboButtonStyle ComboButtonStyle; // 0x30
    static UComboButtonWidgetStyle* StaticClass();
}; // Size: 0x3e8
#pragma pack(pop)
