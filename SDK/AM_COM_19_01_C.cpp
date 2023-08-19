#include "ALevelScriptActor.hpp"
#include "AM_COM_19_01_C.hpp"
AM_COM_19_01_C* AM_COM_19_01_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Missions/M_COM_19_01_1.M_COM_19_01_C");
    return (AM_COM_19_01_C*)res;
}
