#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UFaceIDComponent : public UActorComponent {
public:
    int32_t Port; // 0xc8
    char pad_cc[0x8c];
    static UFaceIDComponent* StaticClass();
}; // Size: 0x158
#pragma pack(pop)
