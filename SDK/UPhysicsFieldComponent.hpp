#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UPhysicsFieldComponent : public USceneComponent {
public:
    char pad_220[0x70];
    static UPhysicsFieldComponent* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
