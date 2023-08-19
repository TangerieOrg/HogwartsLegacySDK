#include "UAISense.hpp"
#include "UAISense_NPC.hpp"
UAISense_NPC* UAISense_NPC::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISense_NPC");
    return (UAISense_NPC*)res;
}
