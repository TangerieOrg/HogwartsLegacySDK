#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UNavigationInvokerComponent : public UActorComponent {
public:
    float TileGenerationRadius; // 0xc8
    float TileRemovalRadius; // 0xcc
    static UNavigationInvokerComponent* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
