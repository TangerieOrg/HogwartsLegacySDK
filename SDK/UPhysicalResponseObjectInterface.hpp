#pragma once
#include <cstdint>
#include "UInterface.hpp"
struct FVector;
#pragma pack(push, 1)
class UPhysicalResponseObjectInterface : public UInterface {
public:
    static UPhysicalResponseObjectInterface* StaticClass();
    void ObjectPhysicalResponseImpact(float ImpactIntensity, FName SpellName, FName ResponseConfigName, FVector& ImpactLocation);
}; // Size: 0x28
#pragma pack(pop)
