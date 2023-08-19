#include "FVector.hpp"
#include "UGizmoConstantAxisSource.hpp"
#include "UObject.hpp"
UGizmoConstantAxisSource* UGizmoConstantAxisSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoConstantAxisSource");
    return (UGizmoConstantAxisSource*)res;
}
