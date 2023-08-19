#pragma once
#include <cstdint>
#include "FSoftObjectPath.hpp"
#include "FWorldEventTimeSpan.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UWorldEventSettings : public UObject {
public:
    FSoftObjectPath WorldEventDataTable; // 0x28
    bool bLimitMaximumNumberOfWorldEvent; // 0x40
    char pad_41[0x3];
    int32_t MaximumNumberOfWorldEvent; // 0x44
    FWorldEventTimeSpan LocatorDefaultCooldown; // 0x48
    FWorldEventTimeSpan LocatorHogwartsCooldown; // 0x58
    FWorldEventTimeSpan LocatorHogsmeadeCooldown; // 0x68
    static UWorldEventSettings* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
