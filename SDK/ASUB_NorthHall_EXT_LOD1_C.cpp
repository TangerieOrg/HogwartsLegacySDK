#include "ALevelScriptActor.hpp"
#include "ASUB_NorthHall_EXT_LOD1_C.hpp"
ASUB_NorthHall_EXT_LOD1_C* ASUB_NorthHall_EXT_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_NorthHall/SUB_NorthHall_EXTLOD/SUB_NorthHall_EXT_LOD1.SUB_NorthHall_EXT_LOD1_C");
    return (ASUB_NorthHall_EXT_LOD1_C*)res;
}
