#include "UGizmoTransformChangeStateTarget.hpp"
#include "UObject.hpp"
UGizmoTransformChangeStateTarget* UGizmoTransformChangeStateTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoTransformChangeStateTarget");
    return (UGizmoTransformChangeStateTarget*)res;
}
