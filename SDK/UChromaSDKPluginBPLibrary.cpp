#include "EChromaSDKDevice1DEnum\Type.hpp"
#include "EChromaSDKDevice2DEnum\Type.hpp"
#include "EChromaSDKDeviceEnum\Type.hpp"
#include "EChromaSDKKeyboardKey\Type.hpp"
#include "EChromaSDKMouseLed\Type.hpp"
#include "EChromaSDKStreamStatusEnum\Type.hpp"
#include "FChromaSDKAppInfoType.hpp"
#include "FChromaSDKColors.hpp"
#include "FChromaSDKEffectResult.hpp"
#include "FChromaSDKGuid.hpp"
#include "FKey.hpp"
#include "FLinearColor.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UChromaSDKPluginBPLibrary.hpp"
#include "UFunction.hpp"
void UChromaSDKPluginBPLibrary::TrimStartFramesName(FString AnimationName, int32_t NumberOfFrames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimStartFramesName"));
    struct Params_TrimStartFramesName {
        FString AnimationName; // 0x0
        int32_t NumberOfFrames; // 0x10
    }; // Size: 0x14
    Params_TrimStartFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.NumberOfFrames = (int32_t)NumberOfFrames;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::ClearAnimationType(EChromaSDKDeviceEnum::Type device) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAnimationType"));
    struct Params_ClearAnimationType {
        EChromaSDKDeviceEnum::Type device; // 0x0
    }; // Size: 0x1
    Params_ClearAnimationType params{};
    params.device = (EChromaSDKDeviceEnum::Type)device;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UChromaSDKPluginBPLibrary* UChromaSDKPluginBPLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary");
    return (UChromaSDKPluginBPLibrary*)res;
}
void UChromaSDKPluginBPLibrary::FillColorRGB(int32_t animationId, int32_t frameId, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorRGB"));
    struct Params_FillColorRGB {
        int32_t animationId; // 0x0
        int32_t frameId; // 0x4
        int32_t Red; // 0x8
        int32_t Green; // 0xc
        int32_t Blue; // 0x10
    }; // Size: 0x14
    Params_FillColorRGB params{};
    params.animationId = (int32_t)animationId;
    params.frameId = (int32_t)frameId;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SetKeyColorName(FString AnimationName, int32_t FrameIndex, EChromaSDKKeyboardKey::Type Key, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorName"));
    struct Params_SetKeyColorName {
        FString AnimationName; // 0x0
        int32_t FrameIndex; // 0x10
        EChromaSDKKeyboardKey::Type Key; // 0x14
        char pad_15[0x3];
        FLinearColor colorParam; // 0x18
    }; // Size: 0x28
    Params_SetKeyColorName params{};
    params.AnimationName = (FString)AnimationName;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Key = (EChromaSDKKeyboardKey::Type)Key;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::UsePreloadingName(FString AnimationName, bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UsePreloadingName"));
    struct Params_UsePreloadingName {
        FString AnimationName; // 0x0
        bool Flag; // 0x10
    }; // Size: 0x11
    Params_UsePreloadingName params{};
    params.AnimationName = (FString)AnimationName;
    params.Flag = (bool)Flag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::UnloadAnimation(int32_t animationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimation"));
    struct Params_UnloadAnimation {
        int32_t animationId; // 0x0
    }; // Size: 0x4
    Params_UnloadAnimation params{};
    params.animationId = (int32_t)animationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::UsePreloading(int32_t animationId, bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UsePreloading"));
    struct Params_UsePreloading {
        int32_t animationId; // 0x0
        bool Flag; // 0x4
    }; // Size: 0x5
    Params_UsePreloading params{};
    params.animationId = (int32_t)animationId;
    params.Flag = (bool)Flag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::UseIdleAnimations(bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UseIdleAnimations"));
    struct Params_UseIdleAnimations {
        bool Flag; // 0x0
    }; // Size: 0x1
    Params_UseIdleAnimations params{};
    params.Flag = (bool)Flag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::OffsetColorsAllFramesName(FString AnimationName, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsAllFramesName"));
    struct Params_OffsetColorsAllFramesName {
        FString AnimationName; // 0x0
        int32_t Red; // 0x10
        int32_t Green; // 0x14
        int32_t Blue; // 0x18
    }; // Size: 0x1c
    Params_OffsetColorsAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FString UChromaSDKPluginBPLibrary::StreamGetId(FString shortcode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StreamGetId"));
    struct Params_StreamGetId {
        FString shortcode; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_StreamGetId params{};
    params.shortcode = (FString)shortcode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::StopAnimation(FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimation"));
    struct Params_StopAnimation {
        FString AnimationName; // 0x0
    }; // Size: 0x10
    Params_StopAnimation params{};
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::UseIdleAnimation(EChromaSDKDeviceEnum::Type device, bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UseIdleAnimation"));
    struct Params_UseIdleAnimation {
        EChromaSDKDeviceEnum::Type device; // 0x0
        bool Flag; // 0x1
    }; // Size: 0x2
    Params_UseIdleAnimation params{};
    params.device = (EChromaSDKDeviceEnum::Type)device;
    params.Flag = (bool)Flag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SetKeysColorAllFramesRGB(int32_t animationId, TArray_EChromaSDKKeyboardKey::Type>& Keys, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesRGB"));
    struct Params_SetKeysColorAllFramesRGB {
        int32_t animationId; // 0x0
        char pad_4[0x4];
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x8
        int32_t Red; // 0x18
        int32_t Green; // 0x1c
        int32_t Blue; // 0x20
    }; // Size: 0x24
    Params_SetKeysColorAllFramesRGB params{};
    params.animationId = (int32_t)animationId;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
}
void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysName(FString sourceAnimationName, FString targetAnimationName, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysName"));
    struct Params_CopyNonZeroAllKeysName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
        int32_t frameId; // 0x20
    }; // Size: 0x24
    Params_CopyNonZeroAllKeysName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SetStaticColorAll(FLinearColor& Color) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetStaticColorAll"));
    struct Params_SetStaticColorAll {
        FLinearColor Color; // 0x0
    }; // Size: 0x10
    Params_SetStaticColorAll params{};
    params.Color = (FLinearColor)Color;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Color = params.Color;
}
void UChromaSDKPluginBPLibrary::UnloadAnimationName(FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimationName"));
    struct Params_UnloadAnimationName {
        FString AnimationName; // 0x0
    }; // Size: 0x10
    Params_UnloadAnimationName params{};
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::OffsetColorsName(FString AnimationName, int32_t frameId, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsName"));
    struct Params_OffsetColorsName {
        FString AnimationName; // 0x0
        int32_t frameId; // 0x10
        int32_t Red; // 0x14
        int32_t Green; // 0x18
        int32_t Blue; // 0x1c
    }; // Size: 0x20
    Params_OffsetColorsName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameId = (int32_t)frameId;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::TrimStartFrames(int32_t animationId, int32_t NumberOfFrames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimStartFrames"));
    struct Params_TrimStartFrames {
        int32_t animationId; // 0x0
        int32_t NumberOfFrames; // 0x4
    }; // Size: 0x8
    Params_TrimStartFrames params{};
    params.animationId = (int32_t)animationId;
    params.NumberOfFrames = (int32_t)NumberOfFrames;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::OffsetNonZeroColorsName(FString AnimationName, int32_t frameId, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsName"));
    struct Params_OffsetNonZeroColorsName {
        FString AnimationName; // 0x0
        int32_t frameId; // 0x10
        int32_t Red; // 0x14
        int32_t Green; // 0x18
        int32_t Blue; // 0x1c
    }; // Size: 0x20
    Params_OffsetNonZeroColorsName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameId = (int32_t)frameId;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::TrimFrameName(FString AnimationName, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimFrameName"));
    struct Params_TrimFrameName {
        FString AnimationName; // 0x0
        int32_t frameId; // 0x10
    }; // Size: 0x14
    Params_TrimFrameName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::TrimFrame(int32_t animationId, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimFrame"));
    struct Params_TrimFrame {
        int32_t animationId; // 0x0
        int32_t frameId; // 0x4
    }; // Size: 0x8
    Params_TrimFrame params{};
    params.animationId = (int32_t)animationId;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SetKeysNonZeroColorAllFrames(int32_t animationId, TArray_EChromaSDKKeyboardKey::Type>& Keys, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorAllFrames"));
    struct Params_SetKeysNonZeroColorAllFrames {
        int32_t animationId; // 0x0
        char pad_4[0x4];
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x8
        FLinearColor colorParam; // 0x18
    }; // Size: 0x28
    Params_SetKeysNonZeroColorAllFrames params{};
    params.animationId = (int32_t)animationId;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::CopyNonZeroKeysColorName(FString sourceAnimationName, FString targetAnimationName, int32_t FrameIndex, TArray_EChromaSDKKeyboardKey::Type>& Keys) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorName"));
    struct Params_CopyNonZeroKeysColorName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
        int32_t FrameIndex; // 0x20
        char pad_24[0x4];
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x28
    }; // Size: 0x38
    Params_CopyNonZeroKeysColorName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
}
void UChromaSDKPluginBPLibrary::TrimEndFramesName(FString AnimationName, int32_t lastFrameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimEndFramesName"));
    struct Params_TrimEndFramesName {
        FString AnimationName; // 0x0
        int32_t lastFrameId; // 0x10
    }; // Size: 0x14
    Params_TrimEndFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.lastFrameId = (int32_t)lastFrameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UChromaSDKPluginBPLibrary::ChromaSDKUnInit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKUnInit"));
    struct Params_ChromaSDKUnInit {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_ChromaSDKUnInit params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::SetKeysNonZeroColorAllFramesName(FString AnimationName, TArray_EChromaSDKKeyboardKey::Type>& Keys, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorAllFramesName"));
    struct Params_SetKeysNonZeroColorAllFramesName {
        FString AnimationName; // 0x0
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x10
        FLinearColor colorParam; // 0x20
    }; // Size: 0x30
    Params_SetKeysNonZeroColorAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
    Keys = params.Keys;
}
void UChromaSDKPluginBPLibrary::SetKeysColor(int32_t animationId, int32_t FrameIndex, TArray_EChromaSDKKeyboardKey::Type>& Keys, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColor"));
    struct Params_SetKeysColor {
        int32_t animationId; // 0x0
        int32_t FrameIndex; // 0x4
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x8
        FLinearColor colorParam; // 0x18
    }; // Size: 0x28
    Params_SetKeysColor params{};
    params.animationId = (int32_t)animationId;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::TrimEndFrames(int32_t animationId, int32_t lastFrameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimEndFrames"));
    struct Params_TrimEndFrames {
        int32_t animationId; // 0x0
        int32_t lastFrameId; // 0x4
    }; // Size: 0x8
    Params_TrimEndFrames params{};
    params.animationId = (int32_t)animationId;
    params.lastFrameId = (int32_t)lastFrameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FLinearColor UChromaSDKPluginBPLibrary::ToLinearColor(int32_t colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ToLinearColor"));
    struct Params_ToLinearColor {
        int32_t colorParam; // 0x0
        FLinearColor ReturnValue; // 0x4
    }; // Size: 0x14
    Params_ToLinearColor params{};
    params.colorParam = (int32_t)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::StopAnimations(TArray<FString>& animationNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimations"));
    struct Params_StopAnimations {
        TArray<FString> animationNames; // 0x0
    }; // Size: 0x10
    Params_StopAnimations params{};
    params.animationNames = (TArray<FString>)animationNames;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    animationNames = params.animationNames;
}
int32_t UChromaSDKPluginBPLibrary::ToBGR(FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ToBGR"));
    struct Params_ToBGR {
        FLinearColor colorParam; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_ToBGR params{};
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
    return (int32_t)params.ReturnValue;
}
bool UChromaSDKPluginBPLibrary::SupportsStreaming() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SupportsStreaming"));
    struct Params_SupportsStreaming {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_SupportsStreaming params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::MultiplyIntensityAllFrames(int32_t animationId, float Intensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFrames"));
    struct Params_MultiplyIntensityAllFrames {
        int32_t animationId; // 0x0
        float Intensity; // 0x4
    }; // Size: 0x8
    Params_MultiplyIntensityAllFrames params{};
    params.animationId = (int32_t)animationId;
    params.Intensity = (float)Intensity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::MultiplyIntensityColorAllFrames(int32_t animationId, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorAllFrames"));
    struct Params_MultiplyIntensityColorAllFrames {
        int32_t animationId; // 0x0
        FLinearColor colorParam; // 0x4
    }; // Size: 0x14
    Params_MultiplyIntensityColorAllFrames params{};
    params.animationId = (int32_t)animationId;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::SubtractNonZeroTargetAllKeysAllFramesOffsetName(FString sourceAnimationName, FString targetAnimationName, int32_t Offset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesOffsetName"));
    struct Params_SubtractNonZeroTargetAllKeysAllFramesOffsetName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
        int32_t Offset; // 0x20
    }; // Size: 0x24
    Params_SubtractNonZeroTargetAllKeysAllFramesOffsetName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    params.Offset = (int32_t)Offset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SetKeyNonZeroColorAllFrames(int32_t animationId, EChromaSDKKeyboardKey::Type Key, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorAllFrames"));
    struct Params_SetKeyNonZeroColorAllFrames {
        int32_t animationId; // 0x0
        EChromaSDKKeyboardKey::Type Key; // 0x4
        char pad_5[0x3];
        FLinearColor colorParam; // 0x8
    }; // Size: 0x18
    Params_SetKeyNonZeroColorAllFrames params{};
    params.animationId = (int32_t)animationId;
    params.Key = (EChromaSDKKeyboardKey::Type)Key;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::SubtractNonZeroTargetAllKeysAllFramesOffset(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t Offset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesOffset"));
    struct Params_SubtractNonZeroTargetAllKeysAllFramesOffset {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
        int32_t Offset; // 0x8
    }; // Size: 0xc
    Params_SubtractNonZeroTargetAllKeysAllFramesOffset params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    params.Offset = (int32_t)Offset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SubtractNonZeroTargetAllKeysAllFramesName(FString sourceAnimationName, FString targetAnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesName"));
    struct Params_SubtractNonZeroTargetAllKeysAllFramesName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
    }; // Size: 0x20
    Params_SubtractNonZeroTargetAllKeysAllFramesName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SetKeyColor(int32_t animationId, int32_t FrameIndex, EChromaSDKKeyboardKey::Type Key, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColor"));
    struct Params_SetKeyColor {
        int32_t animationId; // 0x0
        int32_t FrameIndex; // 0x4
        EChromaSDKKeyboardKey::Type Key; // 0x8
        char pad_9[0x3];
        FLinearColor colorParam; // 0xc
    }; // Size: 0x1c
    Params_SetKeyColor params{};
    params.animationId = (int32_t)animationId;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Key = (EChromaSDKKeyboardKey::Type)Key;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
FString UChromaSDKPluginBPLibrary::StreamGetFocus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StreamGetFocus"));
    struct Params_StreamGetFocus {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_StreamGetFocus params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::SubtractNonZeroTargetAllKeysAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFrames"));
    struct Params_SubtractNonZeroTargetAllKeysAllFrames {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
    }; // Size: 0x8
    Params_SubtractNonZeroTargetAllKeysAllFrames params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SubtractNonZeroAllKeysName(FString sourceAnimationName, FString targetAnimationName, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysName"));
    struct Params_SubtractNonZeroAllKeysName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
        int32_t frameId; // 0x20
    }; // Size: 0x24
    Params_SubtractNonZeroAllKeysName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillColor(int32_t animationId, int32_t frameId, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColor"));
    struct Params_FillColor {
        int32_t animationId; // 0x0
        int32_t frameId; // 0x4
        FLinearColor colorParam; // 0x8
    }; // Size: 0x18
    Params_FillColor params{};
    params.animationId = (int32_t)animationId;
    params.frameId = (int32_t)frameId;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::StopAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAll"));
    struct Params_StopAll {
    }; // Size: 0x0
    Params_StopAll params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SubtractNonZeroAllKeysAllFramesOffsetName(FString sourceAnimationName, FString targetAnimationName, int32_t Offset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesOffsetName"));
    struct Params_SubtractNonZeroAllKeysAllFramesOffsetName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
        int32_t Offset; // 0x20
    }; // Size: 0x24
    Params_SubtractNonZeroAllKeysAllFramesOffsetName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    params.Offset = (int32_t)Offset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::StopAnimationType(EChromaSDKDeviceEnum::Type device) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationType"));
    struct Params_StopAnimationType {
        EChromaSDKDeviceEnum::Type device; // 0x0
    }; // Size: 0x1
    Params_StopAnimationType params{};
    params.device = (EChromaSDKDeviceEnum::Type)device;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SubtractNonZeroAllKeysAllFramesOffset(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t Offset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesOffset"));
    struct Params_SubtractNonZeroAllKeysAllFramesOffset {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
        int32_t Offset; // 0x8
    }; // Size: 0xc
    Params_SubtractNonZeroAllKeysAllFramesOffset params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    params.Offset = (int32_t)Offset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SubtractNonZeroAllKeysAllFramesName(FString sourceAnimationName, FString targetAnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesName"));
    struct Params_SubtractNonZeroAllKeysAllFramesName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
    }; // Size: 0x20
    Params_SubtractNonZeroAllKeysAllFramesName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SubtractNonZeroAllKeysAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFrames"));
    struct Params_SubtractNonZeroAllKeysAllFrames {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
    }; // Size: 0x8
    Params_SubtractNonZeroAllKeysAllFrames params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SetKeysColorAllFramesName(FString AnimationName, TArray_EChromaSDKKeyboardKey::Type>& Keys, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesName"));
    struct Params_SetKeysColorAllFramesName {
        FString AnimationName; // 0x0
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x10
        FLinearColor colorParam; // 0x20
    }; // Size: 0x30
    Params_SetKeysColorAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::SetKeysColorAllFrames(int32_t animationId, TArray_EChromaSDKKeyboardKey::Type>& Keys, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFrames"));
    struct Params_SetKeysColorAllFrames {
        int32_t animationId; // 0x0
        char pad_4[0x4];
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x8
        FLinearColor colorParam; // 0x18
    }; // Size: 0x28
    Params_SetKeysColorAllFrames params{};
    params.animationId = (int32_t)animationId;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::SubtractNonZeroAllKeys(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeys"));
    struct Params_SubtractNonZeroAllKeys {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
        int32_t frameId; // 0x8
    }; // Size: 0xc
    Params_SubtractNonZeroAllKeys params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::MultiplyIntensity(int32_t animationId, int32_t frameId, float Intensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensity"));
    struct Params_MultiplyIntensity {
        int32_t animationId; // 0x0
        int32_t frameId; // 0x4
        float Intensity; // 0x8
    }; // Size: 0xc
    Params_MultiplyIntensity params{};
    params.animationId = (int32_t)animationId;
    params.frameId = (int32_t)frameId;
    params.Intensity = (float)Intensity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::StreamWatchEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StreamWatchEnd"));
    struct Params_StreamWatchEnd {
    }; // Size: 0x0
    Params_StreamWatchEnd params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::MakeBlankFramesRandomBlackAndWhite(int32_t animationId, int32_t frameCount, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomBlackAndWhite"));
    struct Params_MakeBlankFramesRandomBlackAndWhite {
        int32_t animationId; // 0x0
        int32_t frameCount; // 0x4
        float Duration; // 0x8
    }; // Size: 0xc
    Params_MakeBlankFramesRandomBlackAndWhite params{};
    params.animationId = (int32_t)animationId;
    params.frameCount = (int32_t)frameCount;
    params.Duration = (float)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::OffsetColorsAllFrames(int32_t animationId, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsAllFrames"));
    struct Params_OffsetColorsAllFrames {
        int32_t animationId; // 0x0
        int32_t Red; // 0x4
        int32_t Green; // 0x8
        int32_t Blue; // 0xc
    }; // Size: 0x10
    Params_OffsetColorsAllFrames params{};
    params.animationId = (int32_t)animationId;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::StreamWatch(FString streamId, int32_t Timestamp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StreamWatch"));
    struct Params_StreamWatch {
        FString streamId; // 0x0
        int32_t Timestamp; // 0x10
    }; // Size: 0x14
    Params_StreamWatch params{};
    params.streamId = (FString)streamId;
    params.Timestamp = (int32_t)Timestamp;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SetKeysNonZeroColorName(FString AnimationName, int32_t FrameIndex, TArray_EChromaSDKKeyboardKey::Type>& Keys, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorName"));
    struct Params_SetKeysNonZeroColorName {
        FString AnimationName; // 0x0
        int32_t FrameIndex; // 0x10
        char pad_14[0x4];
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x18
        FLinearColor colorParam; // 0x28
    }; // Size: 0x38
    Params_SetKeysNonZeroColorName params{};
    params.AnimationName = (FString)AnimationName;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
    colorParam = params.colorParam;
}
FString UChromaSDKPluginBPLibrary::StreamGetAuthShortcode(FString Platform, FString Title) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StreamGetAuthShortcode"));
    struct Params_StreamGetAuthShortcode {
        FString Platform; // 0x0
        FString Title; // 0x10
        FString ReturnValue; // 0x20
    }; // Size: 0x30
    Params_StreamGetAuthShortcode params{};
    params.Platform = (FString)Platform;
    params.Title = (FString)Title;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UChromaSDKPluginBPLibrary::StreamSetFocus(FString streamFocus) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StreamSetFocus"));
    struct Params_StreamSetFocus {
        FString streamFocus; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_StreamSetFocus params{};
    params.streamFocus = (FString)streamFocus;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UChromaSDKPluginBPLibrary::StreamReleaseShortcode(FString shortcode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StreamReleaseShortcode"));
    struct Params_StreamReleaseShortcode {
        FString shortcode; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_StreamReleaseShortcode params{};
    params.shortcode = (FString)shortcode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::FillColorAllFrames(int32_t animationId, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFrames"));
    struct Params_FillColorAllFrames {
        int32_t animationId; // 0x0
        FLinearColor colorParam; // 0x4
    }; // Size: 0x14
    Params_FillColorAllFrames params{};
    params.animationId = (int32_t)animationId;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::StreamBroadcast(FString streamId, FString streamKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StreamBroadcast"));
    struct Params_StreamBroadcast {
        FString streamId; // 0x0
        FString streamKey; // 0x10
    }; // Size: 0x20
    Params_StreamBroadcast params{};
    params.streamId = (FString)streamId;
    params.streamKey = (FString)streamKey;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillNonZeroColorName(FString AnimationName, int32_t frameId, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorName"));
    struct Params_FillNonZeroColorName {
        FString AnimationName; // 0x0
        int32_t frameId; // 0x10
        FLinearColor colorParam; // 0x14
    }; // Size: 0x24
    Params_FillNonZeroColorName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameId = (int32_t)frameId;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
FString UChromaSDKPluginBPLibrary::StreamGetStatusString(EChromaSDKStreamStatusEnum::Type Status) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StreamGetStatusString"));
    struct Params_StreamGetStatusString {
        EChromaSDKStreamStatusEnum::Type Status; // 0x0
        char pad_1[0x7];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_StreamGetStatusString params{};
    params.Status = (EChromaSDKStreamStatusEnum::Type)Status;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::ReduceFrames(int32_t animationId, int32_t N) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReduceFrames"));
    struct Params_ReduceFrames {
        int32_t animationId; // 0x0
        int32_t N; // 0x4
    }; // Size: 0x8
    Params_ReduceFrames params{};
    params.animationId = (int32_t)animationId;
    params.N = (int32_t)N;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
EChromaSDKStreamStatusEnum::Type UChromaSDKPluginBPLibrary::StreamGetStatus() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StreamGetStatus"));
    struct Params_StreamGetStatus {
        EChromaSDKStreamStatusEnum::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_StreamGetStatus params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EChromaSDKStreamStatusEnum::Type)params.ReturnValue;
}
FString UChromaSDKPluginBPLibrary::StreamGetKey(FString shortcode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StreamGetKey"));
    struct Params_StreamGetKey {
        FString shortcode; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_StreamGetKey params{};
    params.shortcode = (FString)shortcode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::StreamBroadcastEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StreamBroadcastEnd"));
    struct Params_StreamBroadcastEnd {
    }; // Size: 0x0
    Params_StreamBroadcastEnd params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillNonZeroColorRGBName(FString AnimationName, int32_t frameId, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorRGBName"));
    struct Params_FillNonZeroColorRGBName {
        FString AnimationName; // 0x0
        int32_t frameId; // 0x10
        int32_t Red; // 0x14
        int32_t Green; // 0x18
        int32_t Blue; // 0x1c
    }; // Size: 0x20
    Params_FillNonZeroColorRGBName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameId = (int32_t)frameId;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::StopAnimationComposite(FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationComposite"));
    struct Params_StopAnimationComposite {
        FString AnimationName; // 0x0
    }; // Size: 0x10
    Params_StopAnimationComposite params{};
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SetKeyRowColumnColorName(FString AnimationName, int32_t FrameIndex, int32_t Row, int32_t Column, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyRowColumnColorName"));
    struct Params_SetKeyRowColumnColorName {
        FString AnimationName; // 0x0
        int32_t FrameIndex; // 0x10
        int32_t Row; // 0x14
        int32_t Column; // 0x18
        FLinearColor colorParam; // 0x1c
    }; // Size: 0x2c
    Params_SetKeyRowColumnColorName params{};
    params.AnimationName = (FString)AnimationName;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Row = (int32_t)Row;
    params.Column = (int32_t)Column;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::SetStaticColor(EChromaSDKDeviceEnum::Type device, FLinearColor& Color) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetStaticColor"));
    struct Params_SetStaticColor {
        EChromaSDKDeviceEnum::Type device; // 0x0
        char pad_1[0x3];
        FLinearColor Color; // 0x4
    }; // Size: 0x14
    Params_SetStaticColor params{};
    params.device = (EChromaSDKDeviceEnum::Type)device;
    params.Color = (FLinearColor)Color;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Color = params.Color;
}
void UChromaSDKPluginBPLibrary::SetKeyNonZeroColorName(FString AnimationName, int32_t FrameIndex, EChromaSDKKeyboardKey::Type Key, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorName"));
    struct Params_SetKeyNonZeroColorName {
        FString AnimationName; // 0x0
        int32_t FrameIndex; // 0x10
        EChromaSDKKeyboardKey::Type Key; // 0x14
        char pad_15[0x3];
        FLinearColor colorParam; // 0x18
    }; // Size: 0x28
    Params_SetKeyNonZeroColorName params{};
    params.AnimationName = (FString)AnimationName;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Key = (EChromaSDKKeyboardKey::Type)Key;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::SetMouseLedColor(EChromaSDKMouseLed::Type led, FLinearColor& colorParam, TArray<FChromaSDKColors>& Colors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetMouseLedColor"));
    struct Params_SetMouseLedColor {
        EChromaSDKMouseLed::Type led; // 0x0
        char pad_1[0x3];
        FLinearColor colorParam; // 0x4
        char pad_14[0x4];
        TArray<FChromaSDKColors> Colors; // 0x18
    }; // Size: 0x28
    Params_SetMouseLedColor params{};
    params.led = (EChromaSDKMouseLed::Type)led;
    params.colorParam = (FLinearColor)colorParam;
    params.Colors = (TArray<FChromaSDKColors>)Colors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
    Colors = params.Colors;
}
void UChromaSDKPluginBPLibrary::SetKeysNonZeroColor(int32_t animationId, int32_t FrameIndex, TArray_EChromaSDKKeyboardKey::Type>& Keys, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColor"));
    struct Params_SetKeysNonZeroColor {
        int32_t animationId; // 0x0
        int32_t FrameIndex; // 0x4
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x8
        FLinearColor colorParam; // 0x18
    }; // Size: 0x28
    Params_SetKeysNonZeroColor params{};
    params.animationId = (int32_t)animationId;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
    Keys = params.Keys;
}
void UChromaSDKPluginBPLibrary::SetKeysColorRGBName(FString AnimationName, int32_t FrameIndex, TArray_EChromaSDKKeyboardKey::Type>& Keys, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorRGBName"));
    struct Params_SetKeysColorRGBName {
        FString AnimationName; // 0x0
        int32_t FrameIndex; // 0x10
        char pad_14[0x4];
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x18
        int32_t Red; // 0x28
        int32_t Green; // 0x2c
        int32_t Blue; // 0x30
    }; // Size: 0x34
    Params_SetKeysColorRGBName params{};
    params.AnimationName = (FString)AnimationName;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
}
void UChromaSDKPluginBPLibrary::SetKeysColorRGB(int32_t animationId, int32_t FrameIndex, TArray_EChromaSDKKeyboardKey::Type>& Keys, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorRGB"));
    struct Params_SetKeysColorRGB {
        int32_t animationId; // 0x0
        int32_t FrameIndex; // 0x4
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x8
        int32_t Red; // 0x18
        int32_t Green; // 0x1c
        int32_t Blue; // 0x20
    }; // Size: 0x24
    Params_SetKeysColorRGB params{};
    params.animationId = (int32_t)animationId;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
}
void UChromaSDKPluginBPLibrary::SetKeysColorName(FString AnimationName, int32_t FrameIndex, TArray_EChromaSDKKeyboardKey::Type>& Keys, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorName"));
    struct Params_SetKeysColorName {
        FString AnimationName; // 0x0
        int32_t FrameIndex; // 0x10
        char pad_14[0x4];
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x18
        FLinearColor colorParam; // 0x28
    }; // Size: 0x38
    Params_SetKeysColorName params{};
    params.AnimationName = (FString)AnimationName;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::FillRandomColorsAllFrames(int32_t animationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsAllFrames"));
    struct Params_FillRandomColorsAllFrames {
        int32_t animationId; // 0x0
    }; // Size: 0x4
    Params_FillRandomColorsAllFrames params{};
    params.animationId = (int32_t)animationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SetKeyNonZeroColor(int32_t animationId, int32_t FrameIndex, EChromaSDKKeyboardKey::Type Key, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColor"));
    struct Params_SetKeyNonZeroColor {
        int32_t animationId; // 0x0
        int32_t FrameIndex; // 0x4
        EChromaSDKKeyboardKey::Type Key; // 0x8
        char pad_9[0x3];
        FLinearColor colorParam; // 0xc
    }; // Size: 0x1c
    Params_SetKeyNonZeroColor params{};
    params.animationId = (int32_t)animationId;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Key = (EChromaSDKKeyboardKey::Type)Key;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::SetKeysColorAllFramesRGBName(FString AnimationName, TArray_EChromaSDKKeyboardKey::Type>& Keys, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesRGBName"));
    struct Params_SetKeysColorAllFramesRGBName {
        FString AnimationName; // 0x0
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x10
        int32_t Red; // 0x20
        int32_t Green; // 0x24
        int32_t Blue; // 0x28
    }; // Size: 0x2c
    Params_SetKeysColorAllFramesRGBName params{};
    params.AnimationName = (FString)AnimationName;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
}
void UChromaSDKPluginBPLibrary::SetKeyNonZeroColorAllFramesName(FString AnimationName, EChromaSDKKeyboardKey::Type Key, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorAllFramesName"));
    struct Params_SetKeyNonZeroColorAllFramesName {
        FString AnimationName; // 0x0
        EChromaSDKKeyboardKey::Type Key; // 0x10
        char pad_11[0x3];
        FLinearColor colorParam; // 0x14
    }; // Size: 0x24
    Params_SetKeyNonZeroColorAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.Key = (EChromaSDKKeyboardKey::Type)Key;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::SetKeyColorAllFramesName(FString AnimationName, EChromaSDKKeyboardKey::Type Key, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFramesName"));
    struct Params_SetKeyColorAllFramesName {
        FString AnimationName; // 0x0
        EChromaSDKKeyboardKey::Type Key; // 0x10
        char pad_11[0x3];
        FLinearColor colorParam; // 0x14
    }; // Size: 0x24
    Params_SetKeyColorAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.Key = (EChromaSDKKeyboardKey::Type)Key;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::SetKeyColorAllFrames(int32_t animationId, EChromaSDKKeyboardKey::Type Key, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFrames"));
    struct Params_SetKeyColorAllFrames {
        int32_t animationId; // 0x0
        EChromaSDKKeyboardKey::Type Key; // 0x4
        char pad_5[0x3];
        FLinearColor colorParam; // 0x8
    }; // Size: 0x18
    Params_SetKeyColorAllFrames params{};
    params.animationId = (int32_t)animationId;
    params.Key = (EChromaSDKKeyboardKey::Type)Key;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::SetKeyboardKeyColor(EChromaSDKKeyboardKey::Type Key, FLinearColor& colorParam, TArray<FChromaSDKColors>& Colors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyboardKeyColor"));
    struct Params_SetKeyboardKeyColor {
        EChromaSDKKeyboardKey::Type Key; // 0x0
        char pad_1[0x3];
        FLinearColor colorParam; // 0x4
        char pad_14[0x4];
        TArray<FChromaSDKColors> Colors; // 0x18
    }; // Size: 0x28
    Params_SetKeyboardKeyColor params{};
    params.Key = (EChromaSDKKeyboardKey::Type)Key;
    params.colorParam = (FLinearColor)colorParam;
    params.Colors = (TArray<FChromaSDKColors>)Colors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
    Colors = params.Colors;
}
void UChromaSDKPluginBPLibrary::SetIdleAnimationName(FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetIdleAnimationName"));
    struct Params_SetIdleAnimationName {
        FString AnimationName; // 0x0
    }; // Size: 0x10
    Params_SetIdleAnimationName params{};
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SetCurrentFrameName(FString AnimationName, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetCurrentFrameName"));
    struct Params_SetCurrentFrameName {
        FString AnimationName; // 0x0
        int32_t frameId; // 0x10
    }; // Size: 0x14
    Params_SetCurrentFrameName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SetCurrentFrame(int32_t animationId, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetCurrentFrame"));
    struct Params_SetCurrentFrame {
        int32_t animationId; // 0x0
        int32_t frameId; // 0x4
    }; // Size: 0x8
    Params_SetCurrentFrame params{};
    params.animationId = (int32_t)animationId;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SetChromaCustomFlagName(FString AnimationName, bool Flag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetChromaCustomFlagName"));
    struct Params_SetChromaCustomFlagName {
        FString AnimationName; // 0x0
        bool Flag; // 0x10
    }; // Size: 0x11
    Params_SetChromaCustomFlagName params{};
    params.AnimationName = (FString)AnimationName;
    params.Flag = (bool)Flag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::SetChromaCustomColorAllFramesName(FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetChromaCustomColorAllFramesName"));
    struct Params_SetChromaCustomColorAllFramesName {
        FString AnimationName; // 0x0
    }; // Size: 0x10
    Params_SetChromaCustomColorAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::ReverseAllFramesName(FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReverseAllFramesName"));
    struct Params_ReverseAllFramesName {
        FString AnimationName; // 0x0
    }; // Size: 0x10
    Params_ReverseAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::ReverseAllFrames(int32_t animationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReverseAllFrames"));
    struct Params_ReverseAllFrames {
        int32_t animationId; // 0x0
    }; // Size: 0x4
    Params_ReverseAllFrames params{};
    params.animationId = (int32_t)animationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::ReduceFramesName(FString AnimationName, int32_t N) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReduceFramesName"));
    struct Params_ReduceFramesName {
        FString AnimationName; // 0x0
        int32_t N; // 0x10
    }; // Size: 0x14
    Params_ReduceFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.N = (int32_t)N;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillThresholdRGBColorsAllFramesRGBName(FString AnimationName, int32_t redThreshold, int32_t greenThreshold, int32_t blueThreshold, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdRGBColorsAllFramesRGBName"));
    struct Params_FillThresholdRGBColorsAllFramesRGBName {
        FString AnimationName; // 0x0
        int32_t redThreshold; // 0x10
        int32_t greenThreshold; // 0x14
        int32_t blueThreshold; // 0x18
        int32_t Red; // 0x1c
        int32_t Green; // 0x20
        int32_t Blue; // 0x24
    }; // Size: 0x28
    Params_FillThresholdRGBColorsAllFramesRGBName params{};
    params.AnimationName = (FString)AnimationName;
    params.redThreshold = (int32_t)redThreshold;
    params.greenThreshold = (int32_t)greenThreshold;
    params.blueThreshold = (int32_t)blueThreshold;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::PreviewFrameName(FString AnimationName, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PreviewFrameName"));
    struct Params_PreviewFrameName {
        FString AnimationName; // 0x0
        int32_t frameId; // 0x10
    }; // Size: 0x14
    Params_PreviewFrameName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillColorAllFramesRGBName(FString AnimationName, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesRGBName"));
    struct Params_FillColorAllFramesRGBName {
        FString AnimationName; // 0x0
        int32_t Red; // 0x10
        int32_t Green; // 0x14
        int32_t Blue; // 0x18
    }; // Size: 0x1c
    Params_FillColorAllFramesRGBName params{};
    params.AnimationName = (FString)AnimationName;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillRandomColors(int32_t animationId, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColors"));
    struct Params_FillRandomColors {
        int32_t animationId; // 0x0
        int32_t frameId; // 0x4
    }; // Size: 0x8
    Params_FillRandomColors params{};
    params.animationId = (int32_t)animationId;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UChromaSDKPluginBPLibrary::GetAnimationId(FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationId"));
    struct Params_GetAnimationId {
        FString AnimationName; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetAnimationId params{};
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UChromaSDKPluginBPLibrary::PreviewFrame(int32_t animationId, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PreviewFrame"));
    struct Params_PreviewFrame {
        int32_t animationId; // 0x0
        int32_t frameId; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_PreviewFrame params{};
    params.animationId = (int32_t)animationId;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UChromaSDKPluginBPLibrary::LerpColorBGR(int32_t From, int32_t To, float T) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LerpColorBGR"));
    struct Params_LerpColorBGR {
        int32_t From; // 0x0
        int32_t To; // 0x4
        float T; // 0x8
        int32_t ReturnValue; // 0xc
    }; // Size: 0x10
    Params_LerpColorBGR params{};
    params.From = (int32_t)From;
    params.To = (int32_t)To;
    params.T = (float)T;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::PlayAnimations(TArray<FString>& animationNames, bool Loop) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimations"));
    struct Params_PlayAnimations {
        TArray<FString> animationNames; // 0x0
        bool Loop; // 0x10
    }; // Size: 0x11
    Params_PlayAnimations params{};
    params.animationNames = (TArray<FString>)animationNames;
    params.Loop = (bool)Loop;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    animationNames = params.animationNames;
}
int32_t UChromaSDKPluginBPLibrary::ChromaSDKInitSDK(FChromaSDKAppInfoType& appInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKInitSDK"));
    struct Params_ChromaSDKInitSDK {
        FChromaSDKAppInfoType appInfo; // 0x0
        int32_t ReturnValue; // 0x48
    }; // Size: 0x4c
    Params_ChromaSDKInitSDK params{};
    params.appInfo = (FChromaSDKAppInfoType)appInfo;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    appInfo = params.appInfo;
    return (int32_t)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeys(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeys"));
    struct Params_CopyNonZeroAllKeys {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
        int32_t frameId; // 0x8
    }; // Size: 0xc
    Params_CopyNonZeroAllKeys params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::MakeBlankFramesRandomName(FString AnimationName, int32_t frameCount, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomName"));
    struct Params_MakeBlankFramesRandomName {
        FString AnimationName; // 0x0
        int32_t frameCount; // 0x10
        float Duration; // 0x14
    }; // Size: 0x18
    Params_MakeBlankFramesRandomName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameCount = (int32_t)frameCount;
    params.Duration = (float)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::PlayAnimationName(FString AnimationName, bool Loop) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationName"));
    struct Params_PlayAnimationName {
        FString AnimationName; // 0x0
        bool Loop; // 0x10
    }; // Size: 0x11
    Params_PlayAnimationName params{};
    params.AnimationName = (FString)AnimationName;
    params.Loop = (bool)Loop;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyAllKeys(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeys"));
    struct Params_CopyAllKeys {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
        int32_t frameId; // 0x8
    }; // Size: 0xc
    Params_CopyAllKeys params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::OffsetColors(int32_t animationId, int32_t frameId, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColors"));
    struct Params_OffsetColors {
        int32_t animationId; // 0x0
        int32_t frameId; // 0x4
        int32_t Red; // 0x8
        int32_t Green; // 0xc
        int32_t Blue; // 0x10
    }; // Size: 0x14
    Params_OffsetColors params{};
    params.animationId = (int32_t)animationId;
    params.frameId = (int32_t)frameId;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::PlayAnimationComposite(FString AnimationName, bool Loop) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationComposite"));
    struct Params_PlayAnimationComposite {
        FString AnimationName; // 0x0
        bool Loop; // 0x10
    }; // Size: 0x11
    Params_PlayAnimationComposite params{};
    params.AnimationName = (FString)AnimationName;
    params.Loop = (bool)Loop;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::MultiplyIntensityColorName(FString AnimationName, int32_t frameId, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorName"));
    struct Params_MultiplyIntensityColorName {
        FString AnimationName; // 0x0
        int32_t frameId; // 0x10
        FLinearColor colorParam; // 0x14
    }; // Size: 0x24
    Params_MultiplyIntensityColorName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameId = (int32_t)frameId;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::PlayAnimation(FString AnimationName, bool Loop) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimation"));
    struct Params_PlayAnimation {
        FString AnimationName; // 0x0
        bool Loop; // 0x10
    }; // Size: 0x11
    Params_PlayAnimation params{};
    params.AnimationName = (FString)AnimationName;
    params.Loop = (bool)Loop;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillThresholdColorsAllFramesRGBName(FString AnimationName, int32_t Threshold, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesRGBName"));
    struct Params_FillThresholdColorsAllFramesRGBName {
        FString AnimationName; // 0x0
        int32_t Threshold; // 0x10
        int32_t Red; // 0x14
        int32_t Green; // 0x18
        int32_t Blue; // 0x1c
    }; // Size: 0x20
    Params_FillThresholdColorsAllFramesRGBName params{};
    params.AnimationName = (FString)AnimationName;
    params.Threshold = (int32_t)Threshold;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::OverrideFrameDurationName(FString AnimationName, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OverrideFrameDurationName"));
    struct Params_OverrideFrameDurationName {
        FString AnimationName; // 0x0
        float Duration; // 0x10
    }; // Size: 0x14
    Params_OverrideFrameDurationName params{};
    params.AnimationName = (FString)AnimationName;
    params.Duration = (float)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::OpenAnimationFromMemory(TArray<uint8_t>& Data, FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OpenAnimationFromMemory"));
    struct Params_OpenAnimationFromMemory {
        TArray<uint8_t> Data; // 0x0
        FString AnimationName; // 0x10
    }; // Size: 0x20
    Params_OpenAnimationFromMemory params{};
    params.Data = (TArray<uint8_t>)Data;
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
}
void UChromaSDKPluginBPLibrary::CopyZeroTargetAllKeysAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyZeroTargetAllKeysAllFrames"));
    struct Params_CopyZeroTargetAllKeysAllFrames {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
    }; // Size: 0x8
    Params_CopyZeroTargetAllKeysAllFrames params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::OffsetNonZeroColorsAllFramesName(FString AnimationName, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsAllFramesName"));
    struct Params_OffsetNonZeroColorsAllFramesName {
        FString AnimationName; // 0x0
        int32_t Red; // 0x10
        int32_t Green; // 0x14
        int32_t Blue; // 0x18
    }; // Size: 0x1c
    Params_OffsetNonZeroColorsAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::OffsetNonZeroColorsAllFrames(int32_t animationId, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsAllFrames"));
    struct Params_OffsetNonZeroColorsAllFrames {
        int32_t animationId; // 0x0
        int32_t Red; // 0x4
        int32_t Green; // 0x8
        int32_t Blue; // 0xc
    }; // Size: 0x10
    Params_OffsetNonZeroColorsAllFrames params{};
    params.animationId = (int32_t)animationId;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::OffsetNonZeroColors(int32_t animationId, int32_t frameId, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColors"));
    struct Params_OffsetNonZeroColors {
        int32_t animationId; // 0x0
        int32_t frameId; // 0x4
        int32_t Red; // 0x8
        int32_t Green; // 0xc
        int32_t Blue; // 0x10
    }; // Size: 0x14
    Params_OffsetNonZeroColors params{};
    params.animationId = (int32_t)animationId;
    params.frameId = (int32_t)frameId;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::MultiplyTargetColorLerpAllFramesName(FString AnimationName, FLinearColor& colorParam1, FLinearColor& colorParam2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyTargetColorLerpAllFramesName"));
    struct Params_MultiplyTargetColorLerpAllFramesName {
        FString AnimationName; // 0x0
        FLinearColor colorParam1; // 0x10
        FLinearColor colorParam2; // 0x20
    }; // Size: 0x30
    Params_MultiplyTargetColorLerpAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.colorParam1 = (FLinearColor)colorParam1;
    params.colorParam2 = (FLinearColor)colorParam2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam1 = params.colorParam1;
    colorParam2 = params.colorParam2;
}
void UChromaSDKPluginBPLibrary::MultiplyTargetColorLerpAllFrames(int32_t animationId, FLinearColor& colorParam1, FLinearColor& colorParam2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyTargetColorLerpAllFrames"));
    struct Params_MultiplyTargetColorLerpAllFrames {
        int32_t animationId; // 0x0
        FLinearColor colorParam1; // 0x4
        FLinearColor colorParam2; // 0x14
    }; // Size: 0x24
    Params_MultiplyTargetColorLerpAllFrames params{};
    params.animationId = (int32_t)animationId;
    params.colorParam1 = (FLinearColor)colorParam1;
    params.colorParam2 = (FLinearColor)colorParam2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam1 = params.colorParam1;
    colorParam2 = params.colorParam2;
}
void UChromaSDKPluginBPLibrary::MultiplyNonZeroTargetColorLerpAllFramesName(FString AnimationName, FLinearColor& colorParam1, FLinearColor& colorParam2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyNonZeroTargetColorLerpAllFramesName"));
    struct Params_MultiplyNonZeroTargetColorLerpAllFramesName {
        FString AnimationName; // 0x0
        FLinearColor colorParam1; // 0x10
        FLinearColor colorParam2; // 0x20
    }; // Size: 0x30
    Params_MultiplyNonZeroTargetColorLerpAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.colorParam1 = (FLinearColor)colorParam1;
    params.colorParam2 = (FLinearColor)colorParam2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam1 = params.colorParam1;
    colorParam2 = params.colorParam2;
}
void UChromaSDKPluginBPLibrary::FillZeroColorRGB(int32_t animationId, int32_t frameId, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorRGB"));
    struct Params_FillZeroColorRGB {
        int32_t animationId; // 0x0
        int32_t frameId; // 0x4
        int32_t Red; // 0x8
        int32_t Green; // 0xc
        int32_t Blue; // 0x10
    }; // Size: 0x14
    Params_FillZeroColorRGB params{};
    params.animationId = (int32_t)animationId;
    params.frameId = (int32_t)frameId;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::MultiplyNonZeroTargetColorLerpAllFrames(int32_t animationId, FLinearColor& colorParam1, FLinearColor& colorParam2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyNonZeroTargetColorLerpAllFrames"));
    struct Params_MultiplyNonZeroTargetColorLerpAllFrames {
        int32_t animationId; // 0x0
        FLinearColor colorParam1; // 0x4
        FLinearColor colorParam2; // 0x14
    }; // Size: 0x24
    Params_MultiplyNonZeroTargetColorLerpAllFrames params{};
    params.animationId = (int32_t)animationId;
    params.colorParam1 = (FLinearColor)colorParam1;
    params.colorParam2 = (FLinearColor)colorParam2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam1 = params.colorParam1;
    colorParam2 = params.colorParam2;
}
void UChromaSDKPluginBPLibrary::MultiplyIntensityRGBName(FString AnimationName, int32_t frameId, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityRGBName"));
    struct Params_MultiplyIntensityRGBName {
        FString AnimationName; // 0x0
        int32_t frameId; // 0x10
        int32_t Red; // 0x14
        int32_t Green; // 0x18
        int32_t Blue; // 0x1c
    }; // Size: 0x20
    Params_MultiplyIntensityRGBName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameId = (int32_t)frameId;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::InsertDelay(int32_t animationId, int32_t frameId, int32_t Delay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertDelay"));
    struct Params_InsertDelay {
        int32_t animationId; // 0x0
        int32_t frameId; // 0x4
        int32_t Delay; // 0x8
    }; // Size: 0xc
    Params_InsertDelay params{};
    params.animationId = (int32_t)animationId;
    params.frameId = (int32_t)frameId;
    params.Delay = (int32_t)Delay;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::MultiplyIntensityRGB(int32_t animationId, int32_t frameId, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityRGB"));
    struct Params_MultiplyIntensityRGB {
        int32_t animationId; // 0x0
        int32_t frameId; // 0x4
        int32_t Red; // 0x8
        int32_t Green; // 0xc
        int32_t Blue; // 0x10
    }; // Size: 0x14
    Params_MultiplyIntensityRGB params{};
    params.animationId = (int32_t)animationId;
    params.frameId = (int32_t)frameId;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyAllKeysAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysAllFrames"));
    struct Params_CopyAllKeysAllFrames {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
    }; // Size: 0x8
    Params_CopyAllKeysAllFrames params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::MultiplyIntensityName(FString AnimationName, int32_t frameId, float Intensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityName"));
    struct Params_MultiplyIntensityName {
        FString AnimationName; // 0x0
        int32_t frameId; // 0x10
        float Intensity; // 0x14
    }; // Size: 0x18
    Params_MultiplyIntensityName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameId = (int32_t)frameId;
    params.Intensity = (float)Intensity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::MultiplyIntensityColorAllFramesName(FString AnimationName, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorAllFramesName"));
    struct Params_MultiplyIntensityColorAllFramesName {
        FString AnimationName; // 0x0
        FLinearColor colorParam; // 0x10
    }; // Size: 0x20
    Params_MultiplyIntensityColorAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::MultiplyIntensityColor(int32_t animationId, int32_t frameId, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColor"));
    struct Params_MultiplyIntensityColor {
        int32_t animationId; // 0x0
        int32_t frameId; // 0x4
        FLinearColor colorParam; // 0x8
    }; // Size: 0x18
    Params_MultiplyIntensityColor params{};
    params.animationId = (int32_t)animationId;
    params.frameId = (int32_t)frameId;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::MultiplyIntensityAllFramesRGBName(FString AnimationName, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesRGBName"));
    struct Params_MultiplyIntensityAllFramesRGBName {
        FString AnimationName; // 0x0
        int32_t Red; // 0x10
        int32_t Green; // 0x14
        int32_t Blue; // 0x18
    }; // Size: 0x1c
    Params_MultiplyIntensityAllFramesRGBName params{};
    params.AnimationName = (FString)AnimationName;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::MultiplyIntensityAllFramesRGB(int32_t animationId, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesRGB"));
    struct Params_MultiplyIntensityAllFramesRGB {
        int32_t animationId; // 0x0
        int32_t Red; // 0x4
        int32_t Green; // 0x8
        int32_t Blue; // 0xc
    }; // Size: 0x10
    Params_MultiplyIntensityAllFramesRGB params{};
    params.animationId = (int32_t)animationId;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FadeEndFrames(int32_t animationId, int32_t fade) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeEndFrames"));
    struct Params_FadeEndFrames {
        int32_t animationId; // 0x0
        int32_t fade; // 0x4
    }; // Size: 0x8
    Params_FadeEndFrames params{};
    params.animationId = (int32_t)animationId;
    params.fade = (int32_t)fade;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UChromaSDKPluginBPLibrary::GetPlayingAnimationId(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationId"));
    struct Params_GetPlayingAnimationId {
        int32_t Index; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetPlayingAnimationId params{};
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::MultiplyIntensityAllFramesName(FString AnimationName, float Intensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesName"));
    struct Params_MultiplyIntensityAllFramesName {
        FString AnimationName; // 0x0
        float Intensity; // 0x10
    }; // Size: 0x14
    Params_MultiplyIntensityAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.Intensity = (float)Intensity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UChromaSDKPluginBPLibrary::GetMaxRow(EChromaSDKDevice2DEnum::Type device) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxRow"));
    struct Params_GetMaxRow {
        EChromaSDKDevice2DEnum::Type device; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetMaxRow params{};
    params.device = (EChromaSDKDevice2DEnum::Type)device;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::MultiplyColorLerpAllFramesName(FString AnimationName, FLinearColor& colorParam1, FLinearColor& colorParam2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyColorLerpAllFramesName"));
    struct Params_MultiplyColorLerpAllFramesName {
        FString AnimationName; // 0x0
        FLinearColor colorParam1; // 0x10
        FLinearColor colorParam2; // 0x20
    }; // Size: 0x30
    Params_MultiplyColorLerpAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.colorParam1 = (FLinearColor)colorParam1;
    params.colorParam2 = (FLinearColor)colorParam2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam1 = params.colorParam1;
    colorParam2 = params.colorParam2;
}
void UChromaSDKPluginBPLibrary::AddNonZeroTargetAllKeysAllFramesOffsetName(FString sourceAnimationName, FString targetAnimationName, int32_t Offset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesOffsetName"));
    struct Params_AddNonZeroTargetAllKeysAllFramesOffsetName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
        int32_t Offset; // 0x20
    }; // Size: 0x24
    Params_AddNonZeroTargetAllKeysAllFramesOffsetName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    params.Offset = (int32_t)Offset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyNonZeroKeysColor(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t FrameIndex, TArray_EChromaSDKKeyboardKey::Type>& Keys) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColor"));
    struct Params_CopyNonZeroKeysColor {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
        int32_t FrameIndex; // 0x8
        char pad_c[0x4];
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x10
    }; // Size: 0x20
    Params_CopyNonZeroKeysColor params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
}
TArray<FChromaSDKColors> UChromaSDKPluginBPLibrary::CreateRandomColors2D(EChromaSDKDevice2DEnum::Type device) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors2D"));
    struct Params_CreateRandomColors2D {
        EChromaSDKDevice2DEnum::Type device; // 0x0
        char pad_1[0x7];
        TArray<FChromaSDKColors> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_CreateRandomColors2D params{};
    params.device = (EChromaSDKDevice2DEnum::Type)device;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FChromaSDKColors>)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::FadeStartFramesName(FString AnimationName, int32_t fade) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeStartFramesName"));
    struct Params_FadeStartFramesName {
        FString AnimationName; // 0x0
        int32_t fade; // 0x10
    }; // Size: 0x14
    Params_FadeStartFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.fade = (int32_t)fade;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillRandomColorsBlackAndWhite(int32_t animationId, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhite"));
    struct Params_FillRandomColorsBlackAndWhite {
        int32_t animationId; // 0x0
        int32_t frameId; // 0x4
    }; // Size: 0x8
    Params_FillRandomColorsBlackAndWhite params{};
    params.animationId = (int32_t)animationId;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::MultiplyColorLerpAllFrames(int32_t animationId, FLinearColor& colorParam1, FLinearColor& colorParam2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyColorLerpAllFrames"));
    struct Params_MultiplyColorLerpAllFrames {
        int32_t animationId; // 0x0
        FLinearColor colorParam1; // 0x4
        FLinearColor colorParam2; // 0x14
    }; // Size: 0x24
    Params_MultiplyColorLerpAllFrames params{};
    params.animationId = (int32_t)animationId;
    params.colorParam1 = (FLinearColor)colorParam1;
    params.colorParam2 = (FLinearColor)colorParam2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam1 = params.colorParam1;
    colorParam2 = params.colorParam2;
}
void UChromaSDKPluginBPLibrary::MakeBlankFramesRGBName(FString AnimationName, int32_t frameCount, float Duration, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRGBName"));
    struct Params_MakeBlankFramesRGBName {
        FString AnimationName; // 0x0
        int32_t frameCount; // 0x10
        float Duration; // 0x14
        int32_t Red; // 0x18
        int32_t Green; // 0x1c
        int32_t Blue; // 0x20
    }; // Size: 0x24
    Params_MakeBlankFramesRGBName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameCount = (int32_t)frameCount;
    params.Duration = (float)Duration;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::MakeBlankFramesRGB(int32_t animationId, int32_t frameCount, float Duration, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRGB"));
    struct Params_MakeBlankFramesRGB {
        int32_t animationId; // 0x0
        int32_t frameCount; // 0x4
        float Duration; // 0x8
        int32_t Red; // 0xc
        int32_t Green; // 0x10
        int32_t Blue; // 0x14
    }; // Size: 0x18
    Params_MakeBlankFramesRGB params{};
    params.animationId = (int32_t)animationId;
    params.frameCount = (int32_t)frameCount;
    params.Duration = (float)Duration;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillThresholdColorsRGB(int32_t animationId, int32_t frameId, int32_t Threshold, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsRGB"));
    struct Params_FillThresholdColorsRGB {
        int32_t animationId; // 0x0
        int32_t frameId; // 0x4
        int32_t Threshold; // 0x8
        int32_t Red; // 0xc
        int32_t Green; // 0x10
        int32_t Blue; // 0x14
    }; // Size: 0x18
    Params_FillThresholdColorsRGB params{};
    params.animationId = (int32_t)animationId;
    params.frameId = (int32_t)frameId;
    params.Threshold = (int32_t)Threshold;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::MakeBlankFramesRandomBlackAndWhiteName(FString AnimationName, int32_t frameCount, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomBlackAndWhiteName"));
    struct Params_MakeBlankFramesRandomBlackAndWhiteName {
        FString AnimationName; // 0x0
        int32_t frameCount; // 0x10
        float Duration; // 0x14
    }; // Size: 0x18
    Params_MakeBlankFramesRandomBlackAndWhiteName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameCount = (int32_t)frameCount;
    params.Duration = (float)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::MakeBlankFramesRandom(int32_t animationId, int32_t frameCount, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandom"));
    struct Params_MakeBlankFramesRandom {
        int32_t animationId; // 0x0
        int32_t frameCount; // 0x4
        float Duration; // 0x8
    }; // Size: 0xc
    Params_MakeBlankFramesRandom params{};
    params.animationId = (int32_t)animationId;
    params.frameCount = (int32_t)frameCount;
    params.Duration = (float)Duration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::MakeBlankFramesName(FString AnimationName, int32_t frameCount, float Duration, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesName"));
    struct Params_MakeBlankFramesName {
        FString AnimationName; // 0x0
        int32_t frameCount; // 0x10
        float Duration; // 0x14
        FLinearColor colorParam; // 0x18
    }; // Size: 0x28
    Params_MakeBlankFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameCount = (int32_t)frameCount;
    params.Duration = (float)Duration;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysAllFramesOffsetName(FString sourceAnimationName, FString targetAnimationName, int32_t Offset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesOffsetName"));
    struct Params_CopyNonZeroAllKeysAllFramesOffsetName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
        int32_t Offset; // 0x20
    }; // Size: 0x24
    Params_CopyNonZeroAllKeysAllFramesOffsetName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    params.Offset = (int32_t)Offset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::MakeBlankFrames(int32_t animationId, int32_t frameCount, float Duration, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFrames"));
    struct Params_MakeBlankFrames {
        int32_t animationId; // 0x0
        int32_t frameCount; // 0x4
        float Duration; // 0x8
        FLinearColor colorParam; // 0xc
    }; // Size: 0x1c
    Params_MakeBlankFrames params{};
    params.animationId = (int32_t)animationId;
    params.frameCount = (int32_t)frameCount;
    params.Duration = (float)Duration;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::LoadAnimationName(FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimationName"));
    struct Params_LoadAnimationName {
        FString AnimationName; // 0x0
    }; // Size: 0x10
    Params_LoadAnimationName params{};
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::AppendAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AppendAllFrames"));
    struct Params_AppendAllFrames {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
    }; // Size: 0x8
    Params_AppendAllFrames params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysOffset(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t frameId, int32_t Offset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysOffset"));
    struct Params_CopyNonZeroAllKeysOffset {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
        int32_t frameId; // 0x8
        int32_t Offset; // 0xc
    }; // Size: 0x10
    Params_CopyNonZeroAllKeysOffset params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    params.frameId = (int32_t)frameId;
    params.Offset = (int32_t)Offset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::LoadAnimation(int32_t animationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimation"));
    struct Params_LoadAnimation {
        int32_t animationId; // 0x0
    }; // Size: 0x4
    Params_LoadAnimation params{};
    params.animationId = (int32_t)animationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillZeroColorAllFrames(int32_t animationId, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFrames"));
    struct Params_FillZeroColorAllFrames {
        int32_t animationId; // 0x0
        FLinearColor colorParam; // 0x4
    }; // Size: 0x14
    Params_FillZeroColorAllFrames params{};
    params.animationId = (int32_t)animationId;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::FillZeroColorRGBName(FString AnimationName, int32_t frameId, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorRGBName"));
    struct Params_FillZeroColorRGBName {
        FString AnimationName; // 0x0
        int32_t frameId; // 0x10
        int32_t Red; // 0x14
        int32_t Green; // 0x18
        int32_t Blue; // 0x1c
    }; // Size: 0x20
    Params_FillZeroColorRGBName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameId = (int32_t)frameId;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FLinearColor UChromaSDKPluginBPLibrary::LerpColor(FLinearColor colorParam1, FLinearColor colorParam2, float T) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LerpColor"));
    struct Params_LerpColor {
        FLinearColor colorParam1; // 0x0
        FLinearColor colorParam2; // 0x10
        float T; // 0x20
        FLinearColor ReturnValue; // 0x24
    }; // Size: 0x34
    Params_LerpColor params{};
    params.colorParam1 = (FLinearColor)colorParam1;
    params.colorParam2 = (FLinearColor)colorParam2;
    params.T = (float)T;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
float UChromaSDKPluginBPLibrary::Lerp(float Start, float End, float amt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.Lerp"));
    struct Params_Lerp {
        float Start; // 0x0
        float End; // 0x4
        float amt; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_Lerp params{};
    params.Start = (float)Start;
    params.End = (float)End;
    params.amt = (float)amt;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UChromaSDKPluginBPLibrary::ChromaSDKSetEffect(FChromaSDKGuid& EffectId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKSetEffect"));
    struct Params_ChromaSDKSetEffect {
        FChromaSDKGuid EffectId; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_ChromaSDKSetEffect params{};
    params.EffectId = (FChromaSDKGuid)EffectId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    EffectId = params.EffectId;
    return (int32_t)params.ReturnValue;
}
bool UChromaSDKPluginBPLibrary::IsPlatformWindows() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsPlatformWindows"));
    struct Params_IsPlatformWindows {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlatformWindows params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UChromaSDKPluginBPLibrary::IsInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsInitialized"));
    struct Params_IsInitialized {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInitialized params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UChromaSDKPluginBPLibrary::IsAnimationTypePlaying(EChromaSDKDeviceEnum::Type device) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationTypePlaying"));
    struct Params_IsAnimationTypePlaying {
        EChromaSDKDeviceEnum::Type device; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsAnimationTypePlaying params{};
    params.device = (EChromaSDKDeviceEnum::Type)device;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FLinearColor UChromaSDKPluginBPLibrary::GetKeyColor(int32_t animationId, int32_t FrameIndex, EChromaSDKKeyboardKey::Type Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColor"));
    struct Params_GetKeyColor {
        int32_t animationId; // 0x0
        int32_t FrameIndex; // 0x4
        EChromaSDKKeyboardKey::Type Key; // 0x8
        char pad_9[0x3];
        FLinearColor ReturnValue; // 0xc
    }; // Size: 0x1c
    Params_GetKeyColor params{};
    params.animationId = (int32_t)animationId;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Key = (EChromaSDKKeyboardKey::Type)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
bool UChromaSDKPluginBPLibrary::IsAnimationPlaying(FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationPlaying"));
    struct Params_IsAnimationPlaying {
        FString AnimationName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsAnimationPlaying params{};
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::FillThresholdColorsAllFrames(int32_t animationId, int32_t Threshold, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFrames"));
    struct Params_FillThresholdColorsAllFrames {
        int32_t animationId; // 0x0
        int32_t Threshold; // 0x4
        FLinearColor colorParam; // 0x8
    }; // Size: 0x18
    Params_FillThresholdColorsAllFrames params{};
    params.animationId = (int32_t)animationId;
    params.Threshold = (int32_t)Threshold;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::InvertColorsAllFramesName(FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InvertColorsAllFramesName"));
    struct Params_InvertColorsAllFramesName {
        FString AnimationName; // 0x0
    }; // Size: 0x10
    Params_InvertColorsAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::InvertColorsAllFrames(int32_t animationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InvertColorsAllFrames"));
    struct Params_InvertColorsAllFrames {
        int32_t animationId; // 0x0
    }; // Size: 0x4
    Params_InvertColorsAllFrames params{};
    params.animationId = (int32_t)animationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::InsertFrameName(FString AnimationName, int32_t sourceFrame, int32_t targetFrame) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertFrameName"));
    struct Params_InsertFrameName {
        FString AnimationName; // 0x0
        int32_t sourceFrame; // 0x10
        int32_t targetFrame; // 0x14
    }; // Size: 0x18
    Params_InsertFrameName params{};
    params.AnimationName = (FString)AnimationName;
    params.sourceFrame = (int32_t)sourceFrame;
    params.targetFrame = (int32_t)targetFrame;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::InsertFrame(int32_t animationId, int32_t sourceFrame, int32_t targetFrame) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertFrame"));
    struct Params_InsertFrame {
        int32_t animationId; // 0x0
        int32_t sourceFrame; // 0x4
        int32_t targetFrame; // 0x8
    }; // Size: 0xc
    Params_InsertFrame params{};
    params.animationId = (int32_t)animationId;
    params.sourceFrame = (int32_t)sourceFrame;
    params.targetFrame = (int32_t)targetFrame;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::InsertDelayName(FString AnimationName, int32_t frameId, int32_t Delay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertDelayName"));
    struct Params_InsertDelayName {
        FString AnimationName; // 0x0
        int32_t frameId; // 0x10
        int32_t Delay; // 0x14
    }; // Size: 0x18
    Params_InsertDelayName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameId = (int32_t)frameId;
    params.Delay = (int32_t)Delay;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FLinearColor UChromaSDKPluginBPLibrary::GetRGB(int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetRGB"));
    struct Params_GetRGB {
        int32_t Red; // 0x0
        int32_t Green; // 0x4
        int32_t Blue; // 0x8
        FLinearColor ReturnValue; // 0xc
    }; // Size: 0x1c
    Params_GetRGB params{};
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
int32_t UChromaSDKPluginBPLibrary::GetPlayingAnimationCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationCount"));
    struct Params_GetPlayingAnimationCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlayingAnimationCount params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FLinearColor UChromaSDKPluginBPLibrary::GetKeyColorName(FString AnimationName, int32_t FrameIndex, EChromaSDKKeyboardKey::Type Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColorName"));
    struct Params_GetKeyColorName {
        FString AnimationName; // 0x0
        int32_t FrameIndex; // 0x10
        EChromaSDKKeyboardKey::Type Key; // 0x14
        char pad_15[0x3];
        FLinearColor ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetKeyColorName params{};
    params.AnimationName = (FString)AnimationName;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Key = (EChromaSDKKeyboardKey::Type)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FLinearColor UChromaSDKPluginBPLibrary::GetMouseLedColor(EChromaSDKMouseLed::Type led, TArray<FChromaSDKColors>& Colors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMouseLedColor"));
    struct Params_GetMouseLedColor {
        EChromaSDKMouseLed::Type led; // 0x0
        char pad_1[0x7];
        TArray<FChromaSDKColors> Colors; // 0x8
        FLinearColor ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetMouseLedColor params{};
    params.led = (EChromaSDKMouseLed::Type)led;
    params.Colors = (TArray<FChromaSDKColors>)Colors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Colors = params.Colors;
    return (FLinearColor)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::FillNonZeroColorAllFramesRGB(int32_t animationId, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesRGB"));
    struct Params_FillNonZeroColorAllFramesRGB {
        int32_t animationId; // 0x0
        int32_t Red; // 0x4
        int32_t Green; // 0x8
        int32_t Blue; // 0xc
    }; // Size: 0x10
    Params_FillNonZeroColorAllFramesRGB params{};
    params.animationId = (int32_t)animationId;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UChromaSDKPluginBPLibrary::GetMaxLeds(EChromaSDKDevice1DEnum::Type device) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxLeds"));
    struct Params_GetMaxLeds {
        EChromaSDKDevice1DEnum::Type device; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetMaxLeds params{};
    params.device = (EChromaSDKDevice1DEnum::Type)device;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UChromaSDKPluginBPLibrary::GetMaxColumn(EChromaSDKDevice2DEnum::Type device) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxColumn"));
    struct Params_GetMaxColumn {
        EChromaSDKDevice2DEnum::Type device; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetMaxColumn params{};
    params.device = (EChromaSDKDevice2DEnum::Type)device;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UChromaSDKPluginBPLibrary::GetKeyboardRzKey(EChromaSDKKeyboardKey::Type Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyboardRzKey"));
    struct Params_GetKeyboardRzKey {
        EChromaSDKKeyboardKey::Type Key; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetKeyboardRzKey params{};
    params.Key = (EChromaSDKKeyboardKey::Type)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::FillThresholdColorsRGBName(FString AnimationName, int32_t frameId, int32_t Threshold, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsRGBName"));
    struct Params_FillThresholdColorsRGBName {
        FString AnimationName; // 0x0
        int32_t frameId; // 0x10
        int32_t Threshold; // 0x14
        int32_t Red; // 0x18
        int32_t Green; // 0x1c
        int32_t Blue; // 0x20
    }; // Size: 0x24
    Params_FillThresholdColorsRGBName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameId = (int32_t)frameId;
    params.Threshold = (int32_t)Threshold;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
EChromaSDKKeyboardKey::Type UChromaSDKPluginBPLibrary::GetKeyboardRazerKey(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyboardRazerKey"));
    struct Params_GetKeyboardRazerKey {
        FKey Key; // 0x0
        EChromaSDKKeyboardKey::Type ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetKeyboardRazerKey params{};
    params.Key = (FKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EChromaSDKKeyboardKey::Type)params.ReturnValue;
}
FLinearColor UChromaSDKPluginBPLibrary::GetKeyboardKeyColor(EChromaSDKKeyboardKey::Type Key, TArray<FChromaSDKColors>& Colors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyboardKeyColor"));
    struct Params_GetKeyboardKeyColor {
        EChromaSDKKeyboardKey::Type Key; // 0x0
        char pad_1[0x7];
        TArray<FChromaSDKColors> Colors; // 0x8
        FLinearColor ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetKeyboardKeyColor params{};
    params.Key = (EChromaSDKKeyboardKey::Type)Key;
    params.Colors = (TArray<FChromaSDKColors>)Colors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Colors = params.Colors;
    return (FLinearColor)params.ReturnValue;
}
int32_t UChromaSDKPluginBPLibrary::GetFrameCountName(FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCountName"));
    struct Params_GetFrameCountName {
        FString AnimationName; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetFrameCountName params{};
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UChromaSDKPluginBPLibrary::GetFrameCount(int32_t animationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCount"));
    struct Params_GetFrameCount {
        int32_t animationId; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetFrameCount params{};
    params.animationId = (int32_t)animationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UChromaSDKPluginBPLibrary::GetCurrentFrameName(FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetCurrentFrameName"));
    struct Params_GetCurrentFrameName {
        FString AnimationName; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetCurrentFrameName params{};
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UChromaSDKPluginBPLibrary::GetCurrentFrame(int32_t animationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetCurrentFrame"));
    struct Params_GetCurrentFrame {
        int32_t animationId; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetCurrentFrame params{};
    params.animationId = (int32_t)animationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UChromaSDKPluginBPLibrary::GetAnimation(FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimation"));
    struct Params_GetAnimation {
        FString AnimationName; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetAnimation params{};
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UChromaSDKPluginBPLibrary::GetBGRInt(int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetBGRInt"));
    struct Params_GetBGRInt {
        int32_t Red; // 0x0
        int32_t Green; // 0x4
        int32_t Blue; // 0x8
        int32_t ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetBGRInt params{};
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::FillColorName(FString AnimationName, int32_t frameId, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorName"));
    struct Params_FillColorName {
        FString AnimationName; // 0x0
        int32_t frameId; // 0x10
        FLinearColor colorParam; // 0x14
    }; // Size: 0x24
    Params_FillColorName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameId = (int32_t)frameId;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::FillZeroColorAllFramesName(FString AnimationName, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesName"));
    struct Params_FillZeroColorAllFramesName {
        FString AnimationName; // 0x0
        FLinearColor colorParam; // 0x10
    }; // Size: 0x20
    Params_FillZeroColorAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
FString UChromaSDKPluginBPLibrary::GetAnimationName(int32_t animationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationName"));
    struct Params_GetAnimationName {
        int32_t animationId; // 0x0
        char pad_4[0x4];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetAnimationName params{};
    params.animationId = (int32_t)animationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
int32_t UChromaSDKPluginBPLibrary::GetAnimationIdByIndex(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationIdByIndex"));
    struct Params_GetAnimationIdByIndex {
        int32_t Index; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetAnimationIdByIndex params{};
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UChromaSDKPluginBPLibrary::GetAnimationCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationCount"));
    struct Params_GetAnimationCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAnimationCount params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::FillZeroColorName(FString AnimationName, int32_t frameId, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorName"));
    struct Params_FillZeroColorName {
        FString AnimationName; // 0x0
        int32_t frameId; // 0x10
        FLinearColor colorParam; // 0x14
    }; // Size: 0x24
    Params_FillZeroColorName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameId = (int32_t)frameId;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::FillZeroColorAllFramesRGBName(FString AnimationName, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesRGBName"));
    struct Params_FillZeroColorAllFramesRGBName {
        FString AnimationName; // 0x0
        int32_t Red; // 0x10
        int32_t Green; // 0x14
        int32_t Blue; // 0x18
    }; // Size: 0x1c
    Params_FillZeroColorAllFramesRGBName params{};
    params.AnimationName = (FString)AnimationName;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
TArray<FLinearColor> UChromaSDKPluginBPLibrary::CreateRandomColors1D(EChromaSDKDevice1DEnum::Type device) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors1D"));
    struct Params_CreateRandomColors1D {
        EChromaSDKDevice1DEnum::Type device; // 0x0
        char pad_1[0x7];
        TArray<FLinearColor> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_CreateRandomColors1D params{};
    params.device = (EChromaSDKDevice1DEnum::Type)device;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FLinearColor>)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::FillZeroColorAllFramesRGB(int32_t animationId, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesRGB"));
    struct Params_FillZeroColorAllFramesRGB {
        int32_t animationId; // 0x0
        int32_t Red; // 0x4
        int32_t Green; // 0x8
        int32_t Blue; // 0xc
    }; // Size: 0x10
    Params_FillZeroColorAllFramesRGB params{};
    params.animationId = (int32_t)animationId;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillZeroColor(int32_t animationId, int32_t frameId, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColor"));
    struct Params_FillZeroColor {
        int32_t animationId; // 0x0
        int32_t frameId; // 0x4
        FLinearColor colorParam; // 0x8
    }; // Size: 0x18
    Params_FillZeroColor params{};
    params.animationId = (int32_t)animationId;
    params.frameId = (int32_t)frameId;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::FillThresholdRGBColorsAllFramesRGB(int32_t animationId, int32_t redThreshold, int32_t greenThreshold, int32_t blueThreshold, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdRGBColorsAllFramesRGB"));
    struct Params_FillThresholdRGBColorsAllFramesRGB {
        int32_t animationId; // 0x0
        int32_t redThreshold; // 0x4
        int32_t greenThreshold; // 0x8
        int32_t blueThreshold; // 0xc
        int32_t Red; // 0x10
        int32_t Green; // 0x14
        int32_t Blue; // 0x18
    }; // Size: 0x1c
    Params_FillThresholdRGBColorsAllFramesRGB params{};
    params.animationId = (int32_t)animationId;
    params.redThreshold = (int32_t)redThreshold;
    params.greenThreshold = (int32_t)greenThreshold;
    params.blueThreshold = (int32_t)blueThreshold;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillThresholdColorsMinMaxAllFramesRGBName(FString AnimationName, int32_t minThreshold, int32_t minRed, int32_t minGreen, int32_t minBlue, int32_t maxThreshold, int32_t maxRed, int32_t maxGreen, int32_t maxBlue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsMinMaxAllFramesRGBName"));
    struct Params_FillThresholdColorsMinMaxAllFramesRGBName {
        FString AnimationName; // 0x0
        int32_t minThreshold; // 0x10
        int32_t minRed; // 0x14
        int32_t minGreen; // 0x18
        int32_t minBlue; // 0x1c
        int32_t maxThreshold; // 0x20
        int32_t maxRed; // 0x24
        int32_t maxGreen; // 0x28
        int32_t maxBlue; // 0x2c
    }; // Size: 0x30
    Params_FillThresholdColorsMinMaxAllFramesRGBName params{};
    params.AnimationName = (FString)AnimationName;
    params.minThreshold = (int32_t)minThreshold;
    params.minRed = (int32_t)minRed;
    params.minGreen = (int32_t)minGreen;
    params.minBlue = (int32_t)minBlue;
    params.maxThreshold = (int32_t)maxThreshold;
    params.maxRed = (int32_t)maxRed;
    params.maxGreen = (int32_t)maxGreen;
    params.maxBlue = (int32_t)maxBlue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillColorRGBName(FString AnimationName, int32_t frameId, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorRGBName"));
    struct Params_FillColorRGBName {
        FString AnimationName; // 0x0
        int32_t frameId; // 0x10
        int32_t Red; // 0x14
        int32_t Green; // 0x18
        int32_t Blue; // 0x1c
    }; // Size: 0x20
    Params_FillColorRGBName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameId = (int32_t)frameId;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillThresholdColorsMinMaxAllFramesRGB(int32_t animationId, int32_t minThreshold, int32_t minRed, int32_t minGreen, int32_t minBlue, int32_t maxThreshold, int32_t maxRed, int32_t maxGreen, int32_t maxBlue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsMinMaxAllFramesRGB"));
    struct Params_FillThresholdColorsMinMaxAllFramesRGB {
        int32_t animationId; // 0x0
        int32_t minThreshold; // 0x4
        int32_t minRed; // 0x8
        int32_t minGreen; // 0xc
        int32_t minBlue; // 0x10
        int32_t maxThreshold; // 0x14
        int32_t maxRed; // 0x18
        int32_t maxGreen; // 0x1c
        int32_t maxBlue; // 0x20
    }; // Size: 0x24
    Params_FillThresholdColorsMinMaxAllFramesRGB params{};
    params.animationId = (int32_t)animationId;
    params.minThreshold = (int32_t)minThreshold;
    params.minRed = (int32_t)minRed;
    params.minGreen = (int32_t)minGreen;
    params.minBlue = (int32_t)minBlue;
    params.maxThreshold = (int32_t)maxThreshold;
    params.maxRed = (int32_t)maxRed;
    params.maxGreen = (int32_t)maxGreen;
    params.maxBlue = (int32_t)maxBlue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillThresholdColorsAllFramesRGB(int32_t animationId, int32_t Threshold, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesRGB"));
    struct Params_FillThresholdColorsAllFramesRGB {
        int32_t animationId; // 0x0
        int32_t Threshold; // 0x4
        int32_t Red; // 0x8
        int32_t Green; // 0xc
        int32_t Blue; // 0x10
    }; // Size: 0x14
    Params_FillThresholdColorsAllFramesRGB params{};
    params.animationId = (int32_t)animationId;
    params.Threshold = (int32_t)Threshold;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillThresholdColorsAllFramesName(FString AnimationName, int32_t Threshold, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesName"));
    struct Params_FillThresholdColorsAllFramesName {
        FString AnimationName; // 0x0
        int32_t Threshold; // 0x10
        FLinearColor colorParam; // 0x14
    }; // Size: 0x24
    Params_FillThresholdColorsAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.Threshold = (int32_t)Threshold;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::FillRandomColorsName(FString AnimationName, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsName"));
    struct Params_FillRandomColorsName {
        FString AnimationName; // 0x0
        int32_t frameId; // 0x10
    }; // Size: 0x14
    Params_FillRandomColorsName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillRandomColorsBlackAndWhiteName(FString AnimationName, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteName"));
    struct Params_FillRandomColorsBlackAndWhiteName {
        FString AnimationName; // 0x0
        int32_t frameId; // 0x10
    }; // Size: 0x14
    Params_FillRandomColorsBlackAndWhiteName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillRandomColorsBlackAndWhiteAllFramesName(FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteAllFramesName"));
    struct Params_FillRandomColorsBlackAndWhiteAllFramesName {
        FString AnimationName; // 0x0
    }; // Size: 0x10
    Params_FillRandomColorsBlackAndWhiteAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::DuplicateMirrorFrames(int32_t animationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateMirrorFrames"));
    struct Params_DuplicateMirrorFrames {
        int32_t animationId; // 0x0
    }; // Size: 0x4
    Params_DuplicateMirrorFrames params{};
    params.animationId = (int32_t)animationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillRandomColorsBlackAndWhiteAllFrames(int32_t animationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteAllFrames"));
    struct Params_FillRandomColorsBlackAndWhiteAllFrames {
        int32_t animationId; // 0x0
    }; // Size: 0x4
    Params_FillRandomColorsBlackAndWhiteAllFrames params{};
    params.animationId = (int32_t)animationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillRandomColorsAllFramesName(FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsAllFramesName"));
    struct Params_FillRandomColorsAllFramesName {
        FString AnimationName; // 0x0
    }; // Size: 0x10
    Params_FillRandomColorsAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillNonZeroColorRGB(int32_t animationId, int32_t frameId, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorRGB"));
    struct Params_FillNonZeroColorRGB {
        int32_t animationId; // 0x0
        int32_t frameId; // 0x4
        int32_t Red; // 0x8
        int32_t Green; // 0xc
        int32_t Blue; // 0x10
    }; // Size: 0x14
    Params_FillNonZeroColorRGB params{};
    params.animationId = (int32_t)animationId;
    params.frameId = (int32_t)frameId;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillNonZeroColorAllFramesRGBName(FString AnimationName, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesRGBName"));
    struct Params_FillNonZeroColorAllFramesRGBName {
        FString AnimationName; // 0x0
        int32_t Red; // 0x10
        int32_t Green; // 0x14
        int32_t Blue; // 0x18
    }; // Size: 0x1c
    Params_FillNonZeroColorAllFramesRGBName params{};
    params.AnimationName = (FString)AnimationName;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysAllFramesName(FString sourceAnimationName, FString targetAnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesName"));
    struct Params_CopyNonZeroAllKeysAllFramesName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
    }; // Size: 0x20
    Params_CopyNonZeroAllKeysAllFramesName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillNonZeroColorAllFramesName(FString AnimationName, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesName"));
    struct Params_FillNonZeroColorAllFramesName {
        FString AnimationName; // 0x0
        FLinearColor colorParam; // 0x10
    }; // Size: 0x20
    Params_FillNonZeroColorAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::AddNonZeroTargetAllKeysAllFramesName(FString sourceAnimationName, FString targetAnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesName"));
    struct Params_AddNonZeroTargetAllKeysAllFramesName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
    }; // Size: 0x20
    Params_AddNonZeroTargetAllKeysAllFramesName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyNonZeroTargetAllKeysAllFramesOffset(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t Offset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesOffset"));
    struct Params_CopyNonZeroTargetAllKeysAllFramesOffset {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
        int32_t Offset; // 0x8
    }; // Size: 0xc
    Params_CopyNonZeroTargetAllKeysAllFramesOffset params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    params.Offset = (int32_t)Offset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillNonZeroColorAllFrames(int32_t animationId, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFrames"));
    struct Params_FillNonZeroColorAllFrames {
        int32_t animationId; // 0x0
        FLinearColor colorParam; // 0x4
    }; // Size: 0x14
    Params_FillNonZeroColorAllFrames params{};
    params.animationId = (int32_t)animationId;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::FillNonZeroColor(int32_t animationId, int32_t frameId, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColor"));
    struct Params_FillNonZeroColor {
        int32_t animationId; // 0x0
        int32_t frameId; // 0x4
        FLinearColor colorParam; // 0x8
    }; // Size: 0x18
    Params_FillNonZeroColor params{};
    params.animationId = (int32_t)animationId;
    params.frameId = (int32_t)frameId;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::FillColorAllFramesRGB(int32_t animationId, int32_t Red, int32_t Green, int32_t Blue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesRGB"));
    struct Params_FillColorAllFramesRGB {
        int32_t animationId; // 0x0
        int32_t Red; // 0x4
        int32_t Green; // 0x8
        int32_t Blue; // 0xc
    }; // Size: 0x10
    Params_FillColorAllFramesRGB params{};
    params.animationId = (int32_t)animationId;
    params.Red = (int32_t)Red;
    params.Green = (int32_t)Green;
    params.Blue = (int32_t)Blue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FillColorAllFramesName(FString AnimationName, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesName"));
    struct Params_FillColorAllFramesName {
        FString AnimationName; // 0x0
        FLinearColor colorParam; // 0x10
    }; // Size: 0x20
    Params_FillColorAllFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
}
void UChromaSDKPluginBPLibrary::FadeStartFrames(int32_t animationId, int32_t fade) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeStartFrames"));
    struct Params_FadeStartFrames {
        int32_t animationId; // 0x0
        int32_t fade; // 0x4
    }; // Size: 0x8
    Params_FadeStartFrames params{};
    params.animationId = (int32_t)animationId;
    params.fade = (int32_t)fade;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::FadeEndFramesName(FString AnimationName, int32_t fade) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeEndFramesName"));
    struct Params_FadeEndFramesName {
        FString AnimationName; // 0x0
        int32_t fade; // 0x10
    }; // Size: 0x14
    Params_FadeEndFramesName params{};
    params.AnimationName = (FString)AnimationName;
    params.fade = (int32_t)fade;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::DuplicateMirrorFramesName(FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateMirrorFramesName"));
    struct Params_DuplicateMirrorFramesName {
        FString AnimationName; // 0x0
    }; // Size: 0x10
    Params_DuplicateMirrorFramesName params{};
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::DuplicateFramesName(FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFramesName"));
    struct Params_DuplicateFramesName {
        FString AnimationName; // 0x0
    }; // Size: 0x10
    Params_DuplicateFramesName params{};
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::DuplicateFrames(int32_t animationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFrames"));
    struct Params_DuplicateFrames {
        int32_t animationId; // 0x0
    }; // Size: 0x4
    Params_DuplicateFrames params{};
    params.animationId = (int32_t)animationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::DuplicateFirstFrameName(FString AnimationName, int32_t frameCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFirstFrameName"));
    struct Params_DuplicateFirstFrameName {
        FString AnimationName; // 0x0
        int32_t frameCount; // 0x10
    }; // Size: 0x14
    Params_DuplicateFirstFrameName params{};
    params.AnimationName = (FString)AnimationName;
    params.frameCount = (int32_t)frameCount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::DuplicateFirstFrame(int32_t animationId, int32_t frameCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFirstFrame"));
    struct Params_DuplicateFirstFrame {
        int32_t animationId; // 0x0
        int32_t frameCount; // 0x4
    }; // Size: 0x8
    Params_DuplicateFirstFrame params{};
    params.animationId = (int32_t)animationId;
    params.frameCount = (int32_t)frameCount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
TArray<FChromaSDKColors> UChromaSDKPluginBPLibrary::CreateRandomColorsBlackAndWhite2D(EChromaSDKDevice2DEnum::Type device) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColorsBlackAndWhite2D"));
    struct Params_CreateRandomColorsBlackAndWhite2D {
        EChromaSDKDevice2DEnum::Type device; // 0x0
        char pad_1[0x7];
        TArray<FChromaSDKColors> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_CreateRandomColorsBlackAndWhite2D params{};
    params.device = (EChromaSDKDevice2DEnum::Type)device;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FChromaSDKColors>)params.ReturnValue;
}
TArray<FLinearColor> UChromaSDKPluginBPLibrary::CreateRandomColorsBlackAndWhite1D(EChromaSDKDevice1DEnum::Type device) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColorsBlackAndWhite1D"));
    struct Params_CreateRandomColorsBlackAndWhite1D {
        EChromaSDKDevice1DEnum::Type device; // 0x0
        char pad_1[0x7];
        TArray<FLinearColor> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_CreateRandomColorsBlackAndWhite1D params{};
    params.device = (EChromaSDKDevice1DEnum::Type)device;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FLinearColor>)params.ReturnValue;
}
TArray<FChromaSDKColors> UChromaSDKPluginBPLibrary::CreateColors2D(EChromaSDKDevice2DEnum::Type device) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors2D"));
    struct Params_CreateColors2D {
        EChromaSDKDevice2DEnum::Type device; // 0x0
        char pad_1[0x7];
        TArray<FChromaSDKColors> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_CreateColors2D params{};
    params.device = (EChromaSDKDevice2DEnum::Type)device;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FChromaSDKColors>)params.ReturnValue;
}
TArray<FLinearColor> UChromaSDKPluginBPLibrary::CreateColors1D(EChromaSDKDevice1DEnum::Type device) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors1D"));
    struct Params_CreateColors1D {
        EChromaSDKDevice1DEnum::Type device; // 0x0
        char pad_1[0x7];
        TArray<FLinearColor> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_CreateColors1D params{};
    params.device = (EChromaSDKDevice1DEnum::Type)device;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FLinearColor>)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::CopyZeroTargetAllKeysAllFramesName(FString sourceAnimationName, FString targetAnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyZeroTargetAllKeysAllFramesName"));
    struct Params_CopyZeroTargetAllKeysAllFramesName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
    }; // Size: 0x20
    Params_CopyZeroTargetAllKeysAllFramesName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyNonZeroTargetAllKeysName(FString sourceAnimationName, FString targetAnimationName, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysName"));
    struct Params_CopyNonZeroTargetAllKeysName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
        int32_t frameId; // 0x20
    }; // Size: 0x24
    Params_CopyNonZeroTargetAllKeysName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyKeysColor(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t FrameIndex, TArray_EChromaSDKKeyboardKey::Type>& Keys) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColor"));
    struct Params_CopyKeysColor {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
        int32_t FrameIndex; // 0x8
        char pad_c[0x4];
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x10
    }; // Size: 0x20
    Params_CopyKeysColor params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
}
void UChromaSDKPluginBPLibrary::CopyNonZeroTargetAllKeysAllFramesOffsetName(FString sourceAnimationName, FString targetAnimationName, int32_t Offset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesOffsetName"));
    struct Params_CopyNonZeroTargetAllKeysAllFramesOffsetName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
        int32_t Offset; // 0x20
    }; // Size: 0x24
    Params_CopyNonZeroTargetAllKeysAllFramesOffsetName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    params.Offset = (int32_t)Offset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyNonZeroTargetAllKeysAllFramesName(FString sourceAnimationName, FString targetAnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesName"));
    struct Params_CopyNonZeroTargetAllKeysAllFramesName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
    }; // Size: 0x20
    Params_CopyNonZeroTargetAllKeysAllFramesName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyNonZeroTargetAllKeysAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFrames"));
    struct Params_CopyNonZeroTargetAllKeysAllFrames {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
    }; // Size: 0x8
    Params_CopyNonZeroTargetAllKeysAllFrames params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyAllKeysAllFramesName(FString sourceAnimationName, FString targetAnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysAllFramesName"));
    struct Params_CopyAllKeysAllFramesName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
    }; // Size: 0x20
    Params_CopyAllKeysAllFramesName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyNonZeroTargetAllKeys(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeys"));
    struct Params_CopyNonZeroTargetAllKeys {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
        int32_t frameId; // 0x8
    }; // Size: 0xc
    Params_CopyNonZeroTargetAllKeys params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyNonZeroKeysColorAllFramesName(FString sourceAnimationName, FString targetAnimationName, TArray_EChromaSDKKeyboardKey::Type>& Keys) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFramesName"));
    struct Params_CopyNonZeroKeysColorAllFramesName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x20
    }; // Size: 0x30
    Params_CopyNonZeroKeysColorAllFramesName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
}
void UChromaSDKPluginBPLibrary::CopyNonZeroKeysColorAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId, TArray_EChromaSDKKeyboardKey::Type>& Keys) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFrames"));
    struct Params_CopyNonZeroKeysColorAllFrames {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x8
    }; // Size: 0x18
    Params_CopyNonZeroKeysColorAllFrames params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
}
void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFrames"));
    struct Params_CopyNonZeroAllKeysAllFrames {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
    }; // Size: 0x8
    Params_CopyNonZeroAllKeysAllFrames params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyNonZeroKeyColorName(FString sourceAnimationName, FString targetAnimationName, int32_t FrameIndex, EChromaSDKKeyboardKey::Type Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColorName"));
    struct Params_CopyNonZeroKeyColorName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
        int32_t FrameIndex; // 0x20
        EChromaSDKKeyboardKey::Type Key; // 0x24
    }; // Size: 0x25
    Params_CopyNonZeroKeyColorName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Key = (EChromaSDKKeyboardKey::Type)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyNonZeroKeyColor(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t FrameIndex, EChromaSDKKeyboardKey::Type Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColor"));
    struct Params_CopyNonZeroKeyColor {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
        int32_t FrameIndex; // 0x8
        EChromaSDKKeyboardKey::Type Key; // 0xc
    }; // Size: 0xd
    Params_CopyNonZeroKeyColor params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Key = (EChromaSDKKeyboardKey::Type)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysOffsetName(FString sourceAnimationName, FString targetAnimationName, int32_t frameId, int32_t Offset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysOffsetName"));
    struct Params_CopyNonZeroAllKeysOffsetName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
        int32_t frameId; // 0x20
        int32_t Offset; // 0x24
    }; // Size: 0x28
    Params_CopyNonZeroAllKeysOffsetName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    params.frameId = (int32_t)frameId;
    params.Offset = (int32_t)Offset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyNonZeroAllKeysAllFramesOffset(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t Offset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesOffset"));
    struct Params_CopyNonZeroAllKeysAllFramesOffset {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
        int32_t Offset; // 0x8
    }; // Size: 0xc
    Params_CopyNonZeroAllKeysAllFramesOffset params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    params.Offset = (int32_t)Offset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::AddNonZeroAllKeys(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeys"));
    struct Params_AddNonZeroAllKeys {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
        int32_t frameId; // 0x8
    }; // Size: 0xc
    Params_AddNonZeroAllKeys params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CloseAnimationName(FString AnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimationName"));
    struct Params_CloseAnimationName {
        FString AnimationName; // 0x0
    }; // Size: 0x10
    Params_CloseAnimationName params{};
    params.AnimationName = (FString)AnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyKeysColorName(FString sourceAnimationName, FString targetAnimationName, int32_t FrameIndex, TArray_EChromaSDKKeyboardKey::Type>& Keys) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorName"));
    struct Params_CopyKeysColorName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
        int32_t FrameIndex; // 0x20
        char pad_24[0x4];
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x28
    }; // Size: 0x38
    Params_CopyKeysColorName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
}
void UChromaSDKPluginBPLibrary::CopyKeysColorAllFramesName(FString sourceAnimationName, FString targetAnimationName, TArray_EChromaSDKKeyboardKey::Type>& Keys) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFramesName"));
    struct Params_CopyKeysColorAllFramesName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x20
    }; // Size: 0x30
    Params_CopyKeysColorAllFramesName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
}
void UChromaSDKPluginBPLibrary::CopyKeysColorAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId, TArray_EChromaSDKKeyboardKey::Type>& Keys) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFrames"));
    struct Params_CopyKeysColorAllFrames {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
        TArray_EChromaSDKKeyboardKey::Type> Keys; // 0x8
    }; // Size: 0x18
    Params_CopyKeysColorAllFrames params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    params.Keys = (TArray_EChromaSDKKeyboardKey::Type>)Keys;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Keys = params.Keys;
}
void UChromaSDKPluginBPLibrary::CopyKeyColorName(FString sourceAnimationName, FString targetAnimationName, int32_t FrameIndex, EChromaSDKKeyboardKey::Type Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColorName"));
    struct Params_CopyKeyColorName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
        int32_t FrameIndex; // 0x20
        EChromaSDKKeyboardKey::Type Key; // 0x24
    }; // Size: 0x25
    Params_CopyKeyColorName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Key = (EChromaSDKKeyboardKey::Type)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyKeyColor(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t FrameIndex, EChromaSDKKeyboardKey::Type Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColor"));
    struct Params_CopyKeyColor {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
        int32_t FrameIndex; // 0x8
        EChromaSDKKeyboardKey::Type Key; // 0xc
    }; // Size: 0xd
    Params_CopyKeyColor params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    params.FrameIndex = (int32_t)FrameIndex;
    params.Key = (EChromaSDKKeyboardKey::Type)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyAnimation(int32_t sourceAnimationId, FString targetAnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAnimation"));
    struct Params_CopyAnimation {
        int32_t sourceAnimationId; // 0x0
        char pad_4[0x4];
        FString targetAnimationName; // 0x8
    }; // Size: 0x18
    Params_CopyAnimation params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationName = (FString)targetAnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyAnimationName(FString sourceAnimationName, FString targetAnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAnimationName"));
    struct Params_CopyAnimationName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
    }; // Size: 0x20
    Params_CopyAnimationName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CopyAllKeysName(FString sourceAnimationName, FString targetAnimationName, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysName"));
    struct Params_CopyAllKeysName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
        int32_t frameId; // 0x20
    }; // Size: 0x24
    Params_CopyAllKeysName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CloseAnimation(int32_t animationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimation"));
    struct Params_CloseAnimation {
        int32_t animationId; // 0x0
    }; // Size: 0x4
    Params_CloseAnimation params{};
    params.animationId = (int32_t)animationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::CloseAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAll"));
    struct Params_CloseAll {
    }; // Size: 0x0
    Params_CloseAll params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::AddNonZeroAllKeysName(FString sourceAnimationName, FString targetAnimationName, int32_t frameId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysName"));
    struct Params_AddNonZeroAllKeysName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
        int32_t frameId; // 0x20
    }; // Size: 0x24
    Params_AddNonZeroAllKeysName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    params.frameId = (int32_t)frameId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::ClearAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAll"));
    struct Params_ClearAll {
    }; // Size: 0x0
    Params_ClearAll params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UChromaSDKPluginBPLibrary::ChromaSDKInit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKInit"));
    struct Params_ChromaSDKInit {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_ChromaSDKInit params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UChromaSDKPluginBPLibrary::ChromaSDKDeleteEffect(FChromaSDKGuid& EffectId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKDeleteEffect"));
    struct Params_ChromaSDKDeleteEffect {
        FChromaSDKGuid EffectId; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_ChromaSDKDeleteEffect params{};
    params.EffectId = (FChromaSDKGuid)EffectId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    EffectId = params.EffectId;
    return (int32_t)params.ReturnValue;
}
FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectStatic(EChromaSDKDeviceEnum::Type device, FLinearColor& colorParam) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectStatic"));
    struct Params_ChromaSDKCreateEffectStatic {
        EChromaSDKDeviceEnum::Type device; // 0x0
        char pad_1[0x3];
        FLinearColor colorParam; // 0x4
        FChromaSDKEffectResult ReturnValue; // 0x14
    }; // Size: 0x28
    Params_ChromaSDKCreateEffectStatic params{};
    params.device = (EChromaSDKDeviceEnum::Type)device;
    params.colorParam = (FLinearColor)colorParam;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    colorParam = params.colorParam;
    return (FChromaSDKEffectResult)params.ReturnValue;
}
FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectNone(EChromaSDKDeviceEnum::Type device) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectNone"));
    struct Params_ChromaSDKCreateEffectNone {
        EChromaSDKDeviceEnum::Type device; // 0x0
        char pad_1[0x3];
        FChromaSDKEffectResult ReturnValue; // 0x4
    }; // Size: 0x18
    Params_ChromaSDKCreateEffectNone params{};
    params.device = (EChromaSDKDeviceEnum::Type)device;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FChromaSDKEffectResult)params.ReturnValue;
}
FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectKeyboardCustom2D(TArray<FChromaSDKColors>& Colors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectKeyboardCustom2D"));
    struct Params_ChromaSDKCreateEffectKeyboardCustom2D {
        TArray<FChromaSDKColors> Colors; // 0x0
        FChromaSDKEffectResult ReturnValue; // 0x10
    }; // Size: 0x24
    Params_ChromaSDKCreateEffectKeyboardCustom2D params{};
    params.Colors = (TArray<FChromaSDKColors>)Colors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Colors = params.Colors;
    return (FChromaSDKEffectResult)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::AddNonZeroTargetAllKeysAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFrames"));
    struct Params_AddNonZeroTargetAllKeysAllFrames {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
    }; // Size: 0x8
    Params_AddNonZeroTargetAllKeysAllFrames params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectCustom2D(EChromaSDKDevice2DEnum::Type device, TArray<FChromaSDKColors>& Colors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom2D"));
    struct Params_ChromaSDKCreateEffectCustom2D {
        EChromaSDKDevice2DEnum::Type device; // 0x0
        char pad_1[0x7];
        TArray<FChromaSDKColors> Colors; // 0x8
        FChromaSDKEffectResult ReturnValue; // 0x18
    }; // Size: 0x2c
    Params_ChromaSDKCreateEffectCustom2D params{};
    params.device = (EChromaSDKDevice2DEnum::Type)device;
    params.Colors = (TArray<FChromaSDKColors>)Colors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Colors = params.Colors;
    return (FChromaSDKEffectResult)params.ReturnValue;
}
FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectCustom1D(EChromaSDKDevice1DEnum::Type device, TArray<FLinearColor>& Colors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom1D"));
    struct Params_ChromaSDKCreateEffectCustom1D {
        EChromaSDKDevice1DEnum::Type device; // 0x0
        char pad_1[0x7];
        TArray<FLinearColor> Colors; // 0x8
        FChromaSDKEffectResult ReturnValue; // 0x18
    }; // Size: 0x2c
    Params_ChromaSDKCreateEffectCustom1D params{};
    params.device = (EChromaSDKDevice1DEnum::Type)device;
    params.Colors = (TArray<FLinearColor>)Colors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Colors = params.Colors;
    return (FChromaSDKEffectResult)params.ReturnValue;
}
void UChromaSDKPluginBPLibrary::AppendAllFramesName(FString sourceAnimationName, FString targetAnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AppendAllFramesName"));
    struct Params_AppendAllFramesName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
    }; // Size: 0x20
    Params_AppendAllFramesName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::AddNonZeroTargetAllKeysAllFramesOffset(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t Offset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesOffset"));
    struct Params_AddNonZeroTargetAllKeysAllFramesOffset {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
        int32_t Offset; // 0x8
    }; // Size: 0xc
    Params_AddNonZeroTargetAllKeysAllFramesOffset params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    params.Offset = (int32_t)Offset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::AddNonZeroAllKeysAllFramesOffsetName(FString sourceAnimationName, FString targetAnimationName, int32_t Offset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesOffsetName"));
    struct Params_AddNonZeroAllKeysAllFramesOffsetName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
        int32_t Offset; // 0x20
    }; // Size: 0x24
    Params_AddNonZeroAllKeysAllFramesOffsetName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    params.Offset = (int32_t)Offset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::AddNonZeroAllKeysAllFramesOffset(int32_t sourceAnimationId, int32_t targetAnimationId, int32_t Offset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesOffset"));
    struct Params_AddNonZeroAllKeysAllFramesOffset {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
        int32_t Offset; // 0x8
    }; // Size: 0xc
    Params_AddNonZeroAllKeysAllFramesOffset params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    params.Offset = (int32_t)Offset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::AddNonZeroAllKeysAllFramesName(FString sourceAnimationName, FString targetAnimationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesName"));
    struct Params_AddNonZeroAllKeysAllFramesName {
        FString sourceAnimationName; // 0x0
        FString targetAnimationName; // 0x10
    }; // Size: 0x20
    Params_AddNonZeroAllKeysAllFramesName params{};
    params.sourceAnimationName = (FString)sourceAnimationName;
    params.targetAnimationName = (FString)targetAnimationName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UChromaSDKPluginBPLibrary::AddNonZeroAllKeysAllFrames(int32_t sourceAnimationId, int32_t targetAnimationId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFrames"));
    struct Params_AddNonZeroAllKeysAllFrames {
        int32_t sourceAnimationId; // 0x0
        int32_t targetAnimationId; // 0x4
    }; // Size: 0x8
    Params_AddNonZeroAllKeysAllFrames params{};
    params.sourceAnimationId = (int32_t)sourceAnimationId;
    params.targetAnimationId = (int32_t)targetAnimationId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
