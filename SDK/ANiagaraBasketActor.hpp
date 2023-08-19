#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class ANiagaraBasketActor : public AActor {
public:
    TArray<void*> Components; // 0x248
    static ANiagaraBasketActor* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
