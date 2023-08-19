#pragma once
#include <cstdint>
#include "UObject.hpp"
class USoundBase;
#pragma pack(push, 1)
class UPhysicsCollisionHandler : public UObject {
public:
    float ImpactThreshold; // 0x28
    float ImpactReFireDelay; // 0x2c
    USoundBase* DefaultImpactSound; // 0x30
    float LastImpactSoundTime; // 0x38
    char pad_3c[0x4];
    static UPhysicsCollisionHandler* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
