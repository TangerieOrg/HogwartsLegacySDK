#include "UTransformProvider.hpp"
#include "UTransform_ParentConstraint.hpp"
UTransform_ParentConstraint* UTransform_ParentConstraint::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Transform_ParentConstraint");
    return (UTransform_ParentConstraint*)res;
}
