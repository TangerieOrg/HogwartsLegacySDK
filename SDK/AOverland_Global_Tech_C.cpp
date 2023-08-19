#include "ALevelScriptActor.hpp"
#include "AOverland_Global_Tech_C.hpp"
AOverland_Global_Tech_C* AOverland_Global_Tech_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/Overland_Global_Tech.Overland_Global_Tech_C");
    return (AOverland_Global_Tech_C*)res;
}
