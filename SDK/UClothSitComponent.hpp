#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UClothSitComponent : public UActorComponent {
public:
    char pad_c8[0x50];
    static UClothSitComponent* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
