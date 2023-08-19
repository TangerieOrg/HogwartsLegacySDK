#include "ETimelineLengthMode.hpp"
#include "FTimeline.hpp"
#include "UActorComponent.hpp"
#include "UCurveFloat.hpp"
#include "UCurveLinearColor.hpp"
#include "UCurveVector.hpp"
#include "UFunction.hpp"
#include "UTimelineComponent.hpp"
UTimelineComponent* UTimelineComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TimelineComponent");
    return (UTimelineComponent*)res;
}
bool UTimelineComponent::IsPlaying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.IsPlaying"));
    struct Params_IsPlaying {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlaying params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTimelineComponent::Stop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.Stop"));
    struct Params_Stop {
    }; // Size: 0x0
    Params_Stop params{};
    ProcessEvent(func, &params);
}
void UTimelineComponent::SetFloatCurve(UCurveFloat* NewFloatCurve, FName FloatTrackName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.SetFloatCurve"));
    struct Params_SetFloatCurve {
        UCurveFloat* NewFloatCurve; // 0x0
        FName FloatTrackName; // 0x8
    }; // Size: 0x10
    Params_SetFloatCurve params{};
    params.NewFloatCurve = (UCurveFloat*)NewFloatCurve;
    params.FloatTrackName = (FName)FloatTrackName;
    ProcessEvent(func, &params);
}
void UTimelineComponent::SetVectorCurve(UCurveVector* NewVectorCurve, FName VectorTrackName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.SetVectorCurve"));
    struct Params_SetVectorCurve {
        UCurveVector* NewVectorCurve; // 0x0
        FName VectorTrackName; // 0x8
    }; // Size: 0x10
    Params_SetVectorCurve params{};
    params.NewVectorCurve = (UCurveVector*)NewVectorCurve;
    params.VectorTrackName = (FName)VectorTrackName;
    ProcessEvent(func, &params);
}
bool UTimelineComponent::IsReversing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.IsReversing"));
    struct Params_IsReversing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsReversing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTimelineComponent::SetTimelineLength(float NewLength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.SetTimelineLength"));
    struct Params_SetTimelineLength {
        float NewLength; // 0x0
    }; // Size: 0x4
    Params_SetTimelineLength params{};
    params.NewLength = (float)NewLength;
    ProcessEvent(func, &params);
}
void UTimelineComponent::SetTimelineLengthMode(ETimelineLengthMode NewLengthMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.SetTimelineLengthMode"));
    struct Params_SetTimelineLengthMode {
        ETimelineLengthMode NewLengthMode; // 0x0
    }; // Size: 0x1
    Params_SetTimelineLengthMode params{};
    params.NewLengthMode = (ETimelineLengthMode)NewLengthMode;
    ProcessEvent(func, &params);
}
void UTimelineComponent::SetPlayRate(float NewRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.SetPlayRate"));
    struct Params_SetPlayRate {
        float NewRate; // 0x0
    }; // Size: 0x4
    Params_SetPlayRate params{};
    params.NewRate = (float)NewRate;
    ProcessEvent(func, &params);
}
void UTimelineComponent::SetNewTime(float NewTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.SetNewTime"));
    struct Params_SetNewTime {
        float NewTime; // 0x0
    }; // Size: 0x4
    Params_SetNewTime params{};
    params.NewTime = (float)NewTime;
    ProcessEvent(func, &params);
}
void UTimelineComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.SetPlaybackPosition"));
    struct Params_SetPlaybackPosition {
        float NewPosition; // 0x0
        bool bFireEvents; // 0x4
        bool bFireUpdate; // 0x5
    }; // Size: 0x6
    Params_SetPlaybackPosition params{};
    params.NewPosition = (float)NewPosition;
    params.bFireEvents = (bool)bFireEvents;
    params.bFireUpdate = (bool)bFireUpdate;
    ProcessEvent(func, &params);
}
void UTimelineComponent::SetLooping(bool bNewLooping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.SetLooping"));
    struct Params_SetLooping {
        bool bNewLooping; // 0x0
    }; // Size: 0x1
    Params_SetLooping params{};
    params.bNewLooping = (bool)bNewLooping;
    ProcessEvent(func, &params);
}
void UTimelineComponent::SetLinearColorCurve(UCurveLinearColor* NewLinearColorCurve, FName LinearColorTrackName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.SetLinearColorCurve"));
    struct Params_SetLinearColorCurve {
        UCurveLinearColor* NewLinearColorCurve; // 0x0
        FName LinearColorTrackName; // 0x8
    }; // Size: 0x10
    Params_SetLinearColorCurve params{};
    params.NewLinearColorCurve = (UCurveLinearColor*)NewLinearColorCurve;
    params.LinearColorTrackName = (FName)LinearColorTrackName;
    ProcessEvent(func, &params);
}
void UTimelineComponent::SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.SetIgnoreTimeDilation"));
    struct Params_SetIgnoreTimeDilation {
        bool bNewIgnoreTimeDilation; // 0x0
    }; // Size: 0x1
    Params_SetIgnoreTimeDilation params{};
    params.bNewIgnoreTimeDilation = (bool)bNewIgnoreTimeDilation;
    ProcessEvent(func, &params);
}
void UTimelineComponent::ReverseFromEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.ReverseFromEnd"));
    struct Params_ReverseFromEnd {
    }; // Size: 0x0
    Params_ReverseFromEnd params{};
    ProcessEvent(func, &params);
}
void UTimelineComponent::Reverse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.Reverse"));
    struct Params_Reverse {
    }; // Size: 0x0
    Params_Reverse params{};
    ProcessEvent(func, &params);
}
void UTimelineComponent::PlayFromStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.PlayFromStart"));
    struct Params_PlayFromStart {
    }; // Size: 0x0
    Params_PlayFromStart params{};
    ProcessEvent(func, &params);
}
bool UTimelineComponent::GetIgnoreTimeDilation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.GetIgnoreTimeDilation"));
    struct Params_GetIgnoreTimeDilation {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIgnoreTimeDilation params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTimelineComponent::Play() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.Play"));
    struct Params_Play {
    }; // Size: 0x0
    Params_Play params{};
    ProcessEvent(func, &params);
}
void UTimelineComponent::OnRep_Timeline() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.OnRep_Timeline"));
    struct Params_OnRep_Timeline {
    }; // Size: 0x0
    Params_OnRep_Timeline params{};
    ProcessEvent(func, &params);
}
bool UTimelineComponent::IsLooping() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.IsLooping"));
    struct Params_IsLooping {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLooping params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UTimelineComponent::GetTimelineLength() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.GetTimelineLength"));
    struct Params_GetTimelineLength {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTimelineLength params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UTimelineComponent::GetPlayRate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.GetPlayRate"));
    struct Params_GetPlayRate {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlayRate params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UTimelineComponent::GetPlaybackPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TimelineComponent.GetPlaybackPosition"));
    struct Params_GetPlaybackPosition {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlaybackPosition params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
