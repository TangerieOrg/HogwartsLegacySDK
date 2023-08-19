#pragma once
#include <cstdint>
#include "UPanelWidget.hpp"
class UWidget;
class UVerticalBoxSlot;
#pragma pack(push, 1)
class UVerticalBox : public UPanelWidget {
public:
    char pad_120[0x10];
    static UVerticalBox* StaticClass();
    UVerticalBoxSlot* AddChildToVerticalBox(UWidget* Content);
}; // Size: 0x130
#pragma pack(pop)
