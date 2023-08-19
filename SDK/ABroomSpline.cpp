#include "AActor.hpp"
#include "ABroomSpline.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "USplineComponent.hpp"
void ABroomSpline::CopySelectedSpline() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomSpline.CopySelectedSpline"));
    struct Params_CopySelectedSpline {
    }; // Size: 0x0
    Params_CopySelectedSpline params{};
    ProcessEvent(func, &params);
}
ABroomSpline* ABroomSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BroomSpline");
    return (ABroomSpline*)res;
}
void ABroomSpline::GetSplinePointWorldPositions(TArray<FVector>& OutSplinePathPoints) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomSpline.GetSplinePointWorldPositions"));
    struct Params_GetSplinePointWorldPositions {
        TArray<FVector> OutSplinePathPoints; // 0x0
    }; // Size: 0x10
    Params_GetSplinePointWorldPositions params{};
    params.OutSplinePathPoints = (TArray<FVector>)OutSplinePathPoints;
    ProcessEvent(func, &params);
    OutSplinePathPoints = params.OutSplinePathPoints;
}
