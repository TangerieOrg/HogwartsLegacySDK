#include "USceneAction_WorldBaseHeight.hpp"
#include "USceneRigActionBase.hpp"
#include "UTransformProvider.hpp"
USceneAction_WorldBaseHeight* USceneAction_WorldBaseHeight::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_WorldBaseHeight");
    return (USceneAction_WorldBaseHeight*)res;
}
