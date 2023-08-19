#include "USceneAction_ObjectFade.hpp"
#include "USceneAction_ObjectFadeOut.hpp"
USceneAction_ObjectFadeOut* USceneAction_ObjectFadeOut::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ObjectFadeOut");
    return (USceneAction_ObjectFadeOut*)res;
}
