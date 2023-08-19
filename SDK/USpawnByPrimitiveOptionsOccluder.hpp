#pragma once
#include <cstdint>
#include "USpawnByPrimitiveOptions.hpp"
#pragma pack(push, 1)
class USpawnByPrimitiveOptionsOccluder : public USpawnByPrimitiveOptions {
public:
    bool bUseAsOccluder; // 0x28
    bool bTreatAsBackgroundForOcclusion; // 0x29
    char pad_2a[0x6];
    static USpawnByPrimitiveOptionsOccluder* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
