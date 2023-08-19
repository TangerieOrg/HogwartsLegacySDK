#include "UEditNormalsOperatorFactory.hpp"
#include "UEditNormalsTool.hpp"
#include "UObject.hpp"
UEditNormalsOperatorFactory* UEditNormalsOperatorFactory::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.EditNormalsOperatorFactory");
    return (UEditNormalsOperatorFactory*)res;
}
