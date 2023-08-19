#pragma once
#include <cstdint>
#include "ABP_SelfArrangingBookshelf_Parent_C.hpp"
class UTransformationFxInfoComponent;
class UHierarchicalInstancedStaticMeshComponent;
class UStaticMeshComponent;
class UMaterialBillboardComponent;
class USplineComponent;
class UChildActorComponent;
#pragma pack(push, 1)
class ABP_Sanc_HubBookshelfRightUnit_01_Dwiz_C : public ABP_SelfArrangingBookshelf_Parent_C {
public:
    UTransformationFxInfoComponent* TransformationFxInfo_0_0; // 0x2b0
    UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh11; // 0x2b8
    UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh10; // 0x2c0
    UStaticMeshComponent* StaticMesh7; // 0x2c8
    UStaticMeshComponent* StaticMesh6; // 0x2d0
    UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh9; // 0x2d8
    UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh8; // 0x2e0
    UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh7; // 0x2e8
    UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh6; // 0x2f0
    UStaticMeshComponent* StaticMesh5; // 0x2f8
    UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh1; // 0x300
    UStaticMeshComponent* StaticMesh4; // 0x308
    UStaticMeshComponent* StaticMesh3; // 0x310
    UStaticMeshComponent* StaticMesh2; // 0x318
    UStaticMeshComponent* StaticMesh1; // 0x320
    UStaticMeshComponent* StaticMesh; // 0x328
    UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh4; // 0x330
    UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh3; // 0x338
    UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh2; // 0x340
    UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh5; // 0x348
    UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh; // 0x350
    UMaterialBillboardComponent* MaterialBillboard17; // 0x358
    USplineComponent* Spline; // 0x360
    UChildActorComponent* BP_SplineHoveringActors1; // 0x368
    static ABP_Sanc_HubBookshelfRightUnit_01_Dwiz_C* StaticClass();
    void UserConstructionScript(TArray<USplineComponent*>& K2Node_MakeArray_Array);
}; // Size: 0x370
#pragma pack(pop)
