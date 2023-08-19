#pragma once
#include <cstdint>
#include "FTextBlockStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
#pragma pack(push, 1)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase {
public:
    FTextBlockStyle TextBlockStyle; // 0x30
    static UTextBlockWidgetStyle* StaticClass();
}; // Size: 0x2a0
#pragma pack(pop)
