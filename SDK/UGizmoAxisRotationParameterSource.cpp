#include "FGizmoFloatParameterChange.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UGizmoAxisRotationParameterSource.hpp"
#include "UGizmoBaseFloatParameterSource.hpp"
UGizmoAxisRotationParameterSource* UGizmoAxisRotationParameterSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoAxisRotationParameterSource");
    return (UGizmoAxisRotationParameterSource*)res;
}
