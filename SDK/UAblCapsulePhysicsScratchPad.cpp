#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblCapsulePhysicsScratchPad.hpp"
UAblCapsulePhysicsScratchPad* UAblCapsulePhysicsScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCapsulePhysicsScratchPad");
    return (UAblCapsulePhysicsScratchPad*)res;
}
