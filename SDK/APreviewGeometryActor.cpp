#include "AInternalToolFrameworkActor.hpp"
#include "APreviewGeometryActor.hpp"
APreviewGeometryActor* APreviewGeometryActor::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.PreviewGeometryActor");
    return (APreviewGeometryActor*)res;
}
