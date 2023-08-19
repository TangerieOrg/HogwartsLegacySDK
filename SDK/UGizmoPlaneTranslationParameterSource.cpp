#include "FGizmoVec2ParameterChange.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UGizmoBaseVec2ParameterSource.hpp"
#include "UGizmoPlaneTranslationParameterSource.hpp"
UGizmoPlaneTranslationParameterSource* UGizmoPlaneTranslationParameterSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoPlaneTranslationParameterSource");
    return (UGizmoPlaneTranslationParameterSource*)res;
}
