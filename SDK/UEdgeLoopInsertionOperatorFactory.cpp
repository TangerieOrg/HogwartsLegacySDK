#include "UEdgeLoopInsertionOperatorFactory.hpp"
#include "UEdgeLoopInsertionTool.hpp"
#include "UObject.hpp"
UEdgeLoopInsertionOperatorFactory* UEdgeLoopInsertionOperatorFactory::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EdgeLoopInsertionOperatorFactory");
    return (UEdgeLoopInsertionOperatorFactory*)res;
}
