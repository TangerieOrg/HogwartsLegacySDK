#pragma once
#include <cstdint>
#include "FConjurationSurfaceMeshBuildParams.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UPrimitiveComponent.hpp"
class UConjurationSurfaceShapeComponent;
#pragma pack(push, 1)
class UConjurationSurfaceMeshComponent : public UPrimitiveComponent {
public:
    FConjurationSurfaceMeshBuildParams BuildParams; // 0x480
    char pad_494[0x9c];
    static UConjurationSurfaceMeshComponent* StaticClass();
    void RemoveShapeComponent(UConjurationSurfaceShapeComponent* InShapeComponent);
    void RemoveShape(int32_t ShapeID);
    void MoveShape(int32_t ShapeID, FTransform InNewTransform);
    bool DoesShapeFitBP(TArray<FVector> InVertices, FTransform InTransform);
    bool DoesShapeComponentFitBP(UConjurationSurfaceShapeComponent* InShape);
    void BuildMesh();
    TArray<int32_t> AddShapeComponent(UConjurationSurfaceShapeComponent* InShapeComponent, FTransform& InTransform);
    int32_t AddShape(TArray<FVector> InVertices, FTransform InTransform);
}; // Size: 0x530
#pragma pack(pop)
