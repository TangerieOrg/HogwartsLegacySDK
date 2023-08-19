#pragma once
#include <cstdint>
#include "FScrollBoxStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
#pragma pack(push, 1)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase {
public:
    FScrollBoxStyle ScrollBoxStyle; // 0x30
    static UScrollBoxWidgetStyle* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
