#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FMeshOffset.hpp"
class UStaticMesh;
class UMaterialInterface;
#pragma pack(push, 1)
class ALODProxyContainer : public AActor {
public:
    UStaticMesh* BaseProxyMesh; // 0x248
    TArray<UStaticMesh*> AdditionalProxyMeshes; // 0x250
    TArray<UStaticMesh*> WinterProxyMeshes; // 0x260
    TArray<FMeshOffset> MeshOffset; // 0x270
    UStaticMesh* AlphaMesh; // 0x280
    AActor* LandscapeMeshProxyActor; // 0x288
    UMaterialInterface* DefaultMaterial; // 0x290
    UMaterialInterface* FallMaterial; // 0x298
    UMaterialInterface* WinterMaterial; // 0x2a0
    UStaticMesh* LandscapeStaticMesh; // 0x2a8
    static ALODProxyContainer* StaticClass();
}; // Size: 0x2b0
#pragma pack(pop)
