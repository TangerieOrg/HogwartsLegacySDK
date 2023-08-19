#include "ABP_ShadowSprint_C.hpp"
#include "AShadowSprint.hpp"
#include "UCapsuleComponent.hpp"
#include "UShadowSprintMovementComponent.hpp"
ABP_ShadowSprint_C* ABP_ShadowSprint_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/ShadowSprint/BP_ShadowSprint.BP_ShadowSprint_C");
    return (ABP_ShadowSprint_C*)res;
}
