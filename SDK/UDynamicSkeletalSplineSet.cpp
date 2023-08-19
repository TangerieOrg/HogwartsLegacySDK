#include "UDynamicSkeletalSplineSet.hpp"
#include "UDynamicSplineSet.hpp"
#include "USkeletalMesh.hpp"
UDynamicSkeletalSplineSet* UDynamicSkeletalSplineSet::StaticClass() {
    static auto res = find_uobject("Class /Script/DynamicSplinesRuntime.DynamicSkeletalSplineSet");
    return (UDynamicSkeletalSplineSet*)res;
}
