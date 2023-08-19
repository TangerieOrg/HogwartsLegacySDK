#include "ESceneRigCategory.hpp"
#include "EStandardManagedPriority.hpp"
#include "FWeatherSurfaceCharacterFXStateReset.hpp"
#include "UDataAsset.hpp"
#include "USceneRigGameOptionsAsset.hpp"
USceneRigGameOptionsAsset* USceneRigGameOptionsAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigGameOptionsAsset");
    return (USceneRigGameOptionsAsset*)res;
}
