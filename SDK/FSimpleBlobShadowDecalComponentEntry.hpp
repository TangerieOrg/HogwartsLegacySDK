#pragma once
#include <cstdint>
class UClass;
class UMaterialInterface;
#pragma pack(push, 1)
struct FSimpleBlobShadowDecalComponentEntry {
    bool bUseActorClass; // 0x0
    char pad_1[0x2f];
    bool bIncludeActorSubclasses; // 0x30
    bool bUseMovementComponentClass; // 0x31
    char pad_32[0x2e];
    bool bIncludeMovementComponentSubclasses; // 0x60
    char pad_61[0x7];
    UClass* BlobShadowDecalComponentClass; // 0x68
    UMaterialInterface* OverrideDecalMaterial; // 0x70
}; // Size: 0x78
#pragma pack(pop)
