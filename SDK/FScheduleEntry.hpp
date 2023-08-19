#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#pragma pack(push, 1)
struct FScheduleEntry {
    int32_t StartTime; // 0x0
    int32_t EndTime; // 0x4
    int32_t DaysMask; // 0x8
    int32_t flags; // 0xc
    FString Activity; // 0x10
    FName ActivityType; // 0x20
    FString Location; // 0x28
    FString StationKey; // 0x38
    FString LocationKey; // 0x48
    char pad_58[0x8];
    int32_t StartTimeInMinutes; // 0x60
    int32_t EndTimeInMinutes; // 0x64
    int32_t DurationMinutes; // 0x68
    char pad_6c[0x4];
    FDateTime StartDate; // 0x70
    FDateTime EndDate; // 0x78
    float PathLength; // 0x80
    float PathLengthAB; // 0x84
    float MoveSpeed; // 0x88
    float TimeAvailableSeconds; // 0x8c
    float TimeRequiredSeconds; // 0x90
    int32_t Priority; // 0x94
    float TravelTimeFactor; // 0x98
    FName OutfitTypeID; // 0x9c
    float DistanceTraveled; // 0xa4
    char pad_a8[0x50];
}; // Size: 0xf8
#pragma pack(pop)
