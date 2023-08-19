#include "FGameplayTagContainer.hpp"
#include "UAnimTag_Direct.hpp"
#include "UAnimationArchitectTagProvider.hpp"
UAnimTag_Direct* UAnimTag_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.AnimTag_Direct");
    return (UAnimTag_Direct*)res;
}
