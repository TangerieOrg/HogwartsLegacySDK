#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UPrimitiveComponent.hpp"
class UMaterialInterface;
class UBodySetup;
#pragma pack(push, 1)
class UMRMeshComponent : public UPrimitiveComponent {
public:
    char pad_480[0x10];
    UMaterialInterface* Material; // 0x490
    UMaterialInterface* WireframeMaterial; // 0x498
    bool bCreateMeshProxySections; // 0x4a0
    bool bUpdateNavMeshOnMeshUpdate; // 0x4a1
    bool bNeverCreateCollisionMesh; // 0x4a2
    char pad_4a3[0x5];
    UBodySetup* CachedBodySetup; // 0x4a8
    TArray<UBodySetup*> BodySetups; // 0x4b0
    char pad_4c0[0x80];
    static UMRMeshComponent* StaticClass();
    void SetWireframeMaterial(UMaterialInterface* InMaterial);
    void SetWireframeColor(FLinearColor& InColor);
    void SetUseWireframe(bool bUseWireframe);
    void SetEnableMeshOcclusion(bool bEnable);
    bool IsConnected();
    FLinearColor GetWireframeColor();
    bool GetUseWireframe();
    bool GetEnableMeshOcclusion();
    void ForceNavMeshUpdate();
    void Clear();
}; // Size: 0x540
#pragma pack(pop)
