#include "UMeshSpaceDeformerTool.hpp"
#include "UObject.hpp"
#include "USpaceDeformerOperatorFactory.hpp"
USpaceDeformerOperatorFactory* USpaceDeformerOperatorFactory::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.SpaceDeformerOperatorFactory");
    return (USpaceDeformerOperatorFactory*)res;
}
