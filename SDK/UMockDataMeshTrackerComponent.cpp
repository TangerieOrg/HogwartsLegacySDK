#include "EMeshTrackerVertexColorMode.hpp"
#include "FColor.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMRMeshComponent.hpp"
#include "UMockDataMeshTrackerComponent.hpp"
#include "USceneComponent.hpp"
UMockDataMeshTrackerComponent* UMockDataMeshTrackerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/MRMesh.MockDataMeshTrackerComponent");
    return (UMockDataMeshTrackerComponent*)res;
}
void UMockDataMeshTrackerComponent::OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature"));
    struct Params_OnMockDataMeshTrackerUpdated__DelegateSignature {
        int32_t Index; // 0x0
        char pad_4[0x4];
        TArray<FVector> Vertices; // 0x8
        TArray<int32_t> Triangles; // 0x18
        TArray<FVector> Normals; // 0x28
        TArray<float> Confidence; // 0x38
    }; // Size: 0x48
    Params_OnMockDataMeshTrackerUpdated__DelegateSignature params{};
    params.Index = (int32_t)Index;
    params.Vertices = (TArray<FVector>)Vertices;
    params.Triangles = (TArray<int32_t>)Triangles;
    params.Normals = (TArray<FVector>)Normals;
    params.Confidence = (TArray<float>)Confidence;
    ProcessEvent(func, &params);
    Vertices = params.Vertices;
    Triangles = params.Triangles;
    Normals = params.Normals;
    Confidence = params.Confidence;
}
void UMockDataMeshTrackerComponent::DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh"));
    struct Params_DisconnectMRMesh {
        UMRMeshComponent* InMRMeshPtr; // 0x0
    }; // Size: 0x8
    Params_DisconnectMRMesh params{};
    params.InMRMeshPtr = (UMRMeshComponent*)InMRMeshPtr;
    ProcessEvent(func, &params);
}
void UMockDataMeshTrackerComponent::ConnectMRMesh(UMRMeshComponent* InMRMeshPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh"));
    struct Params_ConnectMRMesh {
        UMRMeshComponent* InMRMeshPtr; // 0x0
    }; // Size: 0x8
    Params_ConnectMRMesh params{};
    params.InMRMeshPtr = (UMRMeshComponent*)InMRMeshPtr;
    ProcessEvent(func, &params);
}
