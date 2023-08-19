#include "UInteractiveGizmoBuilder.hpp"
#include "UTransformGizmoBuilder.hpp"
UTransformGizmoBuilder* UTransformGizmoBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.TransformGizmoBuilder");
    return (UTransformGizmoBuilder*)res;
}
