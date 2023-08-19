#pragma once
#include <cstdint>
class UCameraShakeBase;
#pragma pack(push, 1)
struct FPooledCameraShakes {
    TArray<UCameraShakeBase*> PooledShakes; // 0x0
}; // Size: 0x10
#pragma pack(pop)
