#include "ABP_FlyingBroomProp_C.hpp"
#include "ABP_FlyingBroomProp_MoonTrimmer_C.hpp"
ABP_FlyingBroomProp_MoonTrimmer_C* ABP_FlyingBroomProp_MoonTrimmer_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/Broom/Blueprints/Brooms/MoonTrimmer/BP_FlyingBroomProp_MoonTrimmer.BP_FlyingBroomProp_MoonTrimmer_C");
    return (ABP_FlyingBroomProp_MoonTrimmer_C*)res;
}
