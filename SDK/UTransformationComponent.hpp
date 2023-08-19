#pragma once
#include <cstdint>
#include "UStateEffectComponent.hpp"
#pragma pack(push, 1)
class UTransformationComponent : public UStateEffectComponent {
public:
    char pad_190[0x8];
    static UTransformationComponent* StaticClass();
}; // Size: 0x198
#pragma pack(pop)
