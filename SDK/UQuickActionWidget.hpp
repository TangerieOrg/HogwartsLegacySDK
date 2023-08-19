#pragma once
#include <cstdint>
#include "FInventoryResult.hpp"
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class UQuickActionWidget : public UUserWidget {
public:
    int32_t StartIndex; // 0x268
    char pad_26c[0x4];
    TArray<FInventoryResult> ActionItems; // 0x270
    static UQuickActionWidget* StaticClass();
    void SetItemArray(TArray<FInventoryResult>& Items, int32_t StartingIndex);
    void InitActionMenuEvent();
}; // Size: 0x280
#pragma pack(pop)
