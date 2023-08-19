#include "UDynamicSplineSet.hpp"
#include "UDynamicStaticMeshSplineSet.hpp"
#include "UStaticMesh.hpp"
UDynamicStaticMeshSplineSet* UDynamicStaticMeshSplineSet::StaticClass() {
    static auto res = find_uobject("Class /Script/DynamicSplinesRuntime.DynamicStaticMeshSplineSet");
    return (UDynamicStaticMeshSplineSet*)res;
}
