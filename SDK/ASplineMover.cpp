#include "ASplineMover.hpp"
#include "AWorldEventActor.hpp"
#include "UFunction.hpp"
#include "USplineComponent.hpp"
ASplineMover* ASplineMover::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SplineMover");
    return (ASplineMover*)res;
}
void ASplineMover::DeactivateSplineMover() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SplineMover.DeactivateSplineMover"));
    struct Params_DeactivateSplineMover {
    }; // Size: 0x0
    Params_DeactivateSplineMover params{};
    ProcessEvent(func, &params);
}
void ASplineMover::ActivateSplineMover() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SplineMover.ActivateSplineMover"));
    struct Params_ActivateSplineMover {
    }; // Size: 0x0
    Params_ActivateSplineMover params{};
    ProcessEvent(func, &params);
}
