#include "ERemeshSmoothingType.hpp"
#include "ERemeshType.hpp"
#include "URemeshMeshToolProperties.hpp"
#include "URemeshProperties.hpp"
URemeshMeshToolProperties* URemeshMeshToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.RemeshMeshToolProperties");
    return (URemeshMeshToolProperties*)res;
}
