#include "USceneAction_ObjectFade.hpp"
#include "USceneAction_ObjectFadeIn.hpp"
USceneAction_ObjectFadeIn* USceneAction_ObjectFadeIn::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ObjectFadeIn");
    return (USceneAction_ObjectFadeIn*)res;
}
