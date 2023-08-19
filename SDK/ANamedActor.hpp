#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class ANamedActor : public AActor {
public:
    FName ActorName; // 0x248
    static ANamedActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
