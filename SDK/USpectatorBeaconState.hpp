#pragma once
#include <cstdint>
#include "FSpectatorReservation.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USpectatorBeaconState : public UObject {
public:
    FName SessionName; // 0x28
    int32_t NumConsumedReservations; // 0x30
    int32_t MaxReservations; // 0x34
    bool bRestrictCrossConsole; // 0x38
    char pad_39[0x7];
    TArray<FSpectatorReservation> Reservations; // 0x40
    char pad_50[0x10];
    static USpectatorBeaconState* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
