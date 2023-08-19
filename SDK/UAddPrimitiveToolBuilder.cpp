#include "UAddPrimitiveToolBuilder.hpp"
#include "UInteractiveToolBuilder.hpp"
UAddPrimitiveToolBuilder* UAddPrimitiveToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AddPrimitiveToolBuilder");
    return (UAddPrimitiveToolBuilder*)res;
}
