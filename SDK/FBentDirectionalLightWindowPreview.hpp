#pragma once
#include <cstdint>
class UStaticMeshComponent;
#pragma pack(push, 1)
struct FBentDirectionalLightWindowPreview {
    UStaticMeshComponent* PaneComponent; // 0x0
    TArray<UStaticMeshComponent*> DirectionComponents; // 0x8
}; // Size: 0x18
#pragma pack(pop)
