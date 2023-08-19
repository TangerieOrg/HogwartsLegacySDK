#pragma once
#include <cstdint>
#include "AActor.hpp"
class UNiagaraComponent;
#pragma pack(push, 1)
class AWandLinkProjectile : public AActor {
public:
    UNiagaraComponent* VFXComponent; // 0x248
    static AWandLinkProjectile* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
