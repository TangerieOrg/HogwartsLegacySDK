#pragma once
#include <cstdint>
#include "FMissionLogData.hpp"
#include "UIconButtonWidget.hpp"
#pragma pack(push, 1)
class UMissionButtonWidget : public UIconButtonWidget {
public:
    FMissionLogData MissionData; // 0x4a8
    bool IsFocusMission; // 0x550
    char pad_551[0x7];
    static UMissionButtonWidget* StaticClass();
}; // Size: 0x558
#pragma pack(pop)
