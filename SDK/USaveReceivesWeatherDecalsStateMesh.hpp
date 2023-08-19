#pragma once
#include <cstdint>
#include "UObject.hpp"
class AActor;
class UMeshComponent;
#pragma pack(push, 1)
class USaveReceivesWeatherDecalsStateMesh : public UObject {
public:
    char pad_28[0x50];
    bool bReceivesWeatherDecals; // 0x78
    char pad_79[0x7];
    static USaveReceivesWeatherDecalsStateMesh* StaticClass();
    void SetState(bool ReceivesWeatherDecals, bool markRenderStateDirty);
    void RestoreState(bool markRenderStateDirty);
    static USaveReceivesWeatherDecalsStateMesh* CreateMeshPool(AActor* Owner, bool ReceivesWeatherDecals);
    static USaveReceivesWeatherDecalsStateMesh* CreateMeshAutoOwner(UMeshComponent* Mesh, bool ReceivesWeatherDecals, bool markRenderStateDirty);
    static USaveReceivesWeatherDecalsStateMesh* CreateMesh(AActor* Owner, UMeshComponent* Mesh, bool ReceivesWeatherDecals, bool markRenderStateDirty);
    void AddMesh(UMeshComponent* Mesh, bool markRenderStateDirty);
}; // Size: 0x80
#pragma pack(pop)
