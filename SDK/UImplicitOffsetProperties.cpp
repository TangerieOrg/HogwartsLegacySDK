#include "UImplicitOffsetProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UImplicitOffsetProperties* UImplicitOffsetProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.ImplicitOffsetProperties");
    return (UImplicitOffsetProperties*)res;
}
