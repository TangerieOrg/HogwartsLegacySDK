#include "FFrameNumber.hpp"
#include "FFrameRate.hpp"
#include "FFrameTime.hpp"
#include "FQualifiedFrameTime.hpp"
#include "FTimecode.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UTimeManagementBlueprintLibrary.hpp"
UTimeManagementBlueprintLibrary* UTimeManagementBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeManagement.TimeManagementBlueprintLibrary");
    return (UTimeManagementBlueprintLibrary*)res;
}
FFrameTime UTimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(float TimeInSeconds, FFrameRate& FrameRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate"));
    struct Params_Multiply_SecondsFrameRate {
        float TimeInSeconds; // 0x0
        FFrameRate FrameRate; // 0x4
        FFrameTime ReturnValue; // 0xc
    }; // Size: 0x14
    Params_Multiply_SecondsFrameRate params{};
    params.TimeInSeconds = (float)TimeInSeconds;
    params.FrameRate = (FFrameRate)FrameRate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FrameRate = params.FrameRate;
    return (FFrameTime)params.ReturnValue;
}
FFrameTime UTimeManagementBlueprintLibrary::TransformTime(FFrameTime& SourceTime, FFrameRate& SourceRate, FFrameRate& DestinationRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeManagement.TimeManagementBlueprintLibrary.TransformTime"));
    struct Params_TransformTime {
        FFrameTime SourceTime; // 0x0
        FFrameRate SourceRate; // 0x8
        FFrameRate DestinationRate; // 0x10
        FFrameTime ReturnValue; // 0x18
    }; // Size: 0x20
    Params_TransformTime params{};
    params.SourceTime = (FFrameTime)SourceTime;
    params.SourceRate = (FFrameRate)SourceRate;
    params.DestinationRate = (FFrameRate)DestinationRate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SourceRate = params.SourceRate;
    SourceTime = params.SourceTime;
    DestinationRate = params.DestinationRate;
    return (FFrameTime)params.ReturnValue;
}
bool UTimeManagementBlueprintLibrary::IsValid_MultipleOf(FFrameRate& InFrameRate, FFrameRate& OtherFramerate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf"));
    struct Params_IsValid_MultipleOf {
        FFrameRate InFrameRate; // 0x0
        FFrameRate OtherFramerate; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsValid_MultipleOf params{};
    params.InFrameRate = (FFrameRate)InFrameRate;
    params.OtherFramerate = (FFrameRate)OtherFramerate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InFrameRate = params.InFrameRate;
    OtherFramerate = params.OtherFramerate;
    return (bool)params.ReturnValue;
}
FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberInteger(FFrameNumber A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger"));
    struct Params_Subtract_FrameNumberInteger {
        FFrameNumber A; // 0x0
        int32_t B; // 0x4
        FFrameNumber ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Subtract_FrameNumberInteger params{};
    params.A = (FFrameNumber)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FFrameNumber)params.ReturnValue;
}
FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber"));
    struct Params_Subtract_FrameNumberFrameNumber {
        FFrameNumber A; // 0x0
        FFrameNumber B; // 0x4
        FFrameNumber ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Subtract_FrameNumberFrameNumber params{};
    params.A = (FFrameNumber)A;
    params.B = (FFrameNumber)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FFrameNumber)params.ReturnValue;
}
FFrameTime UTimeManagementBlueprintLibrary::SnapFrameTimeToRate(FFrameTime& SourceTime, FFrameRate& SourceRate, FFrameRate& SnapToRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate"));
    struct Params_SnapFrameTimeToRate {
        FFrameTime SourceTime; // 0x0
        FFrameRate SourceRate; // 0x8
        FFrameRate SnapToRate; // 0x10
        FFrameTime ReturnValue; // 0x18
    }; // Size: 0x20
    Params_SnapFrameTimeToRate params{};
    params.SourceTime = (FFrameTime)SourceTime;
    params.SourceRate = (FFrameRate)SourceRate;
    params.SnapToRate = (FFrameRate)SnapToRate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SourceTime = params.SourceTime;
    SourceRate = params.SourceRate;
    SnapToRate = params.SnapToRate;
    return (FFrameTime)params.ReturnValue;
}
FFrameNumber UTimeManagementBlueprintLibrary::Multiply_FrameNumberInteger(FFrameNumber A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger"));
    struct Params_Multiply_FrameNumberInteger {
        FFrameNumber A; // 0x0
        int32_t B; // 0x4
        FFrameNumber ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Multiply_FrameNumberInteger params{};
    params.A = (FFrameNumber)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FFrameNumber)params.ReturnValue;
}
bool UTimeManagementBlueprintLibrary::IsValid_Framerate(FFrameRate& InFrameRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate"));
    struct Params_IsValid_Framerate {
        FFrameRate InFrameRate; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsValid_Framerate params{};
    params.InFrameRate = (FFrameRate)InFrameRate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InFrameRate = params.InFrameRate;
    return (bool)params.ReturnValue;
}
FFrameRate UTimeManagementBlueprintLibrary::GetTimecodeFrameRate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate"));
    struct Params_GetTimecodeFrameRate {
        FFrameRate ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTimecodeFrameRate params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FFrameRate)params.ReturnValue;
}
FTimecode UTimeManagementBlueprintLibrary::GetTimecode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeManagement.TimeManagementBlueprintLibrary.GetTimecode"));
    struct Params_GetTimecode {
        FTimecode ReturnValue; // 0x0
    }; // Size: 0x14
    Params_GetTimecode params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTimecode)params.ReturnValue;
}
FFrameNumber UTimeManagementBlueprintLibrary::Divide_FrameNumberInteger(FFrameNumber A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger"));
    struct Params_Divide_FrameNumberInteger {
        FFrameNumber A; // 0x0
        int32_t B; // 0x4
        FFrameNumber ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Divide_FrameNumberInteger params{};
    params.A = (FFrameNumber)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FFrameNumber)params.ReturnValue;
}
FString UTimeManagementBlueprintLibrary::Conv_TimecodeToString(FTimecode& InTimecode, bool bForceSignDisplay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString"));
    struct Params_Conv_TimecodeToString {
        FTimecode InTimecode; // 0x0
        bool bForceSignDisplay; // 0x14
        char pad_15[0x3];
        FString ReturnValue; // 0x18
    }; // Size: 0x28
    Params_Conv_TimecodeToString params{};
    params.InTimecode = (FTimecode)InTimecode;
    params.bForceSignDisplay = (bool)bForceSignDisplay;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InTimecode = params.InTimecode;
    return (FString)params.ReturnValue;
}
float UTimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(FQualifiedFrameTime& InFrameTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds"));
    struct Params_Conv_QualifiedFrameTimeToSeconds {
        FQualifiedFrameTime InFrameTime; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_Conv_QualifiedFrameTimeToSeconds params{};
    params.InFrameTime = (FQualifiedFrameTime)InFrameTime;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InFrameTime = params.InFrameTime;
    return (float)params.ReturnValue;
}
FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberInteger(FFrameNumber A, int32_t B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger"));
    struct Params_Add_FrameNumberInteger {
        FFrameNumber A; // 0x0
        int32_t B; // 0x4
        FFrameNumber ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Add_FrameNumberInteger params{};
    params.A = (FFrameNumber)A;
    params.B = (int32_t)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FFrameNumber)params.ReturnValue;
}
float UTimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(FFrameRate& InFrameRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds"));
    struct Params_Conv_FrameRateToSeconds {
        FFrameRate InFrameRate; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Conv_FrameRateToSeconds params{};
    params.InFrameRate = (FFrameRate)InFrameRate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InFrameRate = params.InFrameRate;
    return (float)params.ReturnValue;
}
int32_t UTimeManagementBlueprintLibrary::Conv_FrameNumberToInteger(FFrameNumber& InFrameNumber) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger"));
    struct Params_Conv_FrameNumberToInteger {
        FFrameNumber InFrameNumber; // 0x0
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Conv_FrameNumberToInteger params{};
    params.InFrameNumber = (FFrameNumber)InFrameNumber;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InFrameNumber = params.InFrameNumber;
    return (int32_t)params.ReturnValue;
}
FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber"));
    struct Params_Add_FrameNumberFrameNumber {
        FFrameNumber A; // 0x0
        FFrameNumber B; // 0x4
        FFrameNumber ReturnValue; // 0x8
    }; // Size: 0xc
    Params_Add_FrameNumberFrameNumber params{};
    params.A = (FFrameNumber)A;
    params.B = (FFrameNumber)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FFrameNumber)params.ReturnValue;
}
