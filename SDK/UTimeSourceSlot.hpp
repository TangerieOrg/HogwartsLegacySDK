#pragma once
#include <cstdint>
#include "EDateTimeDayOfWeek.hpp"
#include "FDateTime.hpp"
#include "FTimeSourceSlotSetupName.hpp"
#include "UTimeSourceLocal.hpp"
class UTimeSourceSlotSetup;
#pragma pack(push, 1)
class UTimeSourceSlot : public UTimeSourceLocal {
public:
    UTimeSourceSlotSetup* Setup; // 0x38
    FTimeSourceSlotSetupName Slot; // 0x40
    EDateTimeDayOfWeek DayOfWeek; // 0x48
    char pad_49[0x3];
    float Rate; // 0x4c
    bool bUseRate; // 0x50
    char pad_51[0x7];
    FDateTime QuantizedTime; // 0x58
    float SlotRate; // 0x60
    char pad_64[0x4];
    static UTimeSourceSlot* StaticClass();
    void EditorForceUpdate();
}; // Size: 0x68
#pragma pack(pop)
