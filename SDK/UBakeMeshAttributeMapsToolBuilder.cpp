#include "UBakeMeshAttributeMapsToolBuilder.hpp"
#include "UInteractiveToolBuilder.hpp"
UBakeMeshAttributeMapsToolBuilder* UBakeMeshAttributeMapsToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.BakeMeshAttributeMapsToolBuilder");
    return (UBakeMeshAttributeMapsToolBuilder*)res;
}
