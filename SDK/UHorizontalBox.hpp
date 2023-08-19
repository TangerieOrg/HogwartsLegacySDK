#pragma once
#include <cstdint>
#include "UPanelWidget.hpp"
class UWidget;
class UHorizontalBoxSlot;
#pragma pack(push, 1)
class UHorizontalBox : public UPanelWidget {
public:
    char pad_120[0x10];
    static UHorizontalBox* StaticClass();
    UHorizontalBoxSlot* AddChildToHorizontalBox(UWidget* Content);
}; // Size: 0x130
#pragma pack(pop)
