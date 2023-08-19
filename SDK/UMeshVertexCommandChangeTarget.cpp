#include "UInterface.hpp"
#include "UMeshVertexCommandChangeTarget.hpp"
UMeshVertexCommandChangeTarget* UMeshVertexCommandChangeTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.MeshVertexCommandChangeTarget");
    return (UMeshVertexCommandChangeTarget*)res;
}
