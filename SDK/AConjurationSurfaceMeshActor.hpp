#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FConjurationSurfaceMeshBuildParams.hpp"
#include "FDbSingleColumnInfo.hpp"
class UBoxComponent;
class UConjurationSurfaceMeshComponent;
#pragma pack(push, 1)
class AConjurationSurfaceMeshActor : public AActor {
public:
    UBoxComponent* VolumeComponent; // 0x248
    UConjurationSurfaceMeshComponent* SurfaceMeshComponent; // 0x250
    FName SurfaceTag; // 0x258
    FConjurationSurfaceMeshBuildParams BuildParams; // 0x260
    char pad_274[0x4];
    FDbSingleColumnInfo RequiredLockID; // 0x278
    FDbSingleColumnInfo ProhibitedLockID; // 0x300
    char pad_388[0x8];
    static AConjurationSurfaceMeshActor* StaticClass();
    void BuildMesh();
}; // Size: 0x390
#pragma pack(pop)
