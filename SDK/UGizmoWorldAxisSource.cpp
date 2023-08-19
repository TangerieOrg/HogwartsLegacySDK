#include "FVector.hpp"
#include "UGizmoWorldAxisSource.hpp"
#include "UObject.hpp"
UGizmoWorldAxisSource* UGizmoWorldAxisSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoWorldAxisSource");
    return (UGizmoWorldAxisSource*)res;
}
