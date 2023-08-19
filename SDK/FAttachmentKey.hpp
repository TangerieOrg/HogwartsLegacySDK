#pragma once
#include <cstdint>
class UDynamicSplineSet;
class UStaticMeshComponent;
#pragma pack(push, 1)
struct FAttachmentKey {
    UDynamicSplineSet* ParentSplineSet; // 0x0
    UStaticMeshComponent* HostMesh; // 0x8
}; // Size: 0x10
#pragma pack(pop)
