#pragma once
#include <cstdint>
#include "FAmbulatoryHUDStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
#pragma pack(push, 1)
class UAmbulatoryHUDWidgetStyle : public USlateWidgetStyleContainerBase {
public:
    FAmbulatoryHUDStyle AmbulatoryHUDWidgetStyle; // 0x30
    static UAmbulatoryHUDWidgetStyle* StaticClass();
}; // Size: 0x22f0
#pragma pack(pop)
