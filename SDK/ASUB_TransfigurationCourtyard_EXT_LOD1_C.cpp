#include "ALevelScriptActor.hpp"
#include "ASUB_TransfigurationCourtyard_EXT_LOD1_C.hpp"
ASUB_TransfigurationCourtyard_EXT_LOD1_C* ASUB_TransfigurationCourtyard_EXT_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_TransfigurationCourtyard/SUB_TransfigurationCourtyard_EXTLOD/SUB_TransfigurationCourtyard_EXT_LOD1.SUB_TransfigurationCourtyard_EXT_LOD1_C");
    return (ASUB_TransfigurationCourtyard_EXT_LOD1_C*)res;
}
