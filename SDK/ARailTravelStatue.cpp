#include "AFastTravelPort.hpp"
#include "ARailTravelStatue.hpp"
#include "FBTCustomAction.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "USplineComponent.hpp"
ARailTravelStatue* ARailTravelStatue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RailTravelStatue");
    return (ARailTravelStatue*)res;
}
void ARailTravelStatue::InitializeForTravel(USplineComponent* InSplineComponent, float InTravelDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RailTravelStatue.InitializeForTravel"));
    struct Params_InitializeForTravel {
        USplineComponent* InSplineComponent; // 0x0
        float InTravelDirection; // 0x8
    }; // Size: 0xc
    Params_InitializeForTravel params{};
    params.InSplineComponent = (USplineComponent*)InSplineComponent;
    params.InTravelDirection = (float)InTravelDirection;
    ProcessEvent(func, &params);
}
