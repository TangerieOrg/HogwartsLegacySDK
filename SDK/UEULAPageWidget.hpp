#pragma once
#include <cstdint>
#include "UPhoenixUserWidget.hpp"
#pragma pack(push, 1)
class UEULAPageWidget : public UPhoenixUserWidget {
public:
    static UEULAPageWidget* StaticClass();
    void ProceedToNextScreen();
}; // Size: 0x328
#pragma pack(pop)
