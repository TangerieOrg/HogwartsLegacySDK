#include "UInteractiveToolPropertySet.hpp"
#include "URemoveOccludedTrianglesAdvancedProperties.hpp"
URemoveOccludedTrianglesAdvancedProperties* URemoveOccludedTrianglesAdvancedProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties");
    return (URemoveOccludedTrianglesAdvancedProperties*)res;
}
