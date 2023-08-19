#include "UMeshConstraintProperties.hpp"
#include "URemeshProperties.hpp"
URemeshProperties* URemeshProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.RemeshProperties");
    return (URemeshProperties*)res;
}
