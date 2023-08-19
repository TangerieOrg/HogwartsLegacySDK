#include "USceneAction_TimeDate.hpp"
#include "USceneRigActionBase.hpp"
#include "UTimeOverrideBase.hpp"
USceneAction_TimeDate* USceneAction_TimeDate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_TimeDate");
    return (USceneAction_TimeDate*)res;
}
