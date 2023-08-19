#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class ULegendBox : public UUserWidget {
public:
    static ULegendBox* StaticClass();
    void MoveCursorToButton();
}; // Size: 0x268
#pragma pack(pop)
