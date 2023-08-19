#include "ESceneActionAdaptationSoftDisableMethod.hpp"
#include "USceneAction_Adaptation.hpp"
#include "USceneAction_AdaptationSoftDisable.hpp"
USceneAction_AdaptationSoftDisable* USceneAction_AdaptationSoftDisable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_AdaptationSoftDisable");
    return (USceneAction_AdaptationSoftDisable*)res;
}
