#include "ALevelScriptActor.hpp"
#include "ASUB_Global_Light_C.hpp"
ASUB_Global_Light_C* ASUB_Global_Light_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Sanctuary/SUB_Global_Light_LevelInstance_4.SUB_Global_Light_C");
    return (ASUB_Global_Light_C*)res;
}
