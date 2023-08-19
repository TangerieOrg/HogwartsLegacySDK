#include "APreviewGeometryActor.hpp"
#include "UInteractionMechanic.hpp"
#include "UMaterialInterface.hpp"
#include "UPolygonSelectionMechanic.hpp"
#include "UPolygonSelectionMechanicProperties.hpp"
#include "UTriangleSetComponent.hpp"
UPolygonSelectionMechanic* UPolygonSelectionMechanic::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.PolygonSelectionMechanic");
    return (UPolygonSelectionMechanic*)res;
}
