#include "AActor.hpp"
#include "UFXUpdate.hpp"
#include "UFXUpdate_EndWhenMovementStops.hpp"
#include "UFunction.hpp"
UFXUpdate_EndWhenMovementStops* UFXUpdate_EndWhenMovementStops::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_EndWhenMovementStops");
    return (UFXUpdate_EndWhenMovementStops*)res;
}
void UFXUpdate_EndWhenMovementStops::MovementStopped(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FXUpdate_EndWhenMovementStops.MovementStopped"));
    struct Params_MovementStopped {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_MovementStopped params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
