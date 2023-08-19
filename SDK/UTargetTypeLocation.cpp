#include "FVector.hpp"
#include "UFunction.hpp"
#include "UTargetTypeBase.hpp"
#include "UTargetTypeLocation.hpp"
UTargetTypeLocation* UTargetTypeLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.TargetTypeLocation");
    return (UTargetTypeLocation*)res;
}
FVector UTargetTypeLocation::GetTargetLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTypeLocation.GetTargetLocation"));
    struct Params_GetTargetLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetTargetLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UTargetTypeLocation::SetTargetLocation(FVector InTargetLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTypeLocation.SetTargetLocation"));
    struct Params_SetTargetLocation {
        FVector InTargetLocation; // 0x0
    }; // Size: 0xc
    Params_SetTargetLocation params{};
    params.InTargetLocation = (FVector)InTargetLocation;
    ProcessEvent(func, &params);
}
