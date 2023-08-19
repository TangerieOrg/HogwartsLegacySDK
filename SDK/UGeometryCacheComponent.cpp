#include "UFunction.hpp"
#include "UGeometryCache.hpp"
#include "UGeometryCacheComponent.hpp"
#include "UMeshComponent.hpp"
UGeometryCacheComponent* UGeometryCacheComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCache.GeometryCacheComponent");
    return (UGeometryCacheComponent*)res;
}
void UGeometryCacheComponent::Pause() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.Pause"));
    struct Params_Pause {
    }; // Size: 0x0
    Params_Pause params{};
    ProcessEvent(func, &params);
}
void UGeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.SetStartTimeOffset"));
    struct Params_SetStartTimeOffset {
        float NewStartTimeOffset; // 0x0
    }; // Size: 0x4
    Params_SetStartTimeOffset params{};
    params.NewStartTimeOffset = (float)NewStartTimeOffset;
    ProcessEvent(func, &params);
}
void UGeometryCacheComponent::TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.TickAtThisTime"));
    struct Params_TickAtThisTime {
        float Time; // 0x0
        bool bInIsRunning; // 0x4
        bool bInBackwards; // 0x5
        bool bInIsLooping; // 0x6
    }; // Size: 0x7
    Params_TickAtThisTime params{};
    params.Time = (float)Time;
    params.bInIsRunning = (bool)bInIsRunning;
    params.bInBackwards = (bool)bInBackwards;
    params.bInIsLooping = (bool)bInIsLooping;
    ProcessEvent(func, &params);
}
void UGeometryCacheComponent::SetLooping(bool bNewLooping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.SetLooping"));
    struct Params_SetLooping {
        bool bNewLooping; // 0x0
    }; // Size: 0x1
    Params_SetLooping params{};
    params.bNewLooping = (bool)bNewLooping;
    ProcessEvent(func, &params);
}
void UGeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.SetPlaybackSpeed"));
    struct Params_SetPlaybackSpeed {
        float NewPlaybackSpeed; // 0x0
    }; // Size: 0x4
    Params_SetPlaybackSpeed params{};
    params.NewPlaybackSpeed = (float)NewPlaybackSpeed;
    ProcessEvent(func, &params);
}
void UGeometryCacheComponent::SetMotionVectorScale(float NewMotionVectorScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.SetMotionVectorScale"));
    struct Params_SetMotionVectorScale {
        float NewMotionVectorScale; // 0x0
    }; // Size: 0x4
    Params_SetMotionVectorScale params{};
    params.NewMotionVectorScale = (float)NewMotionVectorScale;
    ProcessEvent(func, &params);
}
void UGeometryCacheComponent::Stop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.Stop"));
    struct Params_Stop {
    }; // Size: 0x0
    Params_Stop params{};
    ProcessEvent(func, &params);
}
bool UGeometryCacheComponent::SetGeometryCache(UGeometryCache* NewGeomCache) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.SetGeometryCache"));
    struct Params_SetGeometryCache {
        UGeometryCache* NewGeomCache; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_SetGeometryCache params{};
    params.NewGeomCache = (UGeometryCache*)NewGeomCache;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UGeometryCacheComponent::SetExtrapolateFrames(bool bNewExtrapolating) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.SetExtrapolateFrames"));
    struct Params_SetExtrapolateFrames {
        bool bNewExtrapolating; // 0x0
    }; // Size: 0x1
    Params_SetExtrapolateFrames params{};
    params.bNewExtrapolating = (bool)bNewExtrapolating;
    ProcessEvent(func, &params);
}
void UGeometryCacheComponent::PlayReversedFromEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.PlayReversedFromEnd"));
    struct Params_PlayReversedFromEnd {
    }; // Size: 0x0
    Params_PlayReversedFromEnd params{};
    ProcessEvent(func, &params);
}
void UGeometryCacheComponent::PlayReversed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.PlayReversed"));
    struct Params_PlayReversed {
    }; // Size: 0x0
    Params_PlayReversed params{};
    ProcessEvent(func, &params);
}
void UGeometryCacheComponent::PlayFromStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.PlayFromStart"));
    struct Params_PlayFromStart {
    }; // Size: 0x0
    Params_PlayFromStart params{};
    ProcessEvent(func, &params);
}
void UGeometryCacheComponent::Play() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.Play"));
    struct Params_Play {
    }; // Size: 0x0
    Params_Play params{};
    ProcessEvent(func, &params);
}
bool UGeometryCacheComponent::IsPlayingReversed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.IsPlayingReversed"));
    struct Params_IsPlayingReversed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayingReversed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGeometryCacheComponent::IsPlaying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.IsPlaying"));
    struct Params_IsPlaying {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlaying params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGeometryCacheComponent::IsLooping() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.IsLooping"));
    struct Params_IsLooping {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLooping params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGeometryCacheComponent::IsExtrapolatingFrames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames"));
    struct Params_IsExtrapolatingFrames {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsExtrapolatingFrames params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UGeometryCacheComponent::GetStartTimeOffset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.GetStartTimeOffset"));
    struct Params_GetStartTimeOffset {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetStartTimeOffset params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UGeometryCacheComponent::GetPlaybackSpeed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackSpeed"));
    struct Params_GetPlaybackSpeed {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlaybackSpeed params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UGeometryCacheComponent::GetPlaybackDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackDirection"));
    struct Params_GetPlaybackDirection {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlaybackDirection params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UGeometryCacheComponent::GetNumberOfFrames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.GetNumberOfFrames"));
    struct Params_GetNumberOfFrames {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumberOfFrames params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UGeometryCacheComponent::GetMotionVectorScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.GetMotionVectorScale"));
    struct Params_GetMotionVectorScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMotionVectorScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UGeometryCacheComponent::GetDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.GetDuration"));
    struct Params_GetDuration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDuration params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UGeometryCacheComponent::GetAnimationTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GeometryCache.GeometryCacheComponent.GetAnimationTime"));
    struct Params_GetAnimationTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAnimationTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
