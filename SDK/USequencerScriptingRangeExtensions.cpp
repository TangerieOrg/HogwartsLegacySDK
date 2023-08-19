#include "FSequencerScriptingRange.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "USequencerScriptingRangeExtensions.hpp"
bool USequencerScriptingRangeExtensions::HasStart(FSequencerScriptingRange& Range) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.HasStart"));
    struct Params_HasStart {
        FSequencerScriptingRange Range; // 0x0
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_HasStart params{};
    params.Range = (FSequencerScriptingRange)Range;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Range = params.Range;
    return (bool)params.ReturnValue;
}
USequencerScriptingRangeExtensions* USequencerScriptingRangeExtensions::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.SequencerScriptingRangeExtensions");
    return (USequencerScriptingRangeExtensions*)res;
}
void USequencerScriptingRangeExtensions::SetStartSeconds(FSequencerScriptingRange& Range, float Start) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds"));
    struct Params_SetStartSeconds {
        FSequencerScriptingRange Range; // 0x0
        float Start; // 0x14
    }; // Size: 0x18
    Params_SetStartSeconds params{};
    params.Range = (FSequencerScriptingRange)Range;
    params.Start = (float)Start;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Range = params.Range;
}
void USequencerScriptingRangeExtensions::SetStartFrame(FSequencerScriptingRange& Range, int32_t Start) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame"));
    struct Params_SetStartFrame {
        FSequencerScriptingRange Range; // 0x0
        int32_t Start; // 0x14
    }; // Size: 0x18
    Params_SetStartFrame params{};
    params.Range = (FSequencerScriptingRange)Range;
    params.Start = (int32_t)Start;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Range = params.Range;
}
void USequencerScriptingRangeExtensions::SetEndSeconds(FSequencerScriptingRange& Range, float End) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds"));
    struct Params_SetEndSeconds {
        FSequencerScriptingRange Range; // 0x0
        float End; // 0x14
    }; // Size: 0x18
    Params_SetEndSeconds params{};
    params.Range = (FSequencerScriptingRange)Range;
    params.End = (float)End;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Range = params.Range;
}
void USequencerScriptingRangeExtensions::SetEndFrame(FSequencerScriptingRange& Range, int32_t End) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame"));
    struct Params_SetEndFrame {
        FSequencerScriptingRange Range; // 0x0
        int32_t End; // 0x14
    }; // Size: 0x18
    Params_SetEndFrame params{};
    params.Range = (FSequencerScriptingRange)Range;
    params.End = (int32_t)End;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Range = params.Range;
}
void USequencerScriptingRangeExtensions::RemoveStart(FSequencerScriptingRange& Range) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart"));
    struct Params_RemoveStart {
        FSequencerScriptingRange Range; // 0x0
    }; // Size: 0x14
    Params_RemoveStart params{};
    params.Range = (FSequencerScriptingRange)Range;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Range = params.Range;
}
void USequencerScriptingRangeExtensions::RemoveEnd(FSequencerScriptingRange& Range) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd"));
    struct Params_RemoveEnd {
        FSequencerScriptingRange Range; // 0x0
    }; // Size: 0x14
    Params_RemoveEnd params{};
    params.Range = (FSequencerScriptingRange)Range;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Range = params.Range;
}
bool USequencerScriptingRangeExtensions::HasEnd(FSequencerScriptingRange& Range) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.HasEnd"));
    struct Params_HasEnd {
        FSequencerScriptingRange Range; // 0x0
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_HasEnd params{};
    params.Range = (FSequencerScriptingRange)Range;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Range = params.Range;
    return (bool)params.ReturnValue;
}
float USequencerScriptingRangeExtensions::GetStartSeconds(FSequencerScriptingRange& Range) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds"));
    struct Params_GetStartSeconds {
        FSequencerScriptingRange Range; // 0x0
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetStartSeconds params{};
    params.Range = (FSequencerScriptingRange)Range;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Range = params.Range;
    return (float)params.ReturnValue;
}
int32_t USequencerScriptingRangeExtensions::GetStartFrame(FSequencerScriptingRange& Range) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame"));
    struct Params_GetStartFrame {
        FSequencerScriptingRange Range; // 0x0
        int32_t ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetStartFrame params{};
    params.Range = (FSequencerScriptingRange)Range;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Range = params.Range;
    return (int32_t)params.ReturnValue;
}
float USequencerScriptingRangeExtensions::GetEndSeconds(FSequencerScriptingRange& Range) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds"));
    struct Params_GetEndSeconds {
        FSequencerScriptingRange Range; // 0x0
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetEndSeconds params{};
    params.Range = (FSequencerScriptingRange)Range;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Range = params.Range;
    return (float)params.ReturnValue;
}
int32_t USequencerScriptingRangeExtensions::GetEndFrame(FSequencerScriptingRange& Range) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame"));
    struct Params_GetEndFrame {
        FSequencerScriptingRange Range; // 0x0
        int32_t ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetEndFrame params{};
    params.Range = (FSequencerScriptingRange)Range;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Range = params.Range;
    return (int32_t)params.ReturnValue;
}
