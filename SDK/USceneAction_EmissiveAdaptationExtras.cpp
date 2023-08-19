#include "FExposureExpressionsExtras.hpp"
#include "USceneAction_EmissiveAdaptationBase.hpp"
#include "USceneAction_EmissiveAdaptationExtras.hpp"
USceneAction_EmissiveAdaptationExtras* USceneAction_EmissiveAdaptationExtras::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_EmissiveAdaptationExtras");
    return (USceneAction_EmissiveAdaptationExtras*)res;
}
