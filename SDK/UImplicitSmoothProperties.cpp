#include "UImplicitSmoothProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UImplicitSmoothProperties* UImplicitSmoothProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ImplicitSmoothProperties");
    return (UImplicitSmoothProperties*)res;
}
