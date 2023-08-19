#include "EManagedFacialAnimationPriority.hpp"
#include "FFacialAnimation.hpp"
#include "UAnimNotifyState.hpp"
#include "UFacialAnimationAnimNotifyState.hpp"
UFacialAnimationAnimNotifyState* UFacialAnimationAnimNotifyState::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.FacialAnimationAnimNotifyState");
    return (UFacialAnimationAnimNotifyState*)res;
}
