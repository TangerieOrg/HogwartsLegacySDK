#include "FRequestedGoal.hpp"
#include "FScheduleEntry.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UScheduledObject_Interface.hpp"
#include "UStationComponent.hpp"
UScheduledObject_Interface* UScheduledObject_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ScheduledObject_Interface");
    return (UScheduledObject_Interface*)res;
}
bool UScheduledObject_Interface::GetActiveGoal(FRequestedGoal& OutActiveGoal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledObject_Interface.GetActiveGoal"));
    struct Params_GetActiveGoal {
        FRequestedGoal OutActiveGoal; // 0x0
        bool ReturnValue; // 0x68
    }; // Size: 0x69
    Params_GetActiveGoal params{};
    params.OutActiveGoal = (FRequestedGoal)OutActiveGoal;
    ProcessEvent(func, &params);
    OutActiveGoal = params.OutActiveGoal;
    return (bool)params.ReturnValue;
}
void UScheduledObject_Interface::GetCurrentActivity(bool& ActivityIsValid, FScheduleEntry& CurrentActivity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledObject_Interface.GetCurrentActivity"));
    struct Params_GetCurrentActivity {
        bool ActivityIsValid; // 0x0
        char pad_1[0x7];
        FScheduleEntry CurrentActivity; // 0x8
    }; // Size: 0x100
    Params_GetCurrentActivity params{};
    params.ActivityIsValid = (bool)ActivityIsValid;
    params.CurrentActivity = (FScheduleEntry)CurrentActivity;
    ProcessEvent(func, &params);
    ActivityIsValid = params.ActivityIsValid;
    CurrentActivity = params.CurrentActivity;
}
FName UScheduledObject_Interface::GetMySubtype() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledObject_Interface.GetMySubtype"));
    struct Params_GetMySubtype {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMySubtype params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FString UScheduledObject_Interface::GetMyName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledObject_Interface.GetMyName"));
    struct Params_GetMyName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetMyName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
UStationComponent* UScheduledObject_Interface::GetActiveStation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledObject_Interface.GetActiveStation"));
    struct Params_GetActiveStation {
        UStationComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActiveStation params{};
    ProcessEvent(func, &params);
    return (UStationComponent*)params.ReturnValue;
}
int32_t UScheduledObject_Interface::GetMyID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledObject_Interface.GetMyID"));
    struct Params_GetMyID {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMyID params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UScheduledObject_Interface::GetActiveActivity(FScheduleEntry& OutActiveActivity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ScheduledObject_Interface.GetActiveActivity"));
    struct Params_GetActiveActivity {
        FScheduleEntry OutActiveActivity; // 0x0
        bool ReturnValue; // 0xf8
    }; // Size: 0xf9
    Params_GetActiveActivity params{};
    params.OutActiveActivity = (FScheduleEntry)OutActiveActivity;
    ProcessEvent(func, &params);
    OutActiveActivity = params.OutActiveActivity;
    return (bool)params.ReturnValue;
}
