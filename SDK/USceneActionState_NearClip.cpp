#include "USceneActionState_NearClip.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_NearClip* USceneActionState_NearClip::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_NearClip");
    return (USceneActionState_NearClip*)res;
}
