#include "UGizmoObjectModifyStateTarget.hpp"
#include "UObject.hpp"
UGizmoObjectModifyStateTarget* UGizmoObjectModifyStateTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoObjectModifyStateTarget");
    return (UGizmoObjectModifyStateTarget*)res;
}
