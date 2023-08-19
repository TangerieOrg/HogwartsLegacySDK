#include "FActionParameter_AvaAudioMusic.hpp"
#include "USceneAction_AvaAudioMusic.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_AvaAudioMusic* USceneAction_AvaAudioMusic::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_AvaAudioMusic");
    return (USceneAction_AvaAudioMusic*)res;
}
