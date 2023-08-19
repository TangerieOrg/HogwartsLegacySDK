#include "AActor.hpp"
#include "AConjurationSurfaceMeshActor.hpp"
#include "FConjurationSurfaceMeshBuildParams.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UBoxComponent.hpp"
#include "UConjurationSurfaceMeshComponent.hpp"
#include "UFunction.hpp"
AConjurationSurfaceMeshActor* AConjurationSurfaceMeshActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConjurationSurfaceMeshActor");
    return (AConjurationSurfaceMeshActor*)res;
}
void AConjurationSurfaceMeshActor::BuildMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSurfaceMeshActor.BuildMesh"));
    struct Params_BuildMesh {
    }; // Size: 0x0
    Params_BuildMesh params{};
    ProcessEvent(func, &params);
}
