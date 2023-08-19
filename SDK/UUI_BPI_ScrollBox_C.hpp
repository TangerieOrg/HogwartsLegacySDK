#pragma once
#include <cstdint>
#include "UInterface.hpp"
class UClass;
#pragma pack(push, 1)
class UUI_BPI_ScrollBox_C : public UInterface {
public:
    static UUI_BPI_ScrollBox_C* StaticClass();
    void I_SetButtonClass(UClass* Widget_Class);
    void I_SetCursorPos(bool Container___Inventory);
}; // Size: 0x28
#pragma pack(pop)
