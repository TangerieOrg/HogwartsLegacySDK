#include "UDataTable.hpp"
#include "UFunction.hpp"
#include "UMediaSource.hpp"
#include "USceneRig.hpp"
#include "USceneRig_Bink.hpp"
USceneRig_Bink* USceneRig_Bink::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRig_Bink");
    return (USceneRig_Bink*)res;
}
USceneRig_Bink* USceneRig_Bink::PlayBink(UMediaSource* FileMediaSource, UDataTable* Subtitles) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRig_Bink.PlayBink"));
    struct Params_PlayBink {
        UMediaSource* FileMediaSource; // 0x0
        UDataTable* Subtitles; // 0x8
        USceneRig_Bink* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_PlayBink params{};
    params.FileMediaSource = (UMediaSource*)FileMediaSource;
    params.Subtitles = (UDataTable*)Subtitles;
    ProcessEvent(func, &params);
    return (USceneRig_Bink*)params.ReturnValue;
}
