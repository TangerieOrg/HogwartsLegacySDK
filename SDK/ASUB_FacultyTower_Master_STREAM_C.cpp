#include "ALevelScriptActor.hpp"
#include "ASUB_FacultyTower_Master_STREAM_C.hpp"
ASUB_FacultyTower_Master_STREAM_C* ASUB_FacultyTower_Master_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_FacultyTower/SUB_FacultyTower_Master_STREAM_LvlInst_137.SUB_FacultyTower_Master_STREAM_C");
    return (ASUB_FacultyTower_Master_STREAM_C*)res;
}
