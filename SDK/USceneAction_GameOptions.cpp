#include "ESceneRigCategory.hpp"
#include "EStandardManagedPriority.hpp"
#include "FWeatherSurfaceCharacterFXStateReset.hpp"
#include "USceneAction_GameOptions.hpp"
#include "USceneRigActionBase.hpp"
#include "USceneRigGameOptionsAsset.hpp"
USceneAction_GameOptions* USceneAction_GameOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_GameOptions");
    return (USceneAction_GameOptions*)res;
}
