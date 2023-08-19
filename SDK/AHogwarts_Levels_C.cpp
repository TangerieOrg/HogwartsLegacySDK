#include "AHogwarts_Levels_C.hpp"
#include "ALevelScriptActor.hpp"
AHogwarts_Levels_C* AHogwarts_Levels_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Hogwarts_Levels_LevelInstance_14.Hogwarts_Levels_C");
    return (AHogwarts_Levels_C*)res;
}
