#include "USceneAction_NearClip.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_NearClip* USceneAction_NearClip::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_NearClip");
    return (USceneAction_NearClip*)res;
}
