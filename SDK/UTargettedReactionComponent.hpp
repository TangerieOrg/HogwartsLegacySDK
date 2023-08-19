#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UTargettedReactionComponent : public UActorComponent {
public:
    char pad_c8[0x18];
    bool EnableDodge; // 0xe0
    char pad_e1[0x7];
    FGameplayTagContainer SpellsList; // 0xe8
    float DodgeDistance; // 0x108
    char pad_10c[0xc];
    static UTargettedReactionComponent* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
