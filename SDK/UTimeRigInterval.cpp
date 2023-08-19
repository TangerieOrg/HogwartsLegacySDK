#include "FTimeRigCoordinate.hpp"
#include "FTimeRigInputSymbol.hpp"
#include "FTimeRigOutputSymbol.hpp"
#include "UFunction.hpp"
#include "UTimeRigElement.hpp"
#include "UTimeRigElementState.hpp"
#include "UTimeRigInstanceContext.hpp"
#include "UTimeRigInterval.hpp"
UTimeRigInterval* UTimeRigInterval::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigInterval");
    return (UTimeRigInterval*)res;
}
void UTimeRigInterval::OnStartChanged(FTimeRigCoordinate Previous, FTimeRigCoordinate Current, UTimeRigInstanceContext* Context, UTimeRigElementState* State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigInterval.OnStartChanged"));
    struct Params_OnStartChanged {
        FTimeRigCoordinate Previous; // 0x0
        FTimeRigCoordinate Current; // 0x4
        UTimeRigInstanceContext* Context; // 0x8
        UTimeRigElementState* State; // 0x10
    }; // Size: 0x18
    Params_OnStartChanged params{};
    params.Previous = (FTimeRigCoordinate)Previous;
    params.Current = (FTimeRigCoordinate)Current;
    params.Context = (UTimeRigInstanceContext*)Context;
    params.State = (UTimeRigElementState*)State;
    ProcessEvent(func, &params);
}
void UTimeRigInterval::OnFinishChanged(FTimeRigCoordinate Previous, FTimeRigCoordinate Current, UTimeRigInstanceContext* Context, UTimeRigElementState* State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigInterval.OnFinishChanged"));
    struct Params_OnFinishChanged {
        FTimeRigCoordinate Previous; // 0x0
        FTimeRigCoordinate Current; // 0x4
        UTimeRigInstanceContext* Context; // 0x8
        UTimeRigElementState* State; // 0x10
    }; // Size: 0x18
    Params_OnFinishChanged params{};
    params.Previous = (FTimeRigCoordinate)Previous;
    params.Current = (FTimeRigCoordinate)Current;
    params.Context = (UTimeRigInstanceContext*)Context;
    params.State = (UTimeRigElementState*)State;
    ProcessEvent(func, &params);
}
