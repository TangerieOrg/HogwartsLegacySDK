#include "USceneAction_ConsoleRenderingVar.hpp"
#include "USceneAction_MaxFPS.hpp"
USceneAction_MaxFPS* USceneAction_MaxFPS::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_MaxFPS");
    return (USceneAction_MaxFPS*)res;
}
