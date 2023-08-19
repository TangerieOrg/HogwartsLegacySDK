#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UUI_BPI_LegendBar_C : public UInterface {
public:
    static UUI_BPI_LegendBar_C* StaticClass();
    void I_SetButtonLegend(TArray<FString>& NewParam);
}; // Size: 0x28
#pragma pack(pop)
