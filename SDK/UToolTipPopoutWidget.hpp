#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UHeaderWidget;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UToolTipPopoutWidget : public UUserWidget {
public:
    char pad_268[0x60];
    UHeaderWidget* Header; // 0x2c8
    UPhoenixTextBlock* Description; // 0x2d0
    static UToolTipPopoutWidget* StaticClass();
    void SetHeaderData();
    void SetDescription();
    void SetButtonLegend();
    void OnSynchronizeProperties();
}; // Size: 0x2d8
#pragma pack(pop)
