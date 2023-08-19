#include "UAxisAngleGizmoBuilder.hpp"
#include "UInteractiveGizmoBuilder.hpp"
UAxisAngleGizmoBuilder* UAxisAngleGizmoBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.AxisAngleGizmoBuilder");
    return (UAxisAngleGizmoBuilder*)res;
}
