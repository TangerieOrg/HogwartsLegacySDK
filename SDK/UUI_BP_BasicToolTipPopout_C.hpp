#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UUI_BP_LegendBox_C;
#pragma pack(push, 1)
class UUI_BP_BasicToolTipPopout_C : public UUserWidget {
public:
    UUI_BP_LegendBox_C* Legend; // 0x268
    static UUI_BP_BasicToolTipPopout_C* StaticClass();
    void AddToolTipData(FString NewCallout, FString newText, TArray<FString>& K2Node_MakeArray_Array);
}; // Size: 0x270
#pragma pack(pop)
