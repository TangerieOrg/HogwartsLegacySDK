#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class UMenuTextButton : public UUserWidget {
public:
    static UMenuTextButton* StaticClass();
    void MoveCursorToButton();
}; // Size: 0x268
#pragma pack(pop)
