#include "ALevelScriptActor.hpp"
#include "AOverland_Global_Audio_Ambience_C.hpp"
AOverland_Global_Audio_Ambience_C* AOverland_Global_Audio_Ambience_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/Overland_Global_Audio_Ambience.Overland_Global_Audio_Ambience_C");
    return (AOverland_Global_Audio_Ambience_C*)res;
}
