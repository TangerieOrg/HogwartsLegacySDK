#include "UAnimationProvider.hpp"
#include "UAnimationProvider_Conditional.hpp"
#include "UBoolProvider.hpp"
UAnimationProvider_Conditional* UAnimationProvider_Conditional::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimationProvider_Conditional");
    return (UAnimationProvider_Conditional*)res;
}
