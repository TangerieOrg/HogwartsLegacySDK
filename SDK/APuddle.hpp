#pragma once
#include <cstdint>
#include "AActor.hpp"
class UPhoenixPhysicalMaterial;
class UStaticMeshComponent;
#pragma pack(push, 1)
class APuddle : public AActor {
public:
    UPhoenixPhysicalMaterial* PhysMat; // 0x248
    UStaticMeshComponent* Mesh; // 0x250
    char pad_258[0x8];
    static APuddle* StaticClass();
    void OnEndOverlap(AActor* SelfActor, AActor* OtherActor);
    void OnBeginOverlap(AActor* SelfActor, AActor* OtherActor);
}; // Size: 0x260
#pragma pack(pop)
