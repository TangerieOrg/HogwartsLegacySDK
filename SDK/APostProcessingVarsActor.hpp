#pragma once
#include <cstdint>
#include "AActor.hpp"
class UPostProcessingVarsComponent;
#pragma pack(push, 1)
class APostProcessingVarsActor : public AActor {
public:
    UPostProcessingVarsComponent* Component; // 0x248
    static APostProcessingVarsActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
