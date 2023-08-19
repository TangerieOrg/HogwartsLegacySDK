#include "FConsoleVariableLienEntry.hpp"
#include "USceneAction_ConsoleRenderingVar.hpp"
#include "USceneAction_ConsoleRenderingVarSimple.hpp"
USceneAction_ConsoleRenderingVarSimple* USceneAction_ConsoleRenderingVarSimple::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ConsoleRenderingVarSimple");
    return (USceneAction_ConsoleRenderingVarSimple*)res;
}
