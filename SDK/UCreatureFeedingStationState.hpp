#pragma once
#include <cstdint>
#include "EItemConversionState.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UCreatureFeedingStationState : public UObject {
public:
    char pad_28[0xc0];
    static UCreatureFeedingStationState* StaticClass();
    bool HasFeedAvailable();
    bool HasEmptySlot();
    int32_t GetNumFeedSlots();
    EItemConversionState GetConversionState(int32_t SlotIndex);
    void FinalizeCurrentConversion();
}; // Size: 0xe8
#pragma pack(pop)
