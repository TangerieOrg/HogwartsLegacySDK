#pragma once
#include <cstdint>
#include "AActor.hpp"
class UMaterialParameterCollection;
#pragma pack(push, 1)
class AVegetationInteractionArbitror : public AActor {
public:
    UMaterialParameterCollection* MaterialParameterCollection; // 0x248
    float DisplacementCameraDistanceCutoff; // 0x250
    bool bSuspend; // 0x254
    char pad_255[0x53];
    static AVegetationInteractionArbitror* StaticClass();
}; // Size: 0x2a8
#pragma pack(pop)
