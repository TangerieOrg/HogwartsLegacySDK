#include "FDynamicSpline.hpp"
#include "UDataAsset.hpp"
#include "UDynamicSplineSet.hpp"
UDynamicSplineSet* UDynamicSplineSet::StaticClass() {
    static auto res = find_uobject("Class /Script/DynamicSplinesRuntime.DynamicSplineSet");
    return (UDynamicSplineSet*)res;
}
