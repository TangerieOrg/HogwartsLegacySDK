#include "ALevelScriptActor.hpp"
#include "ASUB_HospitalWing_Ext_LOD1_C.hpp"
ASUB_HospitalWing_Ext_LOD1_C* ASUB_HospitalWing_Ext_LOD1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_HospitalWing/SUB_HospitalWing_EXTLOD/SUB_HospitalWing_Ext_LOD1.SUB_HospitalWing_Ext_LOD1_C");
    return (ASUB_HospitalWing_Ext_LOD1_C*)res;
}
