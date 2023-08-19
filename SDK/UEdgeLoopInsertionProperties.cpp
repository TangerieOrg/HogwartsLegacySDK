#include "EEdgeLoopInsertionMode.hpp"
#include "EEdgeLoopPositioningMode.hpp"
#include "UEdgeLoopInsertionProperties.hpp"
#include "UInteractiveToolPropertySet.hpp"
UEdgeLoopInsertionProperties* UEdgeLoopInsertionProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EdgeLoopInsertionProperties");
    return (UEdgeLoopInsertionProperties*)res;
}
