#pragma once
#include <cstdint>
#include "FBoxSphereBounds.hpp"
#include "FColor.hpp"
#include "FKConvexElem.hpp"
#include "FLinearColor.hpp"
#include "FProcMeshSection.hpp"
#include "FProcMeshTangent.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UMeshComponent.hpp"
class UBodySetup;
#pragma pack(push, 1)
class UProceduralMeshComponent : public UMeshComponent {
public:
    bool bUseComplexAsSimpleCollision; // 0x4b0
    bool bUseAsyncCooking; // 0x4b1
    char pad_4b2[0x6];
    UBodySetup* ProcMeshBodySetup; // 0x4b8
    TArray<FProcMeshSection> ProcMeshSections; // 0x4c0
    TArray<FKConvexElem> CollisionConvexElems; // 0x4d0
    FBoxSphereBounds LocalBounds; // 0x4e0
    char pad_4fc[0x4];
    TArray<UBodySetup*> AsyncBodySetupQueue; // 0x500
    static UProceduralMeshComponent* StaticClass();
    void UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents);
    void UpdateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents);
    void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility);
    bool IsMeshSectionVisible(int32_t SectionIndex);
    int32_t GetNumSections();
    void CreateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision);
    void CreateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision);
    void ClearMeshSection(int32_t SectionIndex);
    void ClearCollisionConvexMeshes();
    void ClearAllMeshSections();
    void AddCollisionConvexMesh(TArray<FVector> ConvexVerts);
}; // Size: 0x510
#pragma pack(pop)
