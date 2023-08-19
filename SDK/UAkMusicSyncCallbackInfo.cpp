#include "EAkCallbackType.hpp"
#include "FAkSegmentInfo.hpp"
#include "UAkCallbackInfo.hpp"
#include "UAkMusicSyncCallbackInfo.hpp"
UAkMusicSyncCallbackInfo* UAkMusicSyncCallbackInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkMusicSyncCallbackInfo");
    return (UAkMusicSyncCallbackInfo*)res;
}
