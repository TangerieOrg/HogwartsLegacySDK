#include "EFadeType.hpp"
#include "ETimeRigFadeEventType.hpp"
#include "UBoolProvider.hpp"
#include "UFadeProvider.hpp"
#include "UFloatProvider.hpp"
#include "USceneAction_ScreenFade.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_ScreenFade* USceneAction_ScreenFade::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_ScreenFade");
    return (USceneAction_ScreenFade*)res;
}
