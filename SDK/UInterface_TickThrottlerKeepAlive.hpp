#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UInterface_TickThrottlerKeepAlive : public UInterface {
public:
    static UInterface_TickThrottlerKeepAlive* StaticClass();
    void TickThrottler_WakeUp(float DistanceSquaredToCamera);
    void TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera);
    void TickThrottler_GoToSleep(float DistanceSquaredToCamera);
}; // Size: 0x28
#pragma pack(pop)
