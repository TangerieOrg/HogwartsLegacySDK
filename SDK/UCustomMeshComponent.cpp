#include "FCustomMeshTriangle.hpp"
#include "UCustomMeshComponent.hpp"
#include "UFunction.hpp"
#include "UMeshComponent.hpp"
void UCustomMeshComponent::AddCustomMeshTriangles(TArray<FCustomMeshTriangle>& Triangles) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles"));
    struct Params_AddCustomMeshTriangles {
        TArray<FCustomMeshTriangle> Triangles; // 0x0
    }; // Size: 0x10
    Params_AddCustomMeshTriangles params{};
    params.Triangles = (TArray<FCustomMeshTriangle>)Triangles;
    ProcessEvent(func, &params);
    Triangles = params.Triangles;
}
UCustomMeshComponent* UCustomMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/CustomMeshComponent.CustomMeshComponent");
    return (UCustomMeshComponent*)res;
}
bool UCustomMeshComponent::SetCustomMeshTriangles(TArray<FCustomMeshTriangle>& Triangles) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles"));
    struct Params_SetCustomMeshTriangles {
        TArray<FCustomMeshTriangle> Triangles; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetCustomMeshTriangles params{};
    params.Triangles = (TArray<FCustomMeshTriangle>)Triangles;
    ProcessEvent(func, &params);
    Triangles = params.Triangles;
    return (bool)params.ReturnValue;
}
void UCustomMeshComponent::ClearCustomMeshTriangles() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles"));
    struct Params_ClearCustomMeshTriangles {
    }; // Size: 0x0
    Params_ClearCustomMeshTriangles params{};
    ProcessEvent(func, &params);
}
