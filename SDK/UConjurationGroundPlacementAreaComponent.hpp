#pragma once
#include <cstdint>
#include "FConjurationSurfaceMeshBuildParams.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UPrimitiveComponent.hpp"
#pragma pack(push, 1)
class UConjurationGroundPlacementAreaComponent : public UPrimitiveComponent {
public:
    FConjurationSurfaceMeshBuildParams BuildParams; // 0x480
    char pad_494[0x7c];
    static UConjurationGroundPlacementAreaComponent* StaticClass();
    bool DoesShapeFitBP(TArray<FVector> InVertices, FTransform InTransform);
    void BuildMesh();
}; // Size: 0x510
#pragma pack(pop)
