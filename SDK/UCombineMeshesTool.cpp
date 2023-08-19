#include "UCombineMeshesTool.hpp"
#include "UCombineMeshesToolProperties.hpp"
#include "UMultiSelectionTool.hpp"
#include "UOnAcceptHandleSourcesProperties.hpp"
UCombineMeshesTool* UCombineMeshesTool::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.CombineMeshesTool");
    return (UCombineMeshesTool*)res;
}
