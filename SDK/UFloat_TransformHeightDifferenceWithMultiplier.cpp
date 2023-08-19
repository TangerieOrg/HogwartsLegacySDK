#include "UFloatProvider.hpp"
#include "UFloat_TransformHeightDifferenceWithMultiplier.hpp"
#include "UTransformProvider.hpp"
UFloat_TransformHeightDifferenceWithMultiplier* UFloat_TransformHeightDifferenceWithMultiplier::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Float_TransformHeightDifferenceWithMultiplier");
    return (UFloat_TransformHeightDifferenceWithMultiplier*)res;
}
