#include "UBPI_Dungeon_Entrances_C.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
void UBPI_Dungeon_Entrances_C::BP_IFACE_Santum_Dungeon_Entrance_START() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Sanctum_Dungeon/BPI_Dungeon_Entrances.BPI_Dungeon_Entrances_C.BP_IFACE_Santum_Dungeon_Entrance_START"));
    struct Params_BP_IFACE_Santum_Dungeon_Entrance_START {
    }; // Size: 0x0
    Params_BP_IFACE_Santum_Dungeon_Entrance_START params{};
    ProcessEvent(func, &params);
}
UBPI_Dungeon_Entrances_C* UBPI_Dungeon_Entrances_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Sanctum_Dungeon/BPI_Dungeon_Entrances.BPI_Dungeon_Entrances_C");
    return (UBPI_Dungeon_Entrances_C*)res;
}
void UBPI_Dungeon_Entrances_C::BP_IFACE_Sanctum_Dungeon_1_Healed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Sanctum_Dungeon/BPI_Dungeon_Entrances.BPI_Dungeon_Entrances_C.BP_IFACE_Sanctum_Dungeon_1_Healed"));
    struct Params_BP_IFACE_Sanctum_Dungeon_1_Healed {
    }; // Size: 0x0
    Params_BP_IFACE_Sanctum_Dungeon_1_Healed params{};
    ProcessEvent(func, &params);
}
void UBPI_Dungeon_Entrances_C::BP_IFACE_Sanctum_Dungeon_1_Destroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Sanctum_Dungeon/BPI_Dungeon_Entrances.BPI_Dungeon_Entrances_C.BP_IFACE_Sanctum_Dungeon_1_Destroyed"));
    struct Params_BP_IFACE_Sanctum_Dungeon_1_Destroyed {
    }; // Size: 0x0
    Params_BP_IFACE_Sanctum_Dungeon_1_Destroyed params{};
    ProcessEvent(func, &params);
}
void UBPI_Dungeon_Entrances_C::BP_IFACE_Santum_Dungeon_Entrance_END() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Sanctum_Dungeon/BPI_Dungeon_Entrances.BPI_Dungeon_Entrances_C.BP_IFACE_Santum_Dungeon_Entrance_END"));
    struct Params_BP_IFACE_Santum_Dungeon_Entrance_END {
    }; // Size: 0x0
    Params_BP_IFACE_Santum_Dungeon_Entrance_END params{};
    ProcessEvent(func, &params);
}
