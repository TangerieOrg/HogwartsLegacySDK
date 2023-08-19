#include "UObject.hpp"
#include "URevolveBoundaryOperatorFactory.hpp"
#include "URevolveBoundaryTool.hpp"
URevolveBoundaryOperatorFactory* URevolveBoundaryOperatorFactory::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.RevolveBoundaryOperatorFactory");
    return (URevolveBoundaryOperatorFactory*)res;
}
