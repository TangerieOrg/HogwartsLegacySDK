#include "UEditableMeshAdapter.hpp"
#include "UEditableStaticMeshAdapter.hpp"
#include "UStaticMesh.hpp"
UEditableStaticMeshAdapter* UEditableStaticMeshAdapter::StaticClass() {
    static auto res = find_uobject("Class /Script/EditableMesh.EditableStaticMeshAdapter");
    return (UEditableStaticMeshAdapter*)res;
}
