#pragma once
#include <cstdint>
#include "UStaticMeshComponent.hpp"
class UStaticMesh;
#pragma pack(push, 1)
class UOdcObstacleMeshComponent : public UStaticMeshComponent {
public:
    UStaticMesh* NavStaticMesh; // 0x510
    char pad_518[0x8];
    static UOdcObstacleMeshComponent* StaticClass();
}; // Size: 0x520
#pragma pack(pop)
