#include "UFloatProvider.hpp"
#include "UFloat_TransformDistance.hpp"
#include "UTransformProvider.hpp"
UFloat_TransformDistance* UFloat_TransformDistance::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Float_TransformDistance");
    return (UFloat_TransformDistance*)res;
}
