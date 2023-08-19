#include "AHogwarts_PVR_Stream_C.hpp"
#include "ALevelScriptActor.hpp"
AHogwarts_PVR_Stream_C* AHogwarts_PVR_Stream_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/PrecomputedVisibilityRegions/Hogwarts_PVR_Stream_LvlInst_162.Hogwarts_PVR_Stream_C");
    return (AHogwarts_PVR_Stream_C*)res;
}
