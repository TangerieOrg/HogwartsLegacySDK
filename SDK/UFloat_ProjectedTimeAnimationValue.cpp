#include "UFloatProvider.hpp"
#include "UFloat_ProjectedTimeAnimationValue.hpp"
UFloat_ProjectedTimeAnimationValue* UFloat_ProjectedTimeAnimationValue::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Float_ProjectedTimeAnimationValue");
    return (UFloat_ProjectedTimeAnimationValue*)res;
}
