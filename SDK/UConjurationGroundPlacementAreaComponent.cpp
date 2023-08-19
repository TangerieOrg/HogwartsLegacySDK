#include "FConjurationSurfaceMeshBuildParams.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UConjurationGroundPlacementAreaComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
UConjurationGroundPlacementAreaComponent* UConjurationGroundPlacementAreaComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConjurationGroundPlacementAreaComponent");
    return (UConjurationGroundPlacementAreaComponent*)res;
}
bool UConjurationGroundPlacementAreaComponent::DoesShapeFitBP(TArray<FVector> InVertices, FTransform InTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationGroundPlacementAreaComponent.DoesShapeFitBP"));
    struct Params_DoesShapeFitBP {
        TArray<FVector> InVertices; // 0x0
        FTransform InTransform; // 0x10
        bool ReturnValue; // 0x40
    }; // Size: 0x41
    Params_DoesShapeFitBP params{};
    params.InVertices = (TArray<FVector>)InVertices;
    params.InTransform = (FTransform)InTransform;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UConjurationGroundPlacementAreaComponent::BuildMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationGroundPlacementAreaComponent.BuildMesh"));
    struct Params_BuildMesh {
    }; // Size: 0x0
    Params_BuildMesh params{};
    ProcessEvent(func, &params);
}
