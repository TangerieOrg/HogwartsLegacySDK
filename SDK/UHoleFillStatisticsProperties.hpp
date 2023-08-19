#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UHoleFillStatisticsProperties : public UInteractiveToolPropertySet {
public:
    FString InitialHoles; // 0x60
    FString SelectedHoles; // 0x70
    FString SuccessfulFills; // 0x80
    FString FailedFills; // 0x90
    FString RemainingHoles; // 0xa0
    static UHoleFillStatisticsProperties* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
