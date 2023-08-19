#pragma once
#include <cstdint>
#include "AMunitionType_SubsonicSpell.hpp"
#pragma pack(push, 1)
class ASubSonic_VenomousTentacula_Bulb : public AMunitionType_SubsonicSpell {
public:
    static ASubSonic_VenomousTentacula_Bulb* StaticClass();
    void SetupProjectile();
}; // Size: 0x538
#pragma pack(pop)
