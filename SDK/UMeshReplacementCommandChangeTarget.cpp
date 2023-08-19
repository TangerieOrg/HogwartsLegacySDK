#include "UInterface.hpp"
#include "UMeshReplacementCommandChangeTarget.hpp"
UMeshReplacementCommandChangeTarget* UMeshReplacementCommandChangeTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.MeshReplacementCommandChangeTarget");
    return (UMeshReplacementCommandChangeTarget*)res;
}
