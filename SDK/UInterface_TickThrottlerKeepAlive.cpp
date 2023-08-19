#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UInterface_TickThrottlerKeepAlive.hpp"
UInterface_TickThrottlerKeepAlive* UInterface_TickThrottlerKeepAlive::StaticClass() {
    static auto res = find_uobject("Class /Script/MasterTickThrottler.Interface_TickThrottlerKeepAlive");
    return (UInterface_TickThrottlerKeepAlive*)res;
}
void UInterface_TickThrottlerKeepAlive::TickThrottler_WakeUp(float DistanceSquaredToCamera) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterTickThrottler.Interface_TickThrottlerKeepAlive.TickThrottler_WakeUp"));
    struct Params_TickThrottler_WakeUp {
        float DistanceSquaredToCamera; // 0x0
    }; // Size: 0x4
    Params_TickThrottler_WakeUp params{};
    params.DistanceSquaredToCamera = (float)DistanceSquaredToCamera;
    ProcessEvent(func, &params);
}
void UInterface_TickThrottlerKeepAlive::TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterTickThrottler.Interface_TickThrottlerKeepAlive.TickThrottler_KeepAlive"));
    struct Params_TickThrottler_KeepAlive {
        float DeltaTime; // 0x0
        float DistanceSquaredToCamera; // 0x4
    }; // Size: 0x8
    Params_TickThrottler_KeepAlive params{};
    params.DeltaTime = (float)DeltaTime;
    params.DistanceSquaredToCamera = (float)DistanceSquaredToCamera;
    ProcessEvent(func, &params);
}
void UInterface_TickThrottlerKeepAlive::TickThrottler_GoToSleep(float DistanceSquaredToCamera) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterTickThrottler.Interface_TickThrottlerKeepAlive.TickThrottler_GoToSleep"));
    struct Params_TickThrottler_GoToSleep {
        float DistanceSquaredToCamera; // 0x0
    }; // Size: 0x4
    Params_TickThrottler_GoToSleep params{};
    params.DistanceSquaredToCamera = (float)DistanceSquaredToCamera;
    ProcessEvent(func, &params);
}
