#include "USceneAction_Adaptation.hpp"
#include "USceneAction_AdaptationLock.hpp"
USceneAction_AdaptationLock* USceneAction_AdaptationLock::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_AdaptationLock");
    return (USceneAction_AdaptationLock*)res;
}
