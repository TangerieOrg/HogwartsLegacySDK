#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "UTimeOverrideDateTime.hpp"
class UObject;
#pragma pack(push, 1)
class UTimeOverrideDateTimeRaw : public UTimeOverrideDateTime {
public:
    FDateTime DateTime; // 0x30
    float Priority; // 0x38
    bool bEnabled; // 0x3c
    char pad_3d[0x3];
    static UTimeOverrideDateTimeRaw* StaticClass();
    static void TimeOverrideDateTimeCreate(UObject* Owner, UTimeOverrideDateTimeRaw*& TimeOverride, FDateTime CreateDateTime, float CreatePriority, bool bCreateEnabled, bool bIsTransient);
}; // Size: 0x40
#pragma pack(pop)
