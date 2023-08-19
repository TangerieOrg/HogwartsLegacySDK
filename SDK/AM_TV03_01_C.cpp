#include "ALevelScriptActor.hpp"
#include "AM_TV03_01_C.hpp"
AM_TV03_01_C* AM_TV03_01_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Missions/M_TV03_01_4.M_TV03_01_C");
    return (AM_TV03_01_C*)res;
}
