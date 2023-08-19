#include "AHS_Water_C.hpp"
#include "ALevelScriptActor.hpp"
AHS_Water_C* AHS_Water_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HS_Water.HS_Water_C");
    return (AHS_Water_C*)res;
}
