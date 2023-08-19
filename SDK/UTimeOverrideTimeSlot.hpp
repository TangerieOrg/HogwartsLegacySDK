#pragma once
#include <cstdint>
#include "FTimeSourceSlotSetupName.hpp"
#include "UTimeOverrideTimeOnly.hpp"
class UTimeSourceSlotSetup;
#pragma pack(push, 1)
class UTimeOverrideTimeSlot : public UTimeOverrideTimeOnly {
public:
    UTimeSourceSlotSetup* Setup; // 0x30
    FTimeSourceSlotSetupName Slot; // 0x38
    float Priority; // 0x40
    char pad_44[0x4];
    static UTimeOverrideTimeSlot* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
