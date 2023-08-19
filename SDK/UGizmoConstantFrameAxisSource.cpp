#include "FVector.hpp"
#include "UGizmoConstantFrameAxisSource.hpp"
#include "UObject.hpp"
UGizmoConstantFrameAxisSource* UGizmoConstantFrameAxisSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoConstantFrameAxisSource");
    return (UGizmoConstantFrameAxisSource*)res;
}
