#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "ETutorialPosition.hpp"
#include "FInputContextWithType.hpp"
#pragma pack(push, 1)
struct FTutorialInfo {
    FString Title; // 0x0
    FString Body; // 0x10
    FString BodyPC; // 0x20
    FString ImageName; // 0x30
    FString ButtonLegend; // 0x40
    bool Modal; // 0x50
    ETutorialPosition NonModalPosition; // 0x51
    char pad_52[0x2];
    float DisplayTime; // 0x54
    FName MonitoredAction; // 0x58
    EInputEvent PressOrRelease; // 0x60
    char pad_61[0x7];
    FString OptInMessage; // 0x68
    bool WaitForTaskCompleteMessage; // 0x78
    char pad_79[0x7];
    TArray<FInputContextWithType> ContextOverrides; // 0x80
    FString DismissalEventName; // 0x90
}; // Size: 0xa0
#pragma pack(pop)
