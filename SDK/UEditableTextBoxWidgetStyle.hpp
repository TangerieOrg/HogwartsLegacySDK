#pragma once
#include <cstdint>
#include "FEditableTextBoxStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
#pragma pack(push, 1)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase {
public:
    FEditableTextBoxStyle EditableTextBoxStyle; // 0x30
    static UEditableTextBoxWidgetStyle* StaticClass();
}; // Size: 0x828
#pragma pack(pop)
