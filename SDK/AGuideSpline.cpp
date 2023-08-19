#include "AActor.hpp"
#include "AGuideSpline.hpp"
#include "FGuideSplineTrajectory.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UNonUniformSplineComponent.hpp"
#include "USplineComponent.hpp"
void AGuideSpline::OnPathInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GuideSpline.OnPathInitialized"));
    struct Params_OnPathInitialized {
    }; // Size: 0x0
    Params_OnPathInitialized params{};
    ProcessEvent(func, &params);
}
AGuideSpline* AGuideSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GuideSpline");
    return (AGuideSpline*)res;
}
void AGuideSpline::RemovePath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GuideSpline.RemovePath"));
    struct Params_RemovePath {
    }; // Size: 0x0
    Params_RemovePath params{};
    ProcessEvent(func, &params);
}
void AGuideSpline::InitializeFromPath(TArray<FVector>& Path) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GuideSpline.InitializeFromPath"));
    struct Params_InitializeFromPath {
        TArray<FVector> Path; // 0x0
    }; // Size: 0x10
    Params_InitializeFromPath params{};
    params.Path = (TArray<FVector>)Path;
    ProcessEvent(func, &params);
    Path = params.Path;
}
void AGuideSpline::PreparePathRemoval() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GuideSpline.PreparePathRemoval"));
    struct Params_PreparePathRemoval {
    }; // Size: 0x0
    Params_PreparePathRemoval params{};
    ProcessEvent(func, &params);
}
void AGuideSpline::OnPathArrived() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GuideSpline.OnPathArrived"));
    struct Params_OnPathArrived {
    }; // Size: 0x0
    Params_OnPathArrived params{};
    ProcessEvent(func, &params);
}
TArray<FVector> AGuideSpline::GetTrajectoryPoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GuideSpline.GetTrajectoryPoints"));
    struct Params_GetTrajectoryPoints {
        TArray<FVector> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetTrajectoryPoints params{};
    ProcessEvent(func, &params);
    return (TArray<FVector>)params.ReturnValue;
}
void AGuideSpline::CompletePathRemoval() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GuideSpline.CompletePathRemoval"));
    struct Params_CompletePathRemoval {
    }; // Size: 0x0
    Params_CompletePathRemoval params{};
    ProcessEvent(func, &params);
}
