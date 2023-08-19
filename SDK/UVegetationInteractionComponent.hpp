#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UVegetationInteractionComponent : public UActorComponent {
public:
    bool bSuspend; // 0xc8
    char pad_c9[0x7];
    static UVegetationInteractionComponent* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
