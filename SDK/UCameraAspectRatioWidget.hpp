#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class UCameraAspectRatioWidget : public UUserWidget {
public:
    char pad_268[0x8];
    static UCameraAspectRatioWidget* StaticClass();
    void UI_UpdatePillarbox(float InBarScale);
    void UI_UpdateLetterbox(float InBarScale);
    void UI_HideBars();
}; // Size: 0x270
#pragma pack(pop)
