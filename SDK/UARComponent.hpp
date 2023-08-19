#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "USceneComponent.hpp"
class UMaterialInterface;
class UMRMeshComponent;
class UARTrackedGeometry;
#pragma pack(push, 1)
class UARComponent : public USceneComponent {
public:
    char pad_220[0x38];
    bool bUseDefaultReplication; // 0x258
    char pad_259[0x7];
    UMaterialInterface* DefaultMeshMaterial; // 0x260
    UMaterialInterface* DefaultWireframeMeshMaterial; // 0x268
    UMRMeshComponent* MRMeshComponent; // 0x270
    UARTrackedGeometry* MyTrackedGeometry; // 0x278
    char pad_280[0x20];
    static UARComponent* StaticClass();
    void UpdateVisualization();
    void SetNativeID(FGuid NativeID);
    void ReceiveRemove();
    void OnRep_Payload();
    UMRMeshComponent* GetMRMesh();
}; // Size: 0x2a0
#pragma pack(pop)
