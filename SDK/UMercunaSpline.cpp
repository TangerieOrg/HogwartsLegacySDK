#include "FSplinePoint.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMercunaSpline.hpp"
#include "UObject.hpp"
UMercunaSpline* UMercunaSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaSpline");
    return (UMercunaSpline*)res;
}
TArray<FSplinePoint> UMercunaSpline::GetSplinePoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaSpline.GetSplinePoints"));
    struct Params_GetSplinePoints {
        TArray<FSplinePoint> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSplinePoints params{};
    ProcessEvent(func, &params);
    return (TArray<FSplinePoint>)params.ReturnValue;
}
bool UMercunaSpline::IsValid() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaSpline.IsValid"));
    struct Params_IsValid {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsValid params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UMercunaSpline::GetNumPathPoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaSpline.GetNumPathPoints"));
    struct Params_GetNumPathPoints {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumPathPoints params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UMercunaSpline::IsReady() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaSpline.IsReady"));
    struct Params_IsReady {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsReady params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector UMercunaSpline::GetPathPoint(int32_t I) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaSpline.GetPathPoint"));
    struct Params_GetPathPoint {
        int32_t I; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetPathPoint params{};
    params.I = (int32_t)I;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UMercunaSpline::IsPartial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaSpline.IsPartial"));
    struct Params_IsPartial {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPartial params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UMercunaSpline::GetLength() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaSpline.GetLength"));
    struct Params_GetLength {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLength params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
