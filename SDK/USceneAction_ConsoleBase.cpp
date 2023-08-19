#include "USceneAction_ConsoleBase.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_ConsoleBase* USceneAction_ConsoleBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ConsoleBase");
    return (USceneAction_ConsoleBase*)res;
}
