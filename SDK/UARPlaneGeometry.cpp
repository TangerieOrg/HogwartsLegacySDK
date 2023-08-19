#include "EARPlaneOrientation.hpp"
#include "FVector.hpp"
#include "UARPlaneGeometry.hpp"
#include "UARTrackedGeometry.hpp"
#include "UFunction.hpp"
TArray<FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace"));
    struct Params_GetBoundaryPolygonInLocalSpace {
        TArray<FVector> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetBoundaryPolygonInLocalSpace params{};
    ProcessEvent(func, &params);
    return (TArray<FVector>)params.ReturnValue;
}
EARPlaneOrientation UARPlaneGeometry::GetOrientation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPlaneGeometry.GetOrientation"));
    struct Params_GetOrientation {
        EARPlaneOrientation ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetOrientation params{};
    ProcessEvent(func, &params);
    return (EARPlaneOrientation)params.ReturnValue;
}
UARPlaneGeometry* UARPlaneGeometry::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARPlaneGeometry");
    return (UARPlaneGeometry*)res;
}
UARPlaneGeometry* UARPlaneGeometry::GetSubsumedBy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPlaneGeometry.GetSubsumedBy"));
    struct Params_GetSubsumedBy {
        UARPlaneGeometry* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSubsumedBy params{};
    ProcessEvent(func, &params);
    return (UARPlaneGeometry*)params.ReturnValue;
}
FVector UARPlaneGeometry::GetExtent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPlaneGeometry.GetExtent"));
    struct Params_GetExtent {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetExtent params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UARPlaneGeometry::GetCenter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPlaneGeometry.GetCenter"));
    struct Params_GetCenter {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetCenter params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
