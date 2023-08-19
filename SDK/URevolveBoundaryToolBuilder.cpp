#include "UInteractiveToolBuilder.hpp"
#include "URevolveBoundaryToolBuilder.hpp"
URevolveBoundaryToolBuilder* URevolveBoundaryToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.RevolveBoundaryToolBuilder");
    return (URevolveBoundaryToolBuilder*)res;
}
