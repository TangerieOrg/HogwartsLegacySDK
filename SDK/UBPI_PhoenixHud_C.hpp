#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "UInterface.hpp"
class UObject;
#pragma pack(push, 1)
class UBPI_PhoenixHud_C : public UInterface {
public:
    static UBPI_PhoenixHud_C* StaticClass();
    void I_SetHudElementVisibility(FString HUDElementName, ESlateVisibility Visibility, FString Context, UObject* Provider);
    void I_SetHudWidgetVisibility(ESlateVisibility Visibility);
}; // Size: 0x28
#pragma pack(pop)
