#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessTranslucencySortDistanceOffset : public UActorMeshSetupProcessFiltered {
public:
    float TranslucencySortDistanceOffset; // 0x30
    char pad_34[0x4];
    static UActorMeshSetupProcessTranslucencySortDistanceOffset* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
