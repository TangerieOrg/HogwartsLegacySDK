#include "ALevelScriptActor.hpp"
#include "AOverland_Global_Map_C.hpp"
AOverland_Global_Map_C* AOverland_Global_Map_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/Overland_Global_Map.Overland_Global_Map_C");
    return (AOverland_Global_Map_C*)res;
}
