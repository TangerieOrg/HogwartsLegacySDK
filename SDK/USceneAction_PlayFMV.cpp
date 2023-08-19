#include "UMediaPlayer.hpp"
#include "UMediaSource.hpp"
#include "USceneAction_PlayFMV.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_PlayFMV* USceneAction_PlayFMV::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_PlayFMV");
    return (USceneAction_PlayFMV*)res;
}
