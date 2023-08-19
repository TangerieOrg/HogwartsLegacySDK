#pragma once
#include <cstdint>
class UMaterialFunctionInterface;
#pragma pack(push, 1)
struct FMaterialLayersFunctions {
    TArray<UMaterialFunctionInterface*> Layers; // 0x0
    TArray<UMaterialFunctionInterface*> Blends; // 0x10
    TArray<bool> LayerStates; // 0x20
    FString KeyString; // 0x30
}; // Size: 0x40
#pragma pack(pop)
