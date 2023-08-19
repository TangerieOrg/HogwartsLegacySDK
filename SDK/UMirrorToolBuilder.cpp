#include "UInteractiveToolBuilder.hpp"
#include "UMirrorToolBuilder.hpp"
UMirrorToolBuilder* UMirrorToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.MirrorToolBuilder");
    return (UMirrorToolBuilder*)res;
}
