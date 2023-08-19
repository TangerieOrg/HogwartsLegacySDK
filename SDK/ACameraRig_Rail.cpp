#include "AActor.hpp"
#include "ACameraRig_Rail.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USplineComponent.hpp"
ACameraRig_Rail* ACameraRig_Rail::StaticClass() {
    static auto res = find_uobject("Class /Script/CinematicCamera.CameraRig_Rail");
    return (ACameraRig_Rail*)res;
}
USplineComponent* ACameraRig_Rail::GetRailSplineComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CinematicCamera.CameraRig_Rail.GetRailSplineComponent"));
    struct Params_GetRailSplineComponent {
        USplineComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetRailSplineComponent params{};
    ProcessEvent(func, &params);
    return (USplineComponent*)params.ReturnValue;
}
