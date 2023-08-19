#include "USceneActionState_ConsoleVariables.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_ConsoleVariables* USceneActionState_ConsoleVariables::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_ConsoleVariables");
    return (USceneActionState_ConsoleVariables*)res;
}
