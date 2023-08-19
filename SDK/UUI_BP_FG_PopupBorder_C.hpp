#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UWidgetAnimation;
#pragma pack(push, 1)
class UUI_BP_FG_PopupBorder_C : public UUserWidget {
public:
    UWidgetAnimation* Glow; // 0x268
    static UUI_BP_FG_PopupBorder_C* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
