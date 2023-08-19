#include "UObject.hpp"
#include "UUVProjectionOperatorFactory.hpp"
#include "UUVProjectionTool.hpp"
UUVProjectionOperatorFactory* UUVProjectionOperatorFactory::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.UVProjectionOperatorFactory");
    return (UUVProjectionOperatorFactory*)res;
}
