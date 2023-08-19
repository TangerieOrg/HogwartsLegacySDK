#include "ALevelScriptActor.hpp"
#include "AM_COM_28_Map_C.hpp"
AM_COM_28_Map_C* AM_COM_28_Map_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Missions/M_COM_28_Map_2.M_COM_28_Map_C");
    return (AM_COM_28_Map_C*)res;
}
