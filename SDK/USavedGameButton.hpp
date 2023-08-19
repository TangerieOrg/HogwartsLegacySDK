#pragma once
#include <cstdint>
#include "UPhoenixUserWidget.hpp"
#pragma pack(push, 1)
class USavedGameButton : public UPhoenixUserWidget {
public:
    static USavedGameButton* StaticClass();
    void MoveCursorToButton();
}; // Size: 0x328
#pragma pack(pop)
