#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "UUserWidget.hpp"
class UPhoenixImage;
#pragma pack(push, 1)
class UUI_BP_GearUpgradeMarker_C : public UUserWidget {
public:
    UPhoenixImage* upgradeFill; // 0x268
    static UUI_BP_GearUpgradeMarker_C* StaticClass();
    void SetMarker(bool ShowMorker, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
}; // Size: 0x270
#pragma pack(pop)
