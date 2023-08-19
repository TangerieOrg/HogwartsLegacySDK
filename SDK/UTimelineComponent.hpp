#pragma once
#include <cstdint>
#include "ETimelineLengthMode.hpp"
#include "FTimeline.hpp"
#include "UActorComponent.hpp"
class UCurveVector;
class UCurveLinearColor;
class UCurveFloat;
#pragma pack(push, 1)
class UTimelineComponent : public UActorComponent {
public:
    FTimeline TheTimeline; // 0xc8
    uint8_t bIgnoreTimeDilation : 1; // 0x160
    uint8_t pad_bitfield_160_1 : 7;
    char pad_161[0x7];
    static UTimelineComponent* StaticClass();
    void Stop();
    void SetVectorCurve(UCurveVector* NewVectorCurve, FName VectorTrackName);
    void SetTimelineLengthMode(ETimelineLengthMode NewLengthMode);
    void SetTimelineLength(float NewLength);
    void SetPlayRate(float NewRate);
    void SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate);
    void SetNewTime(float NewTime);
    void SetLooping(bool bNewLooping);
    void SetLinearColorCurve(UCurveLinearColor* NewLinearColorCurve, FName LinearColorTrackName);
    void SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation);
    void SetFloatCurve(UCurveFloat* NewFloatCurve, FName FloatTrackName);
    void ReverseFromEnd();
    void Reverse();
    void PlayFromStart();
    void Play();
    void OnRep_Timeline();
    bool IsReversing();
    bool IsPlaying();
    bool IsLooping();
    float GetTimelineLength();
    float GetPlayRate();
    float GetPlaybackPosition();
    bool GetIgnoreTimeDilation();
}; // Size: 0x168
#pragma pack(pop)
