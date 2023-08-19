#include "UAISense.hpp"
#include "UAISense_Creature.hpp"
UAISense_Creature* UAISense_Creature::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISense_Creature");
    return (UAISense_Creature*)res;
}
