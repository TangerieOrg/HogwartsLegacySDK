#pragma once
#include <cstdint>
#include "FComboButtonStyle.hpp"
#include "FSlateSound.hpp"
#include "FSlateWidgetStyle.hpp"
#pragma pack(push, 1)
struct FComboBoxStyle : public FSlateWidgetStyle {
    FComboButtonStyle ComboButtonStyle; // 0x8
    FSlateSound PressedSlateSound; // 0x3c0
    FSlateSound SelectionChangeSlateSound; // 0x3d8
}; // Size: 0x3f0
#pragma pack(pop)
