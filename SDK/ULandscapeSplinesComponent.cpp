#include "UFunction.hpp"
#include "ULandscapeSplineControlPoint.hpp"
#include "ULandscapeSplineSegment.hpp"
#include "ULandscapeSplinesComponent.hpp"
#include "UMeshComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "USplineMeshComponent.hpp"
ULandscapeSplinesComponent* ULandscapeSplinesComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeSplinesComponent");
    return (ULandscapeSplinesComponent*)res;
}
TArray<USplineMeshComponent*> ULandscapeSplinesComponent::GetSplineMeshComponents() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeSplinesComponent.GetSplineMeshComponents"));
    struct Params_GetSplineMeshComponents {
        TArray<USplineMeshComponent*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSplineMeshComponents params{};
    ProcessEvent(func, &params);
    return (TArray<USplineMeshComponent*>)params.ReturnValue;
}
