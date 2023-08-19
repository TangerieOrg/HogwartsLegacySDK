#include "UAxisPositionGizmoBuilder.hpp"
#include "UInteractiveGizmoBuilder.hpp"
UAxisPositionGizmoBuilder* UAxisPositionGizmoBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.AxisPositionGizmoBuilder");
    return (UAxisPositionGizmoBuilder*)res;
}
