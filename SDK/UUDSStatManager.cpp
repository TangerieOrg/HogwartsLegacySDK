#include "UFunction.hpp"
#include "UObject.hpp"
#include "UUDSEventQueuer.hpp"
#include "UUDSStatManager.hpp"
UUDSStatManager* UUDSStatManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UDSStatManager");
    return (UUDSStatManager*)res;
}
void UUDSStatManager::HandleRealtimeMinutePassed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UDSStatManager.HandleRealtimeMinutePassed"));
    struct Params_HandleRealtimeMinutePassed {
    }; // Size: 0x0
    Params_HandleRealtimeMinutePassed params{};
    ProcessEvent(func, &params);
}
void UUDSStatManager::HandleInGameDayPassed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UDSStatManager.HandleInGameDayPassed"));
    struct Params_HandleInGameDayPassed {
    }; // Size: 0x0
    Params_HandleInGameDayPassed params{};
    ProcessEvent(func, &params);
}
