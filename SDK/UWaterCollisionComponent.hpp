#pragma once
#include <cstdint>
#include "UStaticMeshComponent.hpp"
#pragma pack(push, 1)
class UWaterCollisionComponent : public UStaticMeshComponent {
public:
    static UWaterCollisionComponent* StaticClass();
}; // Size: 0x510
#pragma pack(pop)
