#pragma once
#include <cstdint>
#include "AWaterVolumeBase.hpp"
#include "FBoxSphereBounds.hpp"
class USceneComponent;
class UWaterTileMeshComponent;
class ULakeAudioComponent;
class UStaticMesh;
struct FVector;
#pragma pack(push, 1)
class AWaterVolume : public AWaterVolumeBase {
public:
    USceneComponent* RootComp; // 0x4b0
    UWaterTileMeshComponent* WaterTileMeshComponent; // 0x4b8
    ULakeAudioComponent* LakeAudioComponent; // 0x4c0
    static AWaterVolume* StaticClass();
    void SetupWater(FBoxSphereBounds i_Bounds, UStaticMesh* i_DeepCollision, FVector& i_DeepLocation, UStaticMesh* i_ShallowCollision, FVector& i_ShallowLocation);
    void RecalculateDepth();
}; // Size: 0x4c8
#pragma pack(pop)
