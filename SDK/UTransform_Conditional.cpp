#include "UBoolProvider.hpp"
#include "UTransformProvider.hpp"
#include "UTransform_Conditional.hpp"
UTransform_Conditional* UTransform_Conditional::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Transform_Conditional");
    return (UTransform_Conditional*)res;
}
