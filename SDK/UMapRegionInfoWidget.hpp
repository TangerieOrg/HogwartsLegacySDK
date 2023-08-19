#pragma once
#include <cstdint>
#include "FRegionPopuplData.hpp"
#include "UPhoenixUserWidget.hpp"
#pragma pack(push, 1)
class UMapRegionInfoWidget : public UPhoenixUserWidget {
public:
    char pad_328[0x8];
    static UMapRegionInfoWidget* StaticClass();
    void ShowBP();
    void Show();
    void SetDataBP(FString RegionName, FString EnemyLevel, int32_t MinLevel, int32_t MaxLevel, TArray<FRegionPopuplData>& RegionData);
    void SetData(FString& RegionName, FString& EnemyLevel, int32_t MinLevel, int32_t MaxLevel, TArray<FRegionPopuplData>& RegionData);
    void HideBP();
    void Hide();
}; // Size: 0x330
#pragma pack(pop)
