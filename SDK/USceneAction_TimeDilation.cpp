#include "UFloatProvider.hpp"
#include "USceneAction_TimeDilation.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_TimeDilation* USceneAction_TimeDilation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_TimeDilation");
    return (USceneAction_TimeDilation*)res;
}
