#include "FTransform.hpp"
#include "UTransformProvider.hpp"
#include "UTransform_Direct.hpp"
UTransform_Direct* UTransform_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Transform_Direct");
    return (UTransform_Direct*)res;
}
