#include "AStation.hpp"
#include "EPerformTaskSpeedMode.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskMoveToStation.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAIPerformTaskMoveToStation* UAIPerformTaskMoveToStation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskMoveToStation");
    return (UAIPerformTaskMoveToStation*)res;
}
void UAIPerformTaskMoveToStation::StartStationExit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AIPerformTaskMoveToStation.StartStationExit"));
    struct Params_StartStationExit {
    }; // Size: 0x0
    Params_StartStationExit params{};
    ProcessEvent(func, &params);
}
void UAIPerformTaskMoveToStation::OnStationEnterFinished(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AIPerformTaskMoveToStation.OnStationEnterFinished"));
    struct Params_OnStationEnterFinished {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_OnStationEnterFinished params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
