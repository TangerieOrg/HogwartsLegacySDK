#pragma once
#include <cstdint>
#include "FEditableTextStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
#pragma pack(push, 1)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase {
public:
    FEditableTextStyle EditableTextStyle; // 0x30
    static UEditableTextWidgetStyle* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
