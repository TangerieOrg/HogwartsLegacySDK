#pragma once
#include <cstdint>
#include "FProgressBarStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
#pragma pack(push, 1)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase {
public:
    FProgressBarStyle ProgressBarStyle; // 0x30
    static UProgressWidgetStyle* StaticClass();
}; // Size: 0x1d0
#pragma pack(pop)
