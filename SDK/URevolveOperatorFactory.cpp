#include "UDrawAndRevolveTool.hpp"
#include "UObject.hpp"
#include "URevolveOperatorFactory.hpp"
URevolveOperatorFactory* URevolveOperatorFactory::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.RevolveOperatorFactory");
    return (URevolveOperatorFactory*)res;
}
