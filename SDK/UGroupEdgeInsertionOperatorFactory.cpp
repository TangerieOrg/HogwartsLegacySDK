#include "UGroupEdgeInsertionOperatorFactory.hpp"
#include "UGroupEdgeInsertionTool.hpp"
#include "UObject.hpp"
UGroupEdgeInsertionOperatorFactory* UGroupEdgeInsertionOperatorFactory::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.GroupEdgeInsertionOperatorFactory");
    return (UGroupEdgeInsertionOperatorFactory*)res;
}
