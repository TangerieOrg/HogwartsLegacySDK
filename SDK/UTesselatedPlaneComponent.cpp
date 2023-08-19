#include "UFunction.hpp"
#include "UProceduralMeshComponent.hpp"
#include "UTesselatedPlaneComponent.hpp"
UTesselatedPlaneComponent* UTesselatedPlaneComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TesselatedPlaneComponent");
    return (UTesselatedPlaneComponent*)res;
}
void UTesselatedPlaneComponent::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TesselatedPlaneComponent.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
