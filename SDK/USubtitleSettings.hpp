#pragma once
#include <cstdint>
#include "EStandardManagedPriority.hpp"
#include "FVector2D.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USubtitleSettings : public UObject {
public:
    int32_t AudioPriorityCutoff; // 0x28
    int32_t AudioPrioritySuppress; // 0x2c
    float AudioLowPrioritySuppressDistance; // 0x30
    char pad_34[0x25c];
    static USubtitleSettings* StaticClass();
    static void StartSettingAudioPrioritySuppress(int32_t NewValue, EStandardManagedPriority Priority, UObject* Requestor);
    static void StartSettingAudioPriorityCutoff(int32_t NewValue, EStandardManagedPriority Priority, UObject* Requestor);
    static void StartSettingAudioLowPriorityDistanceSuppress(float NewValue);
    static void StartOverrideSubtitlePosition(UObject* Requestor, FVector2D OverridePos);
    static bool GetOverrideSubtitlePositionState();
    static int32_t GetAudioPrioritySuppress();
    static int32_t GetAudioPriorityCutoff();
    static float GetAudioLowPrioritySuppressDistance();
    static void FinishSettingAudioPrioritySuppress(EStandardManagedPriority Priority, UObject* Requestor);
    static void FinishSettingAudioPriorityCutoff(EStandardManagedPriority Priority, UObject* Requestor);
    static void FinishSettingAudioLowPriorityDistanceSuppress();
    static void FinishOverrideSubtitlePosition(UObject* Requestor);
    void AudioPriorityChangedHandler__DelegateSignature(int32_t NewValue);
    static void AddAudioPrioritySuppressChangedHandler();
    static void AddAudioPriorityCutoffChangedHandler();
}; // Size: 0x290
#pragma pack(pop)
