#include "USceneAction_ConsoleRenderingVar.hpp"
#include "USceneAction_ShowFlagWireframe.hpp"
USceneAction_ShowFlagWireframe* USceneAction_ShowFlagWireframe::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ShowFlagWireframe");
    return (USceneAction_ShowFlagWireframe*)res;
}
