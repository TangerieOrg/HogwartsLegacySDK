#include "UConjurationSurfaceShapeComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
UConjurationSurfaceShapeComponent* UConjurationSurfaceShapeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConjurationSurfaceShapeComponent");
    return (UConjurationSurfaceShapeComponent*)res;
}
int32_t UConjurationSurfaceShapeComponent::GetNumShapes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSurfaceShapeComponent.GetNumShapes"));
    struct Params_GetNumShapes {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumShapes params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UConjurationSurfaceShapeComponent::BuildShapeFromMeshes() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSurfaceShapeComponent.BuildShapeFromMeshes"));
    struct Params_BuildShapeFromMeshes {
    }; // Size: 0x0
    Params_BuildShapeFromMeshes params{};
    ProcessEvent(func, &params);
}
void UConjurationSurfaceShapeComponent::BuildShapeFromCollision() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSurfaceShapeComponent.BuildShapeFromCollision"));
    struct Params_BuildShapeFromCollision {
    }; // Size: 0x0
    Params_BuildShapeFromCollision params{};
    ProcessEvent(func, &params);
}
