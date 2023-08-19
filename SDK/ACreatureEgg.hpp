#pragma once
#include <cstdint>
#include "AActor.hpp"
class UObjectStateComponent;
#pragma pack(push, 1)
class ACreatureEgg : public AActor {
public:
    UObjectStateComponent* ObjectStateComponent; // 0x248
    static ACreatureEgg* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
