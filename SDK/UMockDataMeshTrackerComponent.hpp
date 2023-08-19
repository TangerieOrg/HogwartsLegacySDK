#pragma once
#include <cstdint>
#include "EMeshTrackerVertexColorMode.hpp"
#include "FColor.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "USceneComponent.hpp"
class UMRMeshComponent;
#pragma pack(push, 1)
class UMockDataMeshTrackerComponent : public USceneComponent {
public:
    char pad_220[0x8];
    bool ScanWorld; // 0x228
    bool RequestNormals; // 0x229
    bool RequestVertexConfidence; // 0x22a
    EMeshTrackerVertexColorMode VertexColorMode; // 0x22b
    char pad_22c[0x4];
    TArray<FColor> BlockVertexColors; // 0x230
    FLinearColor VertexColorFromConfidenceZero; // 0x240
    FLinearColor VertexColorFromConfidenceOne; // 0x250
    float UpdateInterval; // 0x260
    char pad_264[0x4];
    UMRMeshComponent* MRMesh; // 0x268
    char pad_270[0x20];
    static UMockDataMeshTrackerComponent* StaticClass();
    void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence);
    void DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);
    void ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);
}; // Size: 0x290
#pragma pack(pop)
