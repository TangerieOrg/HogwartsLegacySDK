#include "FExposureExpressionsExtraScalarName.hpp"
#include "UCurveFloat.hpp"
#include "USceneAction_EmissiveAdaptationExtrasScalar.hpp"
#include "USceneAction_EmissiveAdaptationExtrasSingleBase.hpp"
USceneAction_EmissiveAdaptationExtrasScalar* USceneAction_EmissiveAdaptationExtrasScalar::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_EmissiveAdaptationExtrasScalar");
    return (USceneAction_EmissiveAdaptationExtrasScalar*)res;
}
