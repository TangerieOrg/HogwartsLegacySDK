#pragma once
#include <cstdint>
#include "UPhoenixUserWidget.hpp"
#pragma pack(push, 1)
class UAvaUserWidget : public UPhoenixUserWidget {
public:
    static UAvaUserWidget* StaticClass();
    void OnSynchronizeProperties();
}; // Size: 0x328
#pragma pack(pop)
