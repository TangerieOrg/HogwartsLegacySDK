#pragma once
#include <cstdint>
#include "EPerformTaskSpeedMode.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UAIPerformTaskBase.hpp"
class AStation;
class UObject;
#pragma pack(push, 1)
class UAIPerformTaskMoveToStation : public UAIPerformTaskBase {
public:
    FDbSingleColumnInfo ActivityType; // 0xe0
    FName ActionName; // 0x168
    bool bInteract; // 0x170
    char pad_171[0x3];
    int32_t ConnectionIndex; // 0x174
    float stationDuration; // 0x178
    char pad_17c[0x1c];
    EPerformTaskSpeedMode SpeedMode; // 0x198
    char pad_199[0x7];
    static UAIPerformTaskMoveToStation* StaticClass();
    void StartStationExit();
    void OnStationEnterFinished(UObject* i_caller);
}; // Size: 0x1a0
#pragma pack(pop)
