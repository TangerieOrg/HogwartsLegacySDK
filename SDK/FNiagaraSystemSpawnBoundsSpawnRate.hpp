#pragma once
#include <cstdint>
#include "ENiagaraSpawnBoundsMethod.hpp"
#pragma pack(push, 1)
struct FNiagaraSystemSpawnBoundsSpawnRate {
    FName SpawnRateVar; // 0x0
    float ReferenceMeasure; // 0x8
    float LinearPower; // 0xc
    float MinSpawnRate; // 0x10
    float MaxSpawnRate; // 0x14
    ENiagaraSpawnBoundsMethod Method; // 0x18
    uint8_t bUseMinSpawnRate : 1; // 0x19
    uint8_t bUseMaxSpawnRate : 1; // 0x19
    uint8_t pad_bitfield_19_2 : 6;
    char pad_1a[0x2];
}; // Size: 0x1c
#pragma pack(pop)
