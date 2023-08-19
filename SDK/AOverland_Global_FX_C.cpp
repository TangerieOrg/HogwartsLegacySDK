#include "ALevelScriptActor.hpp"
#include "AOverland_Global_FX_C.hpp"
AOverland_Global_FX_C* AOverland_Global_FX_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/Overland_Global_FX.Overland_Global_FX_C");
    return (AOverland_Global_FX_C*)res;
}
