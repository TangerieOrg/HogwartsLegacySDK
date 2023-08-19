#pragma once
#include <cstdint>
#include "EUpdateClockSource.hpp"
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class ULevelSequenceProjectSettings : public UDeveloperSettings {
public:
    bool bDefaultLockEngineToDisplayRate; // 0x38
    char pad_39[0x7];
    FString DefaultDisplayRate; // 0x40
    FString DefaultTickResolution; // 0x50
    EUpdateClockSource DefaultClockSource; // 0x60
    char pad_61[0x7];
    static ULevelSequenceProjectSettings* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
