#include "EStandardManagedPriority.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USubtitleSettings.hpp"
USubtitleSettings* USubtitleSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SubtitleSettings");
    return (USubtitleSettings*)res;
}
void USubtitleSettings::FinishSettingAudioPriorityCutoff(EStandardManagedPriority Priority, UObject* Requestor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SubtitleSettings.FinishSettingAudioPriorityCutoff"));
    struct Params_FinishSettingAudioPriorityCutoff {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* Requestor; // 0x8
    }; // Size: 0x10
    Params_FinishSettingAudioPriorityCutoff params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.Requestor = (UObject*)Requestor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USubtitleSettings::StartSettingAudioPrioritySuppress(int32_t NewValue, EStandardManagedPriority Priority, UObject* Requestor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SubtitleSettings.StartSettingAudioPrioritySuppress"));
    struct Params_StartSettingAudioPrioritySuppress {
        int32_t NewValue; // 0x0
        EStandardManagedPriority Priority; // 0x4
        char pad_5[0x3];
        UObject* Requestor; // 0x8
    }; // Size: 0x10
    Params_StartSettingAudioPrioritySuppress params{};
    params.NewValue = (int32_t)NewValue;
    params.Priority = (EStandardManagedPriority)Priority;
    params.Requestor = (UObject*)Requestor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USubtitleSettings::StartSettingAudioLowPriorityDistanceSuppress(float NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SubtitleSettings.StartSettingAudioLowPriorityDistanceSuppress"));
    struct Params_StartSettingAudioLowPriorityDistanceSuppress {
        float NewValue; // 0x0
    }; // Size: 0x4
    Params_StartSettingAudioLowPriorityDistanceSuppress params{};
    params.NewValue = (float)NewValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USubtitleSettings::StartSettingAudioPriorityCutoff(int32_t NewValue, EStandardManagedPriority Priority, UObject* Requestor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SubtitleSettings.StartSettingAudioPriorityCutoff"));
    struct Params_StartSettingAudioPriorityCutoff {
        int32_t NewValue; // 0x0
        EStandardManagedPriority Priority; // 0x4
        char pad_5[0x3];
        UObject* Requestor; // 0x8
    }; // Size: 0x10
    Params_StartSettingAudioPriorityCutoff params{};
    params.NewValue = (int32_t)NewValue;
    params.Priority = (EStandardManagedPriority)Priority;
    params.Requestor = (UObject*)Requestor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USubtitleSettings::StartOverrideSubtitlePosition(UObject* Requestor, FVector2D OverridePos) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SubtitleSettings.StartOverrideSubtitlePosition"));
    struct Params_StartOverrideSubtitlePosition {
        UObject* Requestor; // 0x0
        FVector2D OverridePos; // 0x8
    }; // Size: 0x10
    Params_StartOverrideSubtitlePosition params{};
    params.Requestor = (UObject*)Requestor;
    params.OverridePos = (FVector2D)OverridePos;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t USubtitleSettings::GetAudioPrioritySuppress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SubtitleSettings.GetAudioPrioritySuppress"));
    struct Params_GetAudioPrioritySuppress {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAudioPrioritySuppress params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool USubtitleSettings::GetOverrideSubtitlePositionState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SubtitleSettings.GetOverrideSubtitlePositionState"));
    struct Params_GetOverrideSubtitlePositionState {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetOverrideSubtitlePositionState params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USubtitleSettings::FinishSettingAudioPrioritySuppress(EStandardManagedPriority Priority, UObject* Requestor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SubtitleSettings.FinishSettingAudioPrioritySuppress"));
    struct Params_FinishSettingAudioPrioritySuppress {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* Requestor; // 0x8
    }; // Size: 0x10
    Params_FinishSettingAudioPrioritySuppress params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.Requestor = (UObject*)Requestor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t USubtitleSettings::GetAudioPriorityCutoff() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SubtitleSettings.GetAudioPriorityCutoff"));
    struct Params_GetAudioPriorityCutoff {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAudioPriorityCutoff params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float USubtitleSettings::GetAudioLowPrioritySuppressDistance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SubtitleSettings.GetAudioLowPrioritySuppressDistance"));
    struct Params_GetAudioLowPrioritySuppressDistance {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAudioLowPrioritySuppressDistance params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void USubtitleSettings::FinishSettingAudioLowPriorityDistanceSuppress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SubtitleSettings.FinishSettingAudioLowPriorityDistanceSuppress"));
    struct Params_FinishSettingAudioLowPriorityDistanceSuppress {
    }; // Size: 0x0
    Params_FinishSettingAudioLowPriorityDistanceSuppress params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USubtitleSettings::FinishOverrideSubtitlePosition(UObject* Requestor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SubtitleSettings.FinishOverrideSubtitlePosition"));
    struct Params_FinishOverrideSubtitlePosition {
        UObject* Requestor; // 0x0
    }; // Size: 0x8
    Params_FinishOverrideSubtitlePosition params{};
    params.Requestor = (UObject*)Requestor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USubtitleSettings::AudioPriorityChangedHandler__DelegateSignature(int32_t NewValue) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.SubtitleSettings.AudioPriorityChangedHandler__DelegateSignature"));
    struct Params_AudioPriorityChangedHandler__DelegateSignature {
        int32_t NewValue; // 0x0
    }; // Size: 0x4
    Params_AudioPriorityChangedHandler__DelegateSignature params{};
    params.NewValue = (int32_t)NewValue;
    ProcessEvent(func, &params);
}
void USubtitleSettings::AddAudioPrioritySuppressChangedHandler() {}
void USubtitleSettings::AddAudioPriorityCutoffChangedHandler() {}
