#include "UEditableGeometryCollectionAdapter.hpp"
#include "UEditableMeshAdapter.hpp"
#include "UGeometryCollection.hpp"
UEditableGeometryCollectionAdapter* UEditableGeometryCollectionAdapter::StaticClass() {
    static auto res = find_uobject("Class /Script/EditableMesh.EditableGeometryCollectionAdapter");
    return (UEditableGeometryCollectionAdapter*)res;
}
