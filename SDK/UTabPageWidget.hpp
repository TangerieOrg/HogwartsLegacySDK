#pragma once
#include <cstdint>
#include "FKey.hpp"
#include "FLegendItemData.hpp"
#include "UPhoenixUserWidget.hpp"
class ULegendItem;
#pragma pack(push, 1)
class UTabPageWidget : public UPhoenixUserWidget {
public:
    FString Source; // 0x328
    FString Destination; // 0x338
    float ParallaxRate; // 0x348
    char pad_34c[0x4];
    TArray<FLegendItemData> MenuLegend; // 0x350
    UPhoenixUserWidget* TabParentWidget; // 0x360
    char pad_368[0x60];
    static UTabPageWidget* StaticClass();
    void SetTabParentWidget(UPhoenixUserWidget* InTabParentWidget);
    void OnLegendItemHoldEnd(ULegendItem* LegendItem, bool HoldWasCompleted);
    void LeaveFromPage();
    bool HandleInput(FKey Input);
    void GoToPage(TArray<FString>& DestinationStack);
}; // Size: 0x3c8
#pragma pack(pop)
