#pragma once
#include <cstdint>
class UMeshComponent;
#pragma pack(push, 1)
struct FLightGroupWindowMaterialsBuilder {
    FName WindowGroupMaterialParameter; // 0x0
    int32_t LightGroup; // 0x8
    char pad_c[0x4];
    TArray<UMeshComponent*> RelevantMaterialMeshes; // 0x10
}; // Size: 0x20
#pragma pack(pop)
