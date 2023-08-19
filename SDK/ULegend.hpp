#pragma once
#include <cstdint>
#include "FLegendItemData.hpp"
#include "FSlateColor.hpp"
#include "FSoftClassPath.hpp"
#include "UPhoenixUserWidget.hpp"
class ULegendItem;
#pragma pack(push, 1)
class ULegend : public UPhoenixUserWidget {
public:
    FSoftClassPath LegendItemSoftClassPath; // 0x328
    FSlateColor LegendItemTextColor; // 0x340
    TArray<FLegendItemData> LegendItemData; // 0x368
    TArray<ULegendItem*> mLegendItems; // 0x378
    static ULegend* StaticClass();
    void RemoveAllLegendItems(int32_t StartFromIndex);
    void InitLegendData(TArray<FLegendItemData> LegendData);
    ULegendItem* GetLegendItem(int32_t Index);
    void AddLegendItem(ULegendItem* NewLegendItem);
}; // Size: 0x388
#pragma pack(pop)
