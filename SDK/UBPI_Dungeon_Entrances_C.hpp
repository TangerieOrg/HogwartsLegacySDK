#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UBPI_Dungeon_Entrances_C : public UInterface {
public:
    static UBPI_Dungeon_Entrances_C* StaticClass();
    void BP_IFACE_Sanctum_Dungeon_1_Healed();
    void BP_IFACE_Sanctum_Dungeon_1_Destroyed();
    void BP_IFACE_Santum_Dungeon_Entrance_START();
    void BP_IFACE_Santum_Dungeon_Entrance_END();
}; // Size: 0x28
#pragma pack(pop)
