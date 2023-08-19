#include "UInterface.hpp"
#include "UMeshCommandChangeTarget.hpp"
UMeshCommandChangeTarget* UMeshCommandChangeTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.MeshCommandChangeTarget");
    return (UMeshCommandChangeTarget*)res;
}
