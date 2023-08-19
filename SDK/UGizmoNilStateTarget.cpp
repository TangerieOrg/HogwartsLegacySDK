#include "UGizmoNilStateTarget.hpp"
#include "UObject.hpp"
UGizmoNilStateTarget* UGizmoNilStateTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoNilStateTarget");
    return (UGizmoNilStateTarget*)res;
}
