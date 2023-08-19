#include "UMeshSelectionSet.hpp"
#include "USelectionSet.hpp"
UMeshSelectionSet* UMeshSelectionSet::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.MeshSelectionSet");
    return (UMeshSelectionSet*)res;
}
