#include "UBakeTransformToolBuilder.hpp"
#include "UInteractiveToolBuilder.hpp"
UBakeTransformToolBuilder* UBakeTransformToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.BakeTransformToolBuilder");
    return (UBakeTransformToolBuilder*)res;
}
