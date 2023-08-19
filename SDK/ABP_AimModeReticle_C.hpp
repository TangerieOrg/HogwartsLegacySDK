#pragma once
#include <cstdint>
#include "AActor_LockOnReticle.hpp"
class UWidgetComponent;
#pragma pack(push, 1)
class ABP_AimModeReticle_C : public AActor_LockOnReticle {
public:
    UWidgetComponent* Widget; // 0x330
    static ABP_AimModeReticle_C* StaticClass();
}; // Size: 0x338
#pragma pack(pop)
