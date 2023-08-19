#pragma once
#include <cstdint>
#include "USpawnByPrimitiveOptions.hpp"
#pragma pack(push, 1)
class USpawnByPrimitiveOptionsSimulatePhysics : public USpawnByPrimitiveOptions {
public:
    bool bSimulatePhysics; // 0x28
    char pad_29[0x7];
    static USpawnByPrimitiveOptionsSimulatePhysics* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
