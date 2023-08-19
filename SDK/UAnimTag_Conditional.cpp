#include "UAnimTag_Conditional.hpp"
#include "UAnimationArchitectTagProvider.hpp"
#include "UBoolProvider.hpp"
UAnimTag_Conditional* UAnimTag_Conditional::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimTag_Conditional");
    return (UAnimTag_Conditional*)res;
}
