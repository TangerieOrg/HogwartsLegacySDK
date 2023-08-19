#include "USceneAction_ConsoleRenderingVar.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_ConsoleRenderingVar* USceneAction_ConsoleRenderingVar::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ConsoleRenderingVar");
    return (USceneAction_ConsoleRenderingVar*)res;
}
