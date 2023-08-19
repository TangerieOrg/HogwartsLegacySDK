#pragma once
#include <cstdint>
#include "ARigidBodyBase.hpp"
class URadialForceComponent;
#pragma pack(push, 1)
class ARadialForceActor : public ARigidBodyBase {
public:
    URadialForceComponent* ForceComponent; // 0x248
    static ARadialForceActor* StaticClass();
    void ToggleForce();
    void FireImpulse();
    void EnableForce();
    void DisableForce();
}; // Size: 0x250
#pragma pack(pop)
