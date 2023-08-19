#include "AGizmoActor.hpp"
#include "ATransformGizmoActor.hpp"
#include "UPrimitiveComponent.hpp"
ATransformGizmoActor* ATransformGizmoActor::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.TransformGizmoActor");
    return (ATransformGizmoActor*)res;
}
