#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class UTooltipWidget : public UUserWidget {
public:
    static UTooltipWidget* StaticClass();
    void OnSynchronizeProperties();
}; // Size: 0x268
#pragma pack(pop)
