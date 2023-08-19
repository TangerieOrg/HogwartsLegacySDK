#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UParticleModule : public UObject {
public:
    uint8_t bSpawnModule : 1; // 0x28
    uint8_t bUpdateModule : 1; // 0x28
    uint8_t bFinalUpdateModule : 1; // 0x28
    uint8_t bUpdateForGPUEmitter : 1; // 0x28
    uint8_t bCurvesAsColor : 1; // 0x28
    uint8_t b3DDrawMode : 1; // 0x28
    uint8_t bSupported3DDrawMode : 1; // 0x28
    uint8_t bEnabled : 1; // 0x28
    uint8_t bEditable : 1; // 0x29
    uint8_t LODDuplicate : 1; // 0x29
    uint8_t bSupportsRandomSeed : 1; // 0x29
    uint8_t bRequiresLoopingNotification : 1; // 0x29
    uint8_t pad_bitfield_29_4 : 4;
    uint8_t LODValidity; // 0x2a
    char pad_2b[0x5];
    static UParticleModule* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
