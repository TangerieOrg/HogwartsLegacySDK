#include "AActor.hpp"
#include "ACreaturePerch.hpp"
ACreaturePerch* ACreaturePerch::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreaturePerch");
    return (ACreaturePerch*)res;
}
