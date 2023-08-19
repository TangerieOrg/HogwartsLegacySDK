#pragma once
#include <cstdint>
#include "FButtonStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
#pragma pack(push, 1)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase {
public:
    FButtonStyle ButtonStyle; // 0x30
    static UButtonWidgetStyle* StaticClass();
}; // Size: 0x2a8
#pragma pack(pop)
