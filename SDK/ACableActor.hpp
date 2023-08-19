#pragma once
#include <cstdint>
#include "AActor.hpp"
class UCableComponent;
#pragma pack(push, 1)
class ACableActor : public AActor {
public:
    UCableComponent* CableComponent; // 0x248
    static ACableActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
