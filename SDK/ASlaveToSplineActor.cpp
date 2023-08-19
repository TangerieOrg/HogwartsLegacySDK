#include "AActor.hpp"
#include "ASlaveToSplineActor.hpp"
#include "FSlaveToSplineSlave.hpp"
#include "UFunction.hpp"
#include "USplineComponent.hpp"
ASlaveToSplineActor* ASlaveToSplineActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SlaveToSplineActor");
    return (ASlaveToSplineActor*)res;
}
void ASlaveToSplineActor::ResetAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SlaveToSplineActor.ResetAll"));
    struct Params_ResetAll {
    }; // Size: 0x0
    Params_ResetAll params{};
    ProcessEvent(func, &params);
}
