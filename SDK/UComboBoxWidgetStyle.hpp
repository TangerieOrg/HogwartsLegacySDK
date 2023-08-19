#pragma once
#include <cstdint>
#include "FComboBoxStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
#pragma pack(push, 1)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase {
public:
    FComboBoxStyle ComboBoxStyle; // 0x30
    static UComboBoxWidgetStyle* StaticClass();
}; // Size: 0x420
#pragma pack(pop)
