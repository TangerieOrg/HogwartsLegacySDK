#pragma once
#include <cstdint>
#include "FAbleHUDStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
#pragma pack(push, 1)
class UAbleHUDWidgetStyle : public USlateWidgetStyleContainerBase {
public:
    FAbleHUDStyle AbleHUDWidgetStyle; // 0x30
    static UAbleHUDWidgetStyle* StaticClass();
}; // Size: 0x2cb0
#pragma pack(pop)
