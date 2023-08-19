#include "USceneActionState_ScreenFade.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_ScreenFade* USceneActionState_ScreenFade::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_ScreenFade");
    return (USceneActionState_ScreenFade*)res;
}
