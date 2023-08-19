#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAnimationArchitectTagProvider.hpp"
#pragma pack(push, 1)
class UAnimTag_Enemy_POIStance : public UAnimationArchitectTagProvider {
public:
    FGameplayTagContainer AnimTags; // 0x28
    bool bDesiredPOIAttackStance; // 0x48
    char pad_49[0x7];
    static UAnimTag_Enemy_POIStance* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
