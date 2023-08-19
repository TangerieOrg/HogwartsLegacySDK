#pragma once
#include <cstdint>
#include "AActor.hpp"
class USphereComponent;
#pragma pack(push, 1)
class AActor_SubsonicProximity : public AActor {
public:
    USphereComponent* SphereComponent; // 0x248
    char pad_250[0x10];
    static AActor_SubsonicProximity* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
