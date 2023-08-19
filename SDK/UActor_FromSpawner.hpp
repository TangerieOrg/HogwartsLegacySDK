#pragma once
#include <cstdint>
#include "UActorProvider.hpp"
class UActorSpawner;
#pragma pack(push, 1)
class UActor_FromSpawner : public UActorProvider {
public:
    UActorSpawner* Spawner; // 0x38
    static UActor_FromSpawner* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
