#include "AActor.hpp"
#include "AConjurationGroundPlacementAreaActor.hpp"
#include "UConjurationGroundPlacementAreaComponent.hpp"
#include "UFunction.hpp"
AConjurationGroundPlacementAreaActor* AConjurationGroundPlacementAreaActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConjurationGroundPlacementAreaActor");
    return (AConjurationGroundPlacementAreaActor*)res;
}
void AConjurationGroundPlacementAreaActor::BuildMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationGroundPlacementAreaActor.BuildMesh"));
    struct Params_BuildMesh {
    }; // Size: 0x0
    Params_BuildMesh params{};
    ProcessEvent(func, &params);
}
