#include "EToolContextCoordinateSystem.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UGizmoComponentAxisSource.hpp"
#include "UGizmoConstantFrameAxisSource.hpp"
#include "UGizmoScaledTransformSource.hpp"
#include "UGizmoTransformChangeStateTarget.hpp"
#include "UInteractiveGizmo.hpp"
#include "UPrimitiveComponent.hpp"
#include "UTransformGizmo.hpp"
#include "UTransformProxy.hpp"
UTransformGizmo* UTransformGizmo::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.TransformGizmo");
    return (UTransformGizmo*)res;
}
