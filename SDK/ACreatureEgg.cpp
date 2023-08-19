#include "AActor.hpp"
#include "ACreatureEgg.hpp"
#include "UObjectStateComponent.hpp"
ACreatureEgg* ACreatureEgg::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureEgg");
    return (ACreatureEgg*)res;
}
