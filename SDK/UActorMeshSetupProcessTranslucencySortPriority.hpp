#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessTranslucencySortPriority : public UActorMeshSetupProcessFiltered {
public:
    int32_t TranslucencySortPriority; // 0x30
    char pad_34[0x4];
    static UActorMeshSetupProcessTranslucencySortPriority* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
