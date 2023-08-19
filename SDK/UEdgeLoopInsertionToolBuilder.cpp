#include "UEdgeLoopInsertionToolBuilder.hpp"
#include "UInteractiveToolBuilder.hpp"
UEdgeLoopInsertionToolBuilder* UEdgeLoopInsertionToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EdgeLoopInsertionToolBuilder");
    return (UEdgeLoopInsertionToolBuilder*)res;
}
