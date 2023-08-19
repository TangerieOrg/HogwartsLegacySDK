#include "UCombineMeshesToolBuilder.hpp"
#include "UInteractiveToolBuilder.hpp"
UCombineMeshesToolBuilder* UCombineMeshesToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.CombineMeshesToolBuilder");
    return (UCombineMeshesToolBuilder*)res;
}
