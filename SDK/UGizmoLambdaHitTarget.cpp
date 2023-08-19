#include "UGizmoLambdaHitTarget.hpp"
#include "UObject.hpp"
UGizmoLambdaHitTarget* UGizmoLambdaHitTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoLambdaHitTarget");
    return (UGizmoLambdaHitTarget*)res;
}
