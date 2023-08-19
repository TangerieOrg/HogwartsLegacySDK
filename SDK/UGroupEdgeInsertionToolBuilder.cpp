#include "UGroupEdgeInsertionToolBuilder.hpp"
#include "UInteractiveToolBuilder.hpp"
UGroupEdgeInsertionToolBuilder* UGroupEdgeInsertionToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.GroupEdgeInsertionToolBuilder");
    return (UGroupEdgeInsertionToolBuilder*)res;
}
