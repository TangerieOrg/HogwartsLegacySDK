#include "UGizmoLambdaStateTarget.hpp"
#include "UObject.hpp"
UGizmoLambdaStateTarget* UGizmoLambdaStateTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoLambdaStateTarget");
    return (UGizmoLambdaStateTarget*)res;
}
