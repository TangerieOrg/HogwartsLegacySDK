#include "UInteractiveToolPropertySet.hpp"
#include "UIterativeSmoothProperties.hpp"
UIterativeSmoothProperties* UIterativeSmoothProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.IterativeSmoothProperties");
    return (UIterativeSmoothProperties*)res;
}
