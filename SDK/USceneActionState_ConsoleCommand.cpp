#include "USceneActionState_ConsoleCommand.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_ConsoleCommand* USceneActionState_ConsoleCommand::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_ConsoleCommand");
    return (USceneActionState_ConsoleCommand*)res;
}
