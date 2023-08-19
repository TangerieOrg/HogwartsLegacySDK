#include "USceneAction_FastTravel.hpp"
#include "USceneRigObjectActionBase.hpp"
#include "UTransformProvider.hpp"
USceneAction_FastTravel* USceneAction_FastTravel::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_FastTravel");
    return (USceneAction_FastTravel*)res;
}
