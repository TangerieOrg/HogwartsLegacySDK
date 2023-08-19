#include "FSceneActionConsoleCommand.hpp"
#include "USceneAction_ConsoleBase.hpp"
#include "USceneAction_ConsoleCommandBase.hpp"
USceneAction_ConsoleCommandBase* USceneAction_ConsoleCommandBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ConsoleCommandBase");
    return (USceneAction_ConsoleCommandBase*)res;
}
