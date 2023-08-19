#include "ACO_Water_C.hpp"
#include "ALevelScriptActor.hpp"
ACO_Water_C* ACO_Water_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/CO_Water.CO_Water_C");
    return (ACO_Water_C*)res;
}
