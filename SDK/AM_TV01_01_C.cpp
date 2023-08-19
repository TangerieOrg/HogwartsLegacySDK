#include "ALevelScriptActor.hpp"
#include "AM_TV01_01_C.hpp"
AM_TV01_01_C* AM_TV01_01_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Missions/M_TV01_01_3.M_TV01_01_C");
    return (AM_TV01_01_C*)res;
}
