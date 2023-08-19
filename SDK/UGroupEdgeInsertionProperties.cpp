#include "EGroupEdgeInsertionMode.hpp"
#include "UGroupEdgeInsertionProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UGroupEdgeInsertionProperties* UGroupEdgeInsertionProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.GroupEdgeInsertionProperties");
    return (UGroupEdgeInsertionProperties*)res;
}
