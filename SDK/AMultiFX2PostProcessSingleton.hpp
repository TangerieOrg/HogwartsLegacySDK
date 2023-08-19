#pragma once
#include <cstdint>
#include "AActor.hpp"
class UMultiFX2PostProcessComponent;
#pragma pack(push, 1)
class AMultiFX2PostProcessSingleton : public AActor {
public:
    TArray<UMultiFX2PostProcessComponent*> PostProcessComponents; // 0x248
    static AMultiFX2PostProcessSingleton* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
