#include "AActor.hpp"
#include "ATesselatedPlane.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UTesselatedPlaneComponent.hpp"
ATesselatedPlane* ATesselatedPlane::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TesselatedPlane");
    return (ATesselatedPlane*)res;
}
void ATesselatedPlane::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TesselatedPlane.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
