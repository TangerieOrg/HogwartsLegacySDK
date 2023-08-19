#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
class APlayerCartPlatform : public AActor {
public:
    static APlayerCartPlatform* StaticClass();
    void SetDismountLocation(AActor* Target, FTransform DismountLocation, FTransform CompanionDismountLocation);
}; // Size: 0x248
#pragma pack(pop)
