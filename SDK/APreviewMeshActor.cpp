#include "AInternalToolFrameworkActor.hpp"
#include "APreviewMeshActor.hpp"
APreviewMeshActor* APreviewMeshActor::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.PreviewMeshActor");
    return (APreviewMeshActor*)res;
}
