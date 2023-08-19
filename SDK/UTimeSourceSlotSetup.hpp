#pragma once
#include <cstdint>
#include "FDateInput.hpp"
#include "FEphemerisDayInfo.hpp"
#include "FTimeSourceSlotSetupTime.hpp"
#include "FTimeSourceSlotValidTime.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UTimeSourceSlotSetup : public UDataAsset {
public:
    FDateInput SlotDate; // 0x30
    char pad_3c[0x4];
    TArray<FTimeSourceSlotSetupTime> SlotTimes; // 0x40
    FEphemerisDayInfo DayInfo; // 0x50
    TArray<FTimeSourceSlotValidTime> SortedDateTimes; // 0xc8
    static UTimeSourceSlotSetup* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
