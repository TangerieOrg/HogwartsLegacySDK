#pragma once
#include <cstdint>
#include "ARigidBodyBase.hpp"
class UPhysicsThrusterComponent;
#pragma pack(push, 1)
class APhysicsThruster : public ARigidBodyBase {
public:
    UPhysicsThrusterComponent* ThrusterComponent; // 0x248
    static APhysicsThruster* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
