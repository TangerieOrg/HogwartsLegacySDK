#include "UAlignObjectsToolBuilder.hpp"
#include "UInteractiveToolBuilder.hpp"
UAlignObjectsToolBuilder* UAlignObjectsToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.AlignObjectsToolBuilder");
    return (UAlignObjectsToolBuilder*)res;
}
