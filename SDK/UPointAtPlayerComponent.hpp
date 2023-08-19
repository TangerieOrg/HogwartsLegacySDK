#pragma once
#include <cstdint>
#include "UPointAtActorBaseComponent.hpp"
#pragma pack(push, 1)
class UPointAtPlayerComponent : public UPointAtActorBaseComponent {
public:
    int32_t PlayerIndex; // 0x250
    char pad_254[0xc];
    static UPointAtPlayerComponent* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
