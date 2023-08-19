#include "FEasingFunction.hpp"
#include "USceneAction_ObjectFade.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_ObjectFade* USceneAction_ObjectFade::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ObjectFade");
    return (USceneAction_ObjectFade*)res;
}
