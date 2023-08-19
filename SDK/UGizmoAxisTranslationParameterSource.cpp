#include "FGizmoFloatParameterChange.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UGizmoAxisTranslationParameterSource.hpp"
#include "UGizmoBaseFloatParameterSource.hpp"
UGizmoAxisTranslationParameterSource* UGizmoAxisTranslationParameterSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.GizmoAxisTranslationParameterSource");
    return (UGizmoAxisTranslationParameterSource*)res;
}
