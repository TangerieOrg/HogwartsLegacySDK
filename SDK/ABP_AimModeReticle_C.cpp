#include "AActor_LockOnReticle.hpp"
#include "ABP_AimModeReticle_C.hpp"
#include "UWidgetComponent.hpp"
ABP_AimModeReticle_C* ABP_AimModeReticle_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/BP_AimModeReticle.BP_AimModeReticle_C");
    return (ABP_AimModeReticle_C*)res;
}
