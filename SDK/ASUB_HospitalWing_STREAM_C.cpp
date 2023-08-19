#include "ALevelScriptActor.hpp"
#include "ASUB_HospitalWing_STREAM_C.hpp"
ASUB_HospitalWing_STREAM_C* ASUB_HospitalWing_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_HospitalWing/SUB_HospitalWing_STREAM_LvlInst_139.SUB_HospitalWing_STREAM_C");
    return (ASUB_HospitalWing_STREAM_C*)res;
}
