#pragma once
#include <cstdint>
#include "FScrollBarStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
#pragma pack(push, 1)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase {
public:
    FScrollBarStyle ScrollBarStyle; // 0x30
    static UScrollBarWidgetStyle* StaticClass();
}; // Size: 0x500
#pragma pack(pop)
