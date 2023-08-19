#pragma once
#include <cstdint>
#include "AWaterVolumeBase.hpp"
#include "FBoxSphereBounds.hpp"
class USceneComponent;
class UStaticMeshComponent;
class UMaterialInstance;
class UStaticMesh;
struct FVector;
#pragma pack(push, 1)
class ADungeonWaterVolume : public AWaterVolumeBase {
public:
    USceneComponent* RootComp; // 0x4b0
    UStaticMeshComponent* SurfacePlane; // 0x4b8
    bool bShallowWater; // 0x4c0
    char pad_4c1[0x7];
    UMaterialInstance* WaterMaterial; // 0x4c8
    static ADungeonWaterVolume* StaticClass();
    void SetupWater(FBoxSphereBounds i_Bounds, UStaticMesh* i_SurfaceMesh, FVector& i_SurfaceLocation, UStaticMesh* i_DeepCollision, FVector& i_DeepLocation, UStaticMesh* i_ShallowCollision, FVector& i_ShallowLocation);
    void FinalizeSetup();
}; // Size: 0x4d0
#pragma pack(pop)
