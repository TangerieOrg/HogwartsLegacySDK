#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMovieSceneScriptingChannel.hpp"
#include "UMovieSceneSection.hpp"
#include "UMovieSceneSectionExtensions.hpp"
#include "UMovieSceneSequence.hpp"
#include "UMovieSceneSubSection.hpp"
void UMovieSceneSectionExtensions::SetRangeSeconds(UMovieSceneSection* Section, float StartTime, float EndTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds"));
    struct Params_SetRangeSeconds {
        UMovieSceneSection* Section; // 0x0
        float StartTime; // 0x8
        float EndTime; // 0xc
    }; // Size: 0x10
    Params_SetRangeSeconds params{};
    params.Section = (UMovieSceneSection*)Section;
    params.StartTime = (float)StartTime;
    params.EndTime = (float)EndTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UMovieSceneSectionExtensions* UMovieSceneSectionExtensions::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneSectionExtensions");
    return (UMovieSceneSectionExtensions*)res;
}
void UMovieSceneSectionExtensions::SetRange(UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetRange"));
    struct Params_SetRange {
        UMovieSceneSection* Section; // 0x0
        int32_t StartFrame; // 0x8
        int32_t EndFrame; // 0xc
    }; // Size: 0x10
    Params_SetRange params{};
    params.Section = (UMovieSceneSection*)Section;
    params.StartFrame = (int32_t)StartFrame;
    params.EndFrame = (int32_t)EndFrame;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMovieSceneSectionExtensions::SetStartFrameSeconds(UMovieSceneSection* Section, float StartTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds"));
    struct Params_SetStartFrameSeconds {
        UMovieSceneSection* Section; // 0x0
        float StartTime; // 0x8
    }; // Size: 0xc
    Params_SetStartFrameSeconds params{};
    params.Section = (UMovieSceneSection*)Section;
    params.StartTime = (float)StartTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMovieSceneSectionExtensions::SetStartFrameBounded(UMovieSceneSection* Section, bool bIsBounded) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded"));
    struct Params_SetStartFrameBounded {
        UMovieSceneSection* Section; // 0x0
        bool bIsBounded; // 0x8
    }; // Size: 0x9
    Params_SetStartFrameBounded params{};
    params.Section = (UMovieSceneSection*)Section;
    params.bIsBounded = (bool)bIsBounded;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMovieSceneSectionExtensions::SetStartFrame(UMovieSceneSection* Section, int32_t StartFrame) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetStartFrame"));
    struct Params_SetStartFrame {
        UMovieSceneSection* Section; // 0x0
        int32_t StartFrame; // 0x8
    }; // Size: 0xc
    Params_SetStartFrame params{};
    params.Section = (UMovieSceneSection*)Section;
    params.StartFrame = (int32_t)StartFrame;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMovieSceneSectionExtensions::SetEndFrameSeconds(UMovieSceneSection* Section, float EndTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds"));
    struct Params_SetEndFrameSeconds {
        UMovieSceneSection* Section; // 0x0
        float EndTime; // 0x8
    }; // Size: 0xc
    Params_SetEndFrameSeconds params{};
    params.Section = (UMovieSceneSection*)Section;
    params.EndTime = (float)EndTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMovieSceneSectionExtensions::SetEndFrameBounded(UMovieSceneSection* Section, bool bIsBounded) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded"));
    struct Params_SetEndFrameBounded {
        UMovieSceneSection* Section; // 0x0
        bool bIsBounded; // 0x8
    }; // Size: 0x9
    Params_SetEndFrameBounded params{};
    params.Section = (UMovieSceneSection*)Section;
    params.bIsBounded = (bool)bIsBounded;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMovieSceneSectionExtensions::SetEndFrame(UMovieSceneSection* Section, int32_t EndFrame) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSectionExtensions.SetEndFrame"));
    struct Params_SetEndFrame {
        UMovieSceneSection* Section; // 0x0
        int32_t EndFrame; // 0x8
    }; // Size: 0xc
    Params_SetEndFrame params{};
    params.Section = (UMovieSceneSection*)Section;
    params.EndFrame = (int32_t)EndFrame;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UMovieSceneSectionExtensions::HasStartFrame(UMovieSceneSection* Section) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSectionExtensions.HasStartFrame"));
    struct Params_HasStartFrame {
        UMovieSceneSection* Section; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasStartFrame params{};
    params.Section = (UMovieSceneSection*)Section;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UMovieSceneSectionExtensions::GetEndFrame(UMovieSceneSection* Section) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetEndFrame"));
    struct Params_GetEndFrame {
        UMovieSceneSection* Section; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetEndFrame params{};
    params.Section = (UMovieSceneSection*)Section;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UMovieSceneSectionExtensions::HasEndFrame(UMovieSceneSection* Section) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSectionExtensions.HasEndFrame"));
    struct Params_HasEndFrame {
        UMovieSceneSection* Section; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasEndFrame params{};
    params.Section = (UMovieSceneSection*)Section;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UMovieSceneSectionExtensions::GetStartFrameSeconds(UMovieSceneSection* Section) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds"));
    struct Params_GetStartFrameSeconds {
        UMovieSceneSection* Section; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetStartFrameSeconds params{};
    params.Section = (UMovieSceneSection*)Section;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UMovieSceneSectionExtensions::GetStartFrame(UMovieSceneSection* Section) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetStartFrame"));
    struct Params_GetStartFrame {
        UMovieSceneSection* Section; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetStartFrame params{};
    params.Section = (UMovieSceneSection*)Section;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UMovieSceneSectionExtensions::GetParentSequenceFrame(UMovieSceneSubSection* Section, int32_t InFrame, UMovieSceneSequence* ParentSequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame"));
    struct Params_GetParentSequenceFrame {
        UMovieSceneSubSection* Section; // 0x0
        int32_t InFrame; // 0x8
        char pad_c[0x4];
        UMovieSceneSequence* ParentSequence; // 0x10
        int32_t ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetParentSequenceFrame params{};
    params.Section = (UMovieSceneSubSection*)Section;
    params.InFrame = (int32_t)InFrame;
    params.ParentSequence = (UMovieSceneSequence*)ParentSequence;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UMovieSceneSectionExtensions::GetEndFrameSeconds(UMovieSceneSection* Section) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds"));
    struct Params_GetEndFrameSeconds {
        UMovieSceneSection* Section; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetEndFrameSeconds params{};
    params.Section = (UMovieSceneSection*)Section;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
TArray<UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::GetChannels(UMovieSceneSection* Section) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSectionExtensions.GetChannels"));
    struct Params_GetChannels {
        UMovieSceneSection* Section; // 0x0
        TArray<UMovieSceneScriptingChannel*> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetChannels params{};
    params.Section = (UMovieSceneSection*)Section;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UMovieSceneScriptingChannel*>)params.ReturnValue;
}
TArray<UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::FindChannelsByType(UMovieSceneSection* Section, UClass* ChannelType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType"));
    struct Params_FindChannelsByType {
        UMovieSceneSection* Section; // 0x0
        UClass* ChannelType; // 0x8
        TArray<UMovieSceneScriptingChannel*> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_FindChannelsByType params{};
    params.Section = (UMovieSceneSection*)Section;
    params.ChannelType = (UClass*)ChannelType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<UMovieSceneScriptingChannel*>)params.ReturnValue;
}
