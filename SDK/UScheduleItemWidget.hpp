#pragma once
#include <cstdint>
#include "FActivityStruct.hpp"
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class UScheduleItemWidget : public UUserWidget {
public:
    char pad_268[0x20];
    float BackgroundScale; // 0x288
    char pad_28c[0x4];
    FString IconName; // 0x290
    float StartTime; // 0x2a0
    float EndTime; // 0x2a4
    FString ActivityID; // 0x2a8
    FString ActivityTypeID; // 0x2b8
    bool ShowActivityText; // 0x2c8
    char pad_2c9[0x7];
    static UScheduleItemWidget* StaticClass();
    bool SetInformation(FActivityStruct Activity, bool ShowText);
    void ScheduleItemUnhovered();
    void ScheduleItemHovered();
    void OnSynchronizeProperties();
}; // Size: 0x2d0
#pragma pack(pop)
