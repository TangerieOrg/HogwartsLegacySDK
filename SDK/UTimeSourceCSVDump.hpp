#pragma once
#include <cstdint>
#include "FDateTimeInput.hpp"
#include "FDayNightCSVReportOptions.hpp"
#include "UTimeSourceLocal.hpp"
#pragma pack(push, 1)
class UTimeSourceCSVDump : public UTimeSourceLocal {
public:
    bool bEnabled; // 0x38
    char pad_39[0x3];
    FDateTimeInput DateTime; // 0x3c
    float DurationHours; // 0x54
    float IntervalMinutes; // 0x58
    FDayNightCSVReportOptions Show; // 0x5c
    FString OverrideFilename; // 0x80
    float Rate; // 0x90
    bool bCapture; // 0x94
    char pad_95[0x3];
    static UTimeSourceCSVDump* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
