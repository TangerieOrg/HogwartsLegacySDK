#include "ALevelScriptActor.hpp"
#include "AOverland_Global_FarFoliage_C.hpp"
AOverland_Global_FarFoliage_C* AOverland_Global_FarFoliage_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/Overland_Global_FarFoliage.Overland_Global_FarFoliage_C");
    return (AOverland_Global_FarFoliage_C*)res;
}
