#include "USceneAction_Adaptation.hpp"
#include "USceneAction_AdaptationFixed.hpp"
USceneAction_AdaptationFixed* USceneAction_AdaptationFixed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_AdaptationFixed");
    return (USceneAction_AdaptationFixed*)res;
}
