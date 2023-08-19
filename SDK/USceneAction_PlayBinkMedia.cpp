#include "UBinkMediaPlayer.hpp"
#include "UClass.hpp"
#include "UDataTable.hpp"
#include "UFloatProvider.hpp"
#include "UMediaSource.hpp"
#include "USceneAction_PlayBinkMedia.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_PlayBinkMedia* USceneAction_PlayBinkMedia::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_PlayBinkMedia");
    return (USceneAction_PlayBinkMedia*)res;
}
