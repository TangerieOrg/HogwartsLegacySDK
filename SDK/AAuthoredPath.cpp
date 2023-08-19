#include "AActor.hpp"
#include "AAuthoredPath.hpp"
#include "UFunction.hpp"
#include "USplineComponent.hpp"
AAuthoredPath* AAuthoredPath::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AuthoredPath");
    return (AAuthoredPath*)res;
}
void AAuthoredPath::SnapPoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AuthoredPath.SnapPoints"));
    struct Params_SnapPoints {
    }; // Size: 0x0
    Params_SnapPoints params{};
    ProcessEvent(func, &params);
}
void AAuthoredPath::ReversePoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AuthoredPath.ReversePoints"));
    struct Params_ReversePoints {
    }; // Size: 0x0
    Params_ReversePoints params{};
    ProcessEvent(func, &params);
}
