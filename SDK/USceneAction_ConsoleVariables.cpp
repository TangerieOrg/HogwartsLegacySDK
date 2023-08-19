#include "FSceneActionConsoleVariable.hpp"
#include "USceneAction_ConsoleBase.hpp"
#include "USceneAction_ConsoleVariables.hpp"
USceneAction_ConsoleVariables* USceneAction_ConsoleVariables::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ConsoleVariables");
    return (USceneAction_ConsoleVariables*)res;
}
