#include "USceneAction_Adaptation.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_Adaptation* USceneAction_Adaptation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_Adaptation");
    return (USceneAction_Adaptation*)res;
}
