#include "ALevelScriptActor.hpp"
#include "AOverland_GIobal_GI_C.hpp"
AOverland_GIobal_GI_C* AOverland_GIobal_GI_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/Overland_GIobal_GI.Overland_GIobal_GI_C");
    return (AOverland_GIobal_GI_C*)res;
}
