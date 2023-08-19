#include "UCurveFloat.hpp"
#include "USceneAction_Adaptation.hpp"
#include "USceneAction_AdaptationCurve.hpp"
USceneAction_AdaptationCurve* USceneAction_AdaptationCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_AdaptationCurve");
    return (USceneAction_AdaptationCurve*)res;
}
