#include "USceneAction_ConsoleCommand.hpp"
#include "USceneAction_ConsoleCommandBase.hpp"
USceneAction_ConsoleCommand* USceneAction_ConsoleCommand::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ConsoleCommand");
    return (USceneAction_ConsoleCommand*)res;
}
