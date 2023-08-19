#pragma once
#include <cstdint>
#include "UInterface.hpp"
struct FScheduleEntry;
class UStationComponent;
struct FRequestedGoal;
#pragma pack(push, 1)
class UScheduledObject_Interface : public UInterface {
public:
    static UScheduledObject_Interface* StaticClass();
    FName GetMySubtype();
    FString GetMyName();
    int32_t GetMyID();
    void GetCurrentActivity(bool& ActivityIsValid, FScheduleEntry& CurrentActivity);
    UStationComponent* GetActiveStation();
    bool GetActiveGoal(FRequestedGoal& OutActiveGoal);
    bool GetActiveActivity(FScheduleEntry& OutActiveActivity);
}; // Size: 0x28
#pragma pack(pop)
