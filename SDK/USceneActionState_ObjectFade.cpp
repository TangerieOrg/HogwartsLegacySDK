#include "USceneActionState_ObjectFade.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_ObjectFade* USceneActionState_ObjectFade::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_ObjectFade");
    return (USceneActionState_ObjectFade*)res;
}
