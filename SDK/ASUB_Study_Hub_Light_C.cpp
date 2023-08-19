#include "ALevelScriptActor.hpp"
#include "ASUB_Study_Hub_Light_C.hpp"
ASUB_Study_Hub_Light_C* ASUB_Study_Hub_Light_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Sanctuary/SUB_Sanctuary_Study/SUB_Study_Hub/SUB_Study_Hub_Light_LevelInstance_5.SUB_Study_Hub_Light_C");
    return (ASUB_Study_Hub_Light_C*)res;
}
