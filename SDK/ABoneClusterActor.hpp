#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
struct FVector;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABoneClusterActor : public AActor {
public:
    char pad_248[0x18];
    static ABoneClusterActor* StaticClass();
    void RemoveStencilFromBones(TArray<UStaticMeshComponent*> Bones);
    UPrimitiveComponent* GetClosestBoneComponent(FVector& SourceLocation);
    void ComputeBoneCloudCenterAndRadius();
}; // Size: 0x260
#pragma pack(pop)
