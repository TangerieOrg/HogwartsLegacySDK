#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FIsmDesInstance {
    char pad_0[0x70];
    AActor* DA; // 0x70
    char pad_78[0x98];
}; // Size: 0x110
#pragma pack(pop)
