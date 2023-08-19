#include "UAnimInstance.hpp"
#include "UAnimationArchitect_AnimInstance.hpp"
UAnimationArchitect_AnimInstance* UAnimationArchitect_AnimInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.AnimationArchitect_AnimInstance");
    return (UAnimationArchitect_AnimInstance*)res;
}
