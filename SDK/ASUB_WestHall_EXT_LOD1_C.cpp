#include "ALevelScriptActor.hpp"
#include "ASUB_WestHall_EXT_LOD1_C.hpp"
ASUB_WestHall_EXT_LOD1_C* ASUB_WestHall_EXT_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_WestHall/SUB_WestHall_EXTLOD/SUB_WestHall_EXT_LOD1.SUB_WestHall_EXT_LOD1_C");
    return (ASUB_WestHall_EXT_LOD1_C*)res;
}
