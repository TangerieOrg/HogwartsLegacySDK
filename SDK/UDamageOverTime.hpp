#pragma once
#include <cstdint>
#include "UStateEffectComponent.hpp"
class UActorComponent;
#pragma pack(push, 1)
class UDamageOverTime : public UStateEffectComponent {
public:
    char pad_190[0x30];
    static UDamageOverTime* StaticClass();
    void OnArrestoEnd(UActorComponent* i_component);
}; // Size: 0x1c0
#pragma pack(pop)
