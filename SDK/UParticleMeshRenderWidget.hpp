#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FSMeshWidgetParticleEmitterProperties.hpp"
#include "UUserWidget.hpp"
class UStaticMesh;
class UMaterialInterface;
class UTexture2D;
class UMaterialInstanceDynamic;
class URUserVectorArtData;
#pragma pack(push, 1)
class UParticleMeshRenderWidget : public UUserWidget {
public:
    FSMeshWidgetParticleEmitterProperties Properties; // 0x268
    UStaticMesh* ParticleMesh; // 0x2b0
    UMaterialInterface* Material; // 0x2b8
    UTexture2D* ParticleTexture; // 0x2c0
    char pad_2c8[0x10];
    UMaterialInstanceDynamic* MaterialDynamic; // 0x2d8
    URUserVectorArtData* MeshAsset; // 0x2e0
    char pad_2e8[0x8];
    static UParticleMeshRenderWidget* StaticClass();
    void StopEmitter();
    void StartEmitter();
    void SetMaterial(UMaterialInterface* pMaterial);
    FLinearColor GetColorAndOpacity();
    UMaterialInstanceDynamic* CreateMaterial(UMaterialInterface* pMaterial);
}; // Size: 0x2f0
#pragma pack(pop)
