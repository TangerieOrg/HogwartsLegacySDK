#pragma once
#include <cstdint>
#include "FPreloadArchitectHUDStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
#pragma pack(push, 1)
class UPreloadArchitectHUDWidgetStyle : public USlateWidgetStyleContainerBase {
public:
    FPreloadArchitectHUDStyle PreloadArchitectHUDStyle; // 0x30
    static UPreloadArchitectHUDWidgetStyle* StaticClass();
}; // Size: 0x11e0
#pragma pack(pop)
