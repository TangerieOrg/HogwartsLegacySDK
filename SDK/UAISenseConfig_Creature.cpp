#include "UAISenseConfig.hpp"
#include "UAISenseConfig_Creature.hpp"
#include "UClass.hpp"
UAISenseConfig_Creature* UAISenseConfig_Creature::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISenseConfig_Creature");
    return (UAISenseConfig_Creature*)res;
}
