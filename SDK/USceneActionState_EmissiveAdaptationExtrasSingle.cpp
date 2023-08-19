#include "FExposureExpressionsExtras.hpp"
#include "USceneActionState_EmissiveAdaptationBase.hpp"
#include "USceneActionState_EmissiveAdaptationExtrasSingle.hpp"
USceneActionState_EmissiveAdaptationExtrasSingle* USceneActionState_EmissiveAdaptationExtrasSingle::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_EmissiveAdaptationExtrasSingle");
    return (USceneActionState_EmissiveAdaptationExtrasSingle*)res;
}
