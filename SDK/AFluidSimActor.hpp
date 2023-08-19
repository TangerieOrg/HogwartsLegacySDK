#pragma once
#include <cstdint>
#include "AActor.hpp"
class UFluidSimComponent;
class UFluidSimEmitterComponent;
#pragma pack(push, 1)
class AFluidSimActor : public AActor {
public:
    UFluidSimComponent* FluidSimComponent; // 0x248
    UFluidSimEmitterComponent* FluidSimEmitter; // 0x250
    static AFluidSimActor* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
