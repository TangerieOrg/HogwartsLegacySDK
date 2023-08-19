#pragma once
#include <cstdint>
#include "FEditableTextBoxStyle.hpp"
#include "FSlateWidgetStyle.hpp"
#include "FTextBlockStyle.hpp"
#pragma pack(push, 1)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle {
    FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
    FTextBlockStyle TextStyle; // 0x800
}; // Size: 0xa70
#pragma pack(pop)
