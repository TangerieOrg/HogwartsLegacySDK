#include "ABP_FlyingBroomCapsule_C.hpp"
#include "ABP_FlyingBroomCapsule_MoonTrimmer_C.hpp"
ABP_FlyingBroomCapsule_MoonTrimmer_C* ABP_FlyingBroomCapsule_MoonTrimmer_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/Broom/Blueprints/Brooms/MoonTrimmer/BP_FlyingBroomCapsule_MoonTrimmer.BP_FlyingBroomCapsule_MoonTrimmer_C");
    return (ABP_FlyingBroomCapsule_MoonTrimmer_C*)res;
}
