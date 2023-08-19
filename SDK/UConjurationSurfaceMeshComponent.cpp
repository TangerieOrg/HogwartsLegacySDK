#include "FConjurationSurfaceMeshBuildParams.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UConjurationSurfaceMeshComponent.hpp"
#include "UConjurationSurfaceShapeComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
TArray<int32_t> UConjurationSurfaceMeshComponent::AddShapeComponent(UConjurationSurfaceShapeComponent* InShapeComponent, FTransform& InTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSurfaceMeshComponent.AddShapeComponent"));
    struct Params_AddShapeComponent {
        UConjurationSurfaceShapeComponent* InShapeComponent; // 0x0
        char pad_8[0x8];
        FTransform InTransform; // 0x10
        TArray<int32_t> ReturnValue; // 0x40
    }; // Size: 0x50
    Params_AddShapeComponent params{};
    params.InShapeComponent = (UConjurationSurfaceShapeComponent*)InShapeComponent;
    params.InTransform = (FTransform)InTransform;
    ProcessEvent(func, &params);
    InTransform = params.InTransform;
    return (TArray<int32_t>)params.ReturnValue;
}
UConjurationSurfaceMeshComponent* UConjurationSurfaceMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConjurationSurfaceMeshComponent");
    return (UConjurationSurfaceMeshComponent*)res;
}
void UConjurationSurfaceMeshComponent::MoveShape(int32_t ShapeID, FTransform InNewTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSurfaceMeshComponent.MoveShape"));
    struct Params_MoveShape {
        int32_t ShapeID; // 0x0
        char pad_4[0xc];
        FTransform InNewTransform; // 0x10
    }; // Size: 0x40
    Params_MoveShape params{};
    params.ShapeID = (int32_t)ShapeID;
    params.InNewTransform = (FTransform)InNewTransform;
    ProcessEvent(func, &params);
}
void UConjurationSurfaceMeshComponent::RemoveShapeComponent(UConjurationSurfaceShapeComponent* InShapeComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSurfaceMeshComponent.RemoveShapeComponent"));
    struct Params_RemoveShapeComponent {
        UConjurationSurfaceShapeComponent* InShapeComponent; // 0x0
    }; // Size: 0x8
    Params_RemoveShapeComponent params{};
    params.InShapeComponent = (UConjurationSurfaceShapeComponent*)InShapeComponent;
    ProcessEvent(func, &params);
}
void UConjurationSurfaceMeshComponent::RemoveShape(int32_t ShapeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSurfaceMeshComponent.RemoveShape"));
    struct Params_RemoveShape {
        int32_t ShapeID; // 0x0
    }; // Size: 0x4
    Params_RemoveShape params{};
    params.ShapeID = (int32_t)ShapeID;
    ProcessEvent(func, &params);
}
bool UConjurationSurfaceMeshComponent::DoesShapeFitBP(TArray<FVector> InVertices, FTransform InTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSurfaceMeshComponent.DoesShapeFitBP"));
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
bool UConjurationSurfaceMeshComponent::DoesShapeComponentFitBP(UConjurationSurfaceShapeComponent* InShape) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSurfaceMeshComponent.DoesShapeComponentFitBP"));
    struct Params_DoesShapeComponentFitBP {
        UConjurationSurfaceShapeComponent* InShape; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_DoesShapeComponentFitBP params{};
    params.InShape = (UConjurationSurfaceShapeComponent*)InShape;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UConjurationSurfaceMeshComponent::BuildMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSurfaceMeshComponent.BuildMesh"));
    struct Params_BuildMesh {
    }; // Size: 0x0
    Params_BuildMesh params{};
    ProcessEvent(func, &params);
}
int32_t UConjurationSurfaceMeshComponent::AddShape(TArray<FVector> InVertices, FTransform InTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSurfaceMeshComponent.AddShape"));
    struct Params_AddShape {
        TArray<FVector> InVertices; // 0x0
        FTransform InTransform; // 0x10
        int32_t ReturnValue; // 0x40
    }; // Size: 0x44
    Params_AddShape params{};
    params.InVertices = (TArray<FVector>)InVertices;
    params.InTransform = (FTransform)InTransform;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
