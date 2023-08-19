#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UInterface.hpp"
class AActor;
#pragma pack(push, 1)
class UDisarmInterface : public UInterface {
public:
    static UDisarmInterface* StaticClass();
    AActor* Disarm(AActor* Instigator, FVector HitDirection, float ScaleDisarmForce);
}; // Size: 0x28
#pragma pack(pop)
