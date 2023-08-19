#include "UEditableMeshAdapter.hpp"
#include "UObject.hpp"
UEditableMeshAdapter* UEditableMeshAdapter::StaticClass() {
    static auto res = find_uobject("Class /Script/EditableMesh.EditableMeshAdapter");
    return (UEditableMeshAdapter*)res;
}
