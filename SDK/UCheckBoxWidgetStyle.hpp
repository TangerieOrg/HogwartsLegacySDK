#pragma once
#include <cstdint>
#include "FCheckBoxStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
#pragma pack(push, 1)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase {
public:
    FCheckBoxStyle CheckBoxStyle; // 0x30
    static UCheckBoxWidgetStyle* StaticClass();
}; // Size: 0x5b0
#pragma pack(pop)
