#include "USceneAction_Lumos.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_Lumos* USceneAction_Lumos::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_Lumos");
    return (USceneAction_Lumos*)res;
}
