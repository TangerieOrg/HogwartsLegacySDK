#include "FVector.hpp"
#include "UAxisPositionGizmo.hpp"
#include "UInteractiveGizmo.hpp"
UAxisPositionGizmo* UAxisPositionGizmo::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.AxisPositionGizmo");
    return (UAxisPositionGizmo*)res;
}
