#include "USceneAction_Adaptation.hpp"
#include "USceneAction_AdaptationHold.hpp"
USceneAction_AdaptationHold* USceneAction_AdaptationHold::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_AdaptationHold");
    return (USceneAction_AdaptationHold*)res;
}
