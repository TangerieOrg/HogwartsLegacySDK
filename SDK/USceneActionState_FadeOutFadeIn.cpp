#include "USceneActionState_FadeOutFadeIn.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_FadeOutFadeIn* USceneActionState_FadeOutFadeIn::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_FadeOutFadeIn");
    return (USceneActionState_FadeOutFadeIn*)res;
}
