#include "ESearchCase\Type.hpp"
#include "ESearchDir\Type.hpp"
#include "FIntPoint.hpp"
#include "FIntVector.hpp"
#include "FLinearColor.hpp"
#include "FMatrix.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UKismetStringLibrary.hpp"
#include "UObject.hpp"
UKismetStringLibrary* UKismetStringLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.KismetStringLibrary");
    return (UKismetStringLibrary*)res;
}
FString UKismetStringLibrary::TrimTrailing(FString SourceString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.TrimTrailing"));
    struct Params_TrimTrailing {
        FString SourceString; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_TrimTrailing params{};
    params.SourceString = (FString)SourceString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::Trim(FString SourceString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Trim"));
    struct Params_Trim {
        FString SourceString; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Trim params{};
    params.SourceString = (FString)SourceString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::TimeSecondsToString(float InSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.TimeSecondsToString"));
    struct Params_TimeSecondsToString {
        float InSeconds; // 0x0
        char pad_4[0x4];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_TimeSecondsToString params{};
    params.InSeconds = (float)InSeconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::Conv_VectorToString(FVector InVec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_VectorToString"));
    struct Params_Conv_VectorToString {
        FVector InVec; // 0x0
        char pad_c[0x4];
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Conv_VectorToString params{};
    params.InVec = (FVector)InVec;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
int32_t UKismetStringLibrary::ReplaceInline(FString& SourceString, FString SearchText, FString ReplacementText, ESearchCase::Type SearchCase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.ReplaceInline"));
    struct Params_ReplaceInline {
        FString SourceString; // 0x0
        FString SearchText; // 0x10
        FString ReplacementText; // 0x20
        ESearchCase::Type SearchCase; // 0x30
        char pad_31[0x3];
        int32_t ReturnValue; // 0x34
    }; // Size: 0x38
    Params_ReplaceInline params{};
    params.SourceString = (FString)SourceString;
    params.SearchText = (FString)SearchText;
    params.ReplacementText = (FString)ReplacementText;
    params.SearchCase = (ESearchCase::Type)SearchCase;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SourceString = params.SourceString;
    return (int32_t)params.ReturnValue;
}
FString UKismetStringLibrary::ToUpper(FString SourceString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.ToUpper"));
    struct Params_ToUpper {
        FString SourceString; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_ToUpper params{};
    params.SourceString = (FString)SourceString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UKismetStringLibrary::Split(FString SourceString, FString InStr, FString& LeftS, FString& RightS, ESearchCase::Type SearchCase, ESearchDir::Type SearchDir) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Split"));
    struct Params_Split {
        FString SourceString; // 0x0
        FString InStr; // 0x10
        FString LeftS; // 0x20
        FString RightS; // 0x30
        ESearchCase::Type SearchCase; // 0x40
        ESearchDir::Type SearchDir; // 0x41
        bool ReturnValue; // 0x42
    }; // Size: 0x43
    Params_Split params{};
    params.SourceString = (FString)SourceString;
    params.InStr = (FString)InStr;
    params.LeftS = (FString)LeftS;
    params.RightS = (FString)RightS;
    params.SearchCase = (ESearchCase::Type)SearchCase;
    params.SearchDir = (ESearchDir::Type)SearchDir;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RightS = params.RightS;
    LeftS = params.LeftS;
    return (bool)params.ReturnValue;
}
FString UKismetStringLibrary::Mid(FString SourceString, int32_t Start, int32_t Count) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Mid"));
    struct Params_Mid {
        FString SourceString; // 0x0
        int32_t Start; // 0x10
        int32_t Count; // 0x14
        FString ReturnValue; // 0x18
    }; // Size: 0x28
    Params_Mid params{};
    params.SourceString = (FString)SourceString;
    params.Start = (int32_t)Start;
    params.Count = (int32_t)Count;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::ToLower(FString SourceString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.ToLower"));
    struct Params_ToLower {
        FString SourceString; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_ToLower params{};
    params.SourceString = (FString)SourceString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UKismetStringLibrary::STARTSWITH(FString SourceString, FString InPrefix, ESearchCase::Type SearchCase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.STARTSWITH"));
    struct Params_STARTSWITH {
        FString SourceString; // 0x0
        FString InPrefix; // 0x10
        ESearchCase::Type SearchCase; // 0x20
        bool ReturnValue; // 0x21
    }; // Size: 0x22
    Params_STARTSWITH params{};
    params.SourceString = (FString)SourceString;
    params.InPrefix = (FString)InPrefix;
    params.SearchCase = (ESearchCase::Type)SearchCase;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetStringLibrary::CONTAINS(FString SearchIn, FString Substring, bool bUseCase, bool bSearchFromEnd) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.CONTAINS"));
    struct Params_CONTAINS {
        FString SearchIn; // 0x0
        FString Substring; // 0x10
        bool bUseCase; // 0x20
        bool bSearchFromEnd; // 0x21
        bool ReturnValue; // 0x22
    }; // Size: 0x23
    Params_CONTAINS params{};
    params.SearchIn = (FString)SearchIn;
    params.Substring = (FString)Substring;
    params.bUseCase = (bool)bUseCase;
    params.bSearchFromEnd = (bool)bSearchFromEnd;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UKismetStringLibrary::Conv_StringToFloat(FString inString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_StringToFloat"));
    struct Params_Conv_StringToFloat {
        FString inString; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_Conv_StringToFloat params{};
    params.inString = (FString)inString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FString UKismetStringLibrary::RightPad(FString SourceString, int32_t ChCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.RightPad"));
    struct Params_RightPad {
        FString SourceString; // 0x0
        int32_t ChCount; // 0x10
        char pad_14[0x4];
        FString ReturnValue; // 0x18
    }; // Size: 0x28
    Params_RightPad params{};
    params.SourceString = (FString)SourceString;
    params.ChCount = (int32_t)ChCount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::RightChop(FString SourceString, int32_t Count) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.RightChop"));
    struct Params_RightChop {
        FString SourceString; // 0x0
        int32_t Count; // 0x10
        char pad_14[0x4];
        FString ReturnValue; // 0x18
    }; // Size: 0x28
    Params_RightChop params{};
    params.SourceString = (FString)SourceString;
    params.Count = (int32_t)Count;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::Right(FString SourceString, int32_t Count) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Right"));
    struct Params_Right {
        FString SourceString; // 0x0
        int32_t Count; // 0x10
        char pad_14[0x4];
        FString ReturnValue; // 0x18
    }; // Size: 0x28
    Params_Right params{};
    params.SourceString = (FString)SourceString;
    params.Count = (int32_t)Count;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::Reverse(FString SourceString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Reverse"));
    struct Params_Reverse {
        FString SourceString; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Reverse params{};
    params.SourceString = (FString)SourceString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::Concat_StrStr(FString A, FString B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Concat_StrStr"));
    struct Params_Concat_StrStr {
        FString A; // 0x0
        FString B; // 0x10
        FString ReturnValue; // 0x20
    }; // Size: 0x30
    Params_Concat_StrStr params{};
    params.A = (FString)A;
    params.B = (FString)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::Conv_NameToString(FName InName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_NameToString"));
    struct Params_Conv_NameToString {
        FName InName; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_Conv_NameToString params{};
    params.InName = (FName)InName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UKismetStringLibrary::EqualEqual_StriStri(FString A, FString B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.EqualEqual_StriStri"));
    struct Params_EqualEqual_StriStri {
        FString A; // 0x0
        FString B; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_EqualEqual_StriStri params{};
    params.A = (FString)A;
    params.B = (FString)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UKismetStringLibrary::Replace(FString SourceString, FString From, FString To, ESearchCase::Type SearchCase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Replace"));
    struct Params_Replace {
        FString SourceString; // 0x0
        FString From; // 0x10
        FString To; // 0x20
        ESearchCase::Type SearchCase; // 0x30
        char pad_31[0x7];
        FString ReturnValue; // 0x38
    }; // Size: 0x48
    Params_Replace params{};
    params.SourceString = (FString)SourceString;
    params.From = (FString)From;
    params.To = (FString)To;
    params.SearchCase = (ESearchCase::Type)SearchCase;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UKismetStringLibrary::NotEqual_StrStr(FString A, FString B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.NotEqual_StrStr"));
    struct Params_NotEqual_StrStr {
        FString A; // 0x0
        FString B; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_NotEqual_StrStr params{};
    params.A = (FString)A;
    params.B = (FString)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FString> UKismetStringLibrary::ParseIntoArray(FString SourceString, FString Delimiter, bool CullEmptyStrings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.ParseIntoArray"));
    struct Params_ParseIntoArray {
        FString SourceString; // 0x0
        FString Delimiter; // 0x10
        bool CullEmptyStrings; // 0x20
        char pad_21[0x7];
        TArray<FString> ReturnValue; // 0x28
    }; // Size: 0x38
    Params_ParseIntoArray params{};
    params.SourceString = (FString)SourceString;
    params.Delimiter = (FString)Delimiter;
    params.CullEmptyStrings = (bool)CullEmptyStrings;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
bool UKismetStringLibrary::NotEqual_StriStri(FString A, FString B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.NotEqual_StriStri"));
    struct Params_NotEqual_StriStri {
        FString A; // 0x0
        FString B; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_NotEqual_StriStri params{};
    params.A = (FString)A;
    params.B = (FString)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UKismetStringLibrary::Len(FString S) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Len"));
    struct Params_Len {
        FString S; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_Len params{};
    params.S = (FString)S;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UKismetStringLibrary::MatchesWildcard(FString SourceString, FString Wildcard, ESearchCase::Type SearchCase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.MatchesWildcard"));
    struct Params_MatchesWildcard {
        FString SourceString; // 0x0
        FString Wildcard; // 0x10
        ESearchCase::Type SearchCase; // 0x20
        bool ReturnValue; // 0x21
    }; // Size: 0x22
    Params_MatchesWildcard params{};
    params.SourceString = (FString)SourceString;
    params.Wildcard = (FString)Wildcard;
    params.SearchCase = (ESearchCase::Type)SearchCase;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UKismetStringLibrary::Conv_StringToVector(FString inString, FVector& OutConvertedVector, bool& OutIsValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_StringToVector"));
    struct Params_Conv_StringToVector {
        FString inString; // 0x0
        FVector OutConvertedVector; // 0x10
        bool OutIsValid; // 0x1c
    }; // Size: 0x1d
    Params_Conv_StringToVector params{};
    params.inString = (FString)inString;
    params.OutConvertedVector = (FVector)OutConvertedVector;
    params.OutIsValid = (bool)OutIsValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutConvertedVector = params.OutConvertedVector;
    OutIsValid = params.OutIsValid;
}
FString UKismetStringLibrary::LeftPad(FString SourceString, int32_t ChCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.LeftPad"));
    struct Params_LeftPad {
        FString SourceString; // 0x0
        int32_t ChCount; // 0x10
        char pad_14[0x4];
        FString ReturnValue; // 0x18
    }; // Size: 0x28
    Params_LeftPad params{};
    params.SourceString = (FString)SourceString;
    params.ChCount = (int32_t)ChCount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::LeftChop(FString SourceString, int32_t Count) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.LeftChop"));
    struct Params_LeftChop {
        FString SourceString; // 0x0
        int32_t Count; // 0x10
        char pad_14[0x4];
        FString ReturnValue; // 0x18
    }; // Size: 0x28
    Params_LeftChop params{};
    params.SourceString = (FString)SourceString;
    params.Count = (int32_t)Count;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::Left(FString SourceString, int32_t Count) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Left"));
    struct Params_Left {
        FString SourceString; // 0x0
        int32_t Count; // 0x10
        char pad_14[0x4];
        FString ReturnValue; // 0x18
    }; // Size: 0x28
    Params_Left params{};
    params.SourceString = (FString)SourceString;
    params.Count = (int32_t)Count;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UKismetStringLibrary::Conv_StringToColor(FString inString, FLinearColor& OutConvertedColor, bool& OutIsValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_StringToColor"));
    struct Params_Conv_StringToColor {
        FString inString; // 0x0
        FLinearColor OutConvertedColor; // 0x10
        bool OutIsValid; // 0x20
    }; // Size: 0x21
    Params_Conv_StringToColor params{};
    params.inString = (FString)inString;
    params.OutConvertedColor = (FLinearColor)OutConvertedColor;
    params.OutIsValid = (bool)OutIsValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutConvertedColor = params.OutConvertedColor;
    OutIsValid = params.OutIsValid;
}
FString UKismetStringLibrary::JoinStringArray(TArray<FString>& SourceArray, FString Separator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.JoinStringArray"));
    struct Params_JoinStringArray {
        TArray<FString> SourceArray; // 0x0
        FString Separator; // 0x10
        FString ReturnValue; // 0x20
    }; // Size: 0x30
    Params_JoinStringArray params{};
    params.SourceArray = (TArray<FString>)SourceArray;
    params.Separator = (FString)Separator;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SourceArray = params.SourceArray;
    return (FString)params.ReturnValue;
}
bool UKismetStringLibrary::IsNumeric(FString SourceString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.IsNumeric"));
    struct Params_IsNumeric {
        FString SourceString; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsNumeric params{};
    params.SourceString = (FString)SourceString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetStringLibrary::IsEmpty(FString inString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.IsEmpty"));
    struct Params_IsEmpty {
        FString inString; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsEmpty params{};
    params.inString = (FString)inString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UKismetStringLibrary::GetSubstring(FString SourceString, int32_t StartIndex, int32_t Length) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.GetSubstring"));
    struct Params_GetSubstring {
        FString SourceString; // 0x0
        int32_t StartIndex; // 0x10
        int32_t Length; // 0x14
        FString ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetSubstring params{};
    params.SourceString = (FString)SourceString;
    params.StartIndex = (int32_t)StartIndex;
    params.Length = (int32_t)Length;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
int32_t UKismetStringLibrary::GetCharacterAsNumber(FString SourceString, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.GetCharacterAsNumber"));
    struct Params_GetCharacterAsNumber {
        FString SourceString; // 0x0
        int32_t Index; // 0x10
        int32_t ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetCharacterAsNumber params{};
    params.SourceString = (FString)SourceString;
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FString UKismetStringLibrary::Conv_ObjectToString(UObject* InObj) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_ObjectToString"));
    struct Params_Conv_ObjectToString {
        UObject* InObj; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_Conv_ObjectToString params{};
    params.InObj = (UObject*)InObj;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
TArray<FString> UKismetStringLibrary::GetCharacterArrayFromString(FString SourceString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.GetCharacterArrayFromString"));
    struct Params_GetCharacterArrayFromString {
        FString SourceString; // 0x0
        TArray<FString> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetCharacterArrayFromString params{};
    params.SourceString = (FString)SourceString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
void UKismetStringLibrary::Conv_StringToRotator(FString inString, FRotator& OutConvertedRotator, bool& OutIsValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_StringToRotator"));
    struct Params_Conv_StringToRotator {
        FString inString; // 0x0
        FRotator OutConvertedRotator; // 0x10
        bool OutIsValid; // 0x1c
    }; // Size: 0x1d
    Params_Conv_StringToRotator params{};
    params.inString = (FString)inString;
    params.OutConvertedRotator = (FRotator)OutConvertedRotator;
    params.OutIsValid = (bool)OutIsValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutConvertedRotator = params.OutConvertedRotator;
    OutIsValid = params.OutIsValid;
}
int32_t UKismetStringLibrary::FindSubstring(FString SearchIn, FString Substring, bool bUseCase, bool bSearchFromEnd, int32_t StartPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.FindSubstring"));
    struct Params_FindSubstring {
        FString SearchIn; // 0x0
        FString Substring; // 0x10
        bool bUseCase; // 0x20
        bool bSearchFromEnd; // 0x21
        char pad_22[0x2];
        int32_t StartPosition; // 0x24
        int32_t ReturnValue; // 0x28
    }; // Size: 0x2c
    Params_FindSubstring params{};
    params.SearchIn = (FString)SearchIn;
    params.Substring = (FString)Substring;
    params.bUseCase = (bool)bUseCase;
    params.bSearchFromEnd = (bool)bSearchFromEnd;
    params.StartPosition = (int32_t)StartPosition;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UKismetStringLibrary::CullArray(FString SourceString, TArray<FString>& inArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.CullArray"));
    struct Params_CullArray {
        FString SourceString; // 0x0
        TArray<FString> inArray; // 0x10
        int32_t ReturnValue; // 0x20
    }; // Size: 0x24
    Params_CullArray params{};
    params.SourceString = (FString)SourceString;
    params.inArray = (TArray<FString>)inArray;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    inArray = params.inArray;
    return (int32_t)params.ReturnValue;
}
bool UKismetStringLibrary::EqualEqual_StrStr(FString A, FString B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.EqualEqual_StrStr"));
    struct Params_EqualEqual_StrStr {
        FString A; // 0x0
        FString B; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_EqualEqual_StrStr params{};
    params.A = (FString)A;
    params.B = (FString)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetStringLibrary::ENDSWITH(FString SourceString, FString InSuffix, ESearchCase::Type SearchCase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.ENDSWITH"));
    struct Params_ENDSWITH {
        FString SourceString; // 0x0
        FString InSuffix; // 0x10
        ESearchCase::Type SearchCase; // 0x20
        bool ReturnValue; // 0x21
    }; // Size: 0x22
    Params_ENDSWITH params{};
    params.SourceString = (FString)SourceString;
    params.InSuffix = (FString)InSuffix;
    params.SearchCase = (ESearchCase::Type)SearchCase;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UKismetStringLibrary::Conv_Vector2dToString(FVector2D InVec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_Vector2dToString"));
    struct Params_Conv_Vector2dToString {
        FVector2D InVec; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_Conv_Vector2dToString params{};
    params.InVec = (FVector2D)InVec;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::Conv_TransformToString(FTransform& InTrans) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_TransformToString"));
    struct Params_Conv_TransformToString {
        FTransform InTrans; // 0x0
        FString ReturnValue; // 0x30
    }; // Size: 0x40
    Params_Conv_TransformToString params{};
    params.InTrans = (FTransform)InTrans;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InTrans = params.InTrans;
    return (FString)params.ReturnValue;
}
void UKismetStringLibrary::Conv_StringToVector2D(FString inString, FVector2D& OutConvertedVector2D, bool& OutIsValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_StringToVector2D"));
    struct Params_Conv_StringToVector2D {
        FString inString; // 0x0
        FVector2D OutConvertedVector2D; // 0x10
        bool OutIsValid; // 0x18
    }; // Size: 0x19
    Params_Conv_StringToVector2D params{};
    params.inString = (FString)inString;
    params.OutConvertedVector2D = (FVector2D)OutConvertedVector2D;
    params.OutIsValid = (bool)OutIsValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutConvertedVector2D = params.OutConvertedVector2D;
    OutIsValid = params.OutIsValid;
}
FString UKismetStringLibrary::BuildString_Vector(FString AppendTo, FString Prefix, FVector InVector, FString Suffix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.BuildString_Vector"));
    struct Params_BuildString_Vector {
        FString AppendTo; // 0x0
        FString Prefix; // 0x10
        FVector InVector; // 0x20
        char pad_2c[0x4];
        FString Suffix; // 0x30
        FString ReturnValue; // 0x40
    }; // Size: 0x50
    Params_BuildString_Vector params{};
    params.AppendTo = (FString)AppendTo;
    params.Prefix = (FString)Prefix;
    params.InVector = (FVector)InVector;
    params.Suffix = (FString)Suffix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FName UKismetStringLibrary::Conv_StringToName(FString inString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_StringToName"));
    struct Params_Conv_StringToName {
        FString inString; // 0x0
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_Conv_StringToName params{};
    params.inString = (FString)inString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
int32_t UKismetStringLibrary::Conv_StringToInt(FString inString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_StringToInt"));
    struct Params_Conv_StringToInt {
        FString inString; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_Conv_StringToInt params{};
    params.inString = (FString)inString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FString UKismetStringLibrary::Conv_RotatorToString(FRotator InRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_RotatorToString"));
    struct Params_Conv_RotatorToString {
        FRotator InRot; // 0x0
        char pad_c[0x4];
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Conv_RotatorToString params{};
    params.InRot = (FRotator)InRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::Conv_MatrixToString(FMatrix& InMatrix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_MatrixToString"));
    struct Params_Conv_MatrixToString {
        FMatrix InMatrix; // 0x0
        FString ReturnValue; // 0x40
    }; // Size: 0x50
    Params_Conv_MatrixToString params{};
    params.InMatrix = (FMatrix)InMatrix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InMatrix = params.InMatrix;
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::Conv_IntVectorToString(FIntVector InIntVec) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_IntVectorToString"));
    struct Params_Conv_IntVectorToString {
        FIntVector InIntVec; // 0x0
        char pad_c[0x4];
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Conv_IntVectorToString params{};
    params.InIntVec = (FIntVector)InIntVec;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::Conv_IntToString(int32_t inInt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_IntToString"));
    struct Params_Conv_IntToString {
        int32_t inInt; // 0x0
        char pad_4[0x4];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_Conv_IntToString params{};
    params.inInt = (int32_t)inInt;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::Conv_IntPointToString(FIntPoint InIntPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_IntPointToString"));
    struct Params_Conv_IntPointToString {
        FIntPoint InIntPoint; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_Conv_IntPointToString params{};
    params.InIntPoint = (FIntPoint)InIntPoint;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::Conv_ColorToString(FLinearColor InColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_ColorToString"));
    struct Params_Conv_ColorToString {
        FLinearColor InColor; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Conv_ColorToString params{};
    params.InColor = (FLinearColor)InColor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::Conv_FloatToString(float InFloat) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_FloatToString"));
    struct Params_Conv_FloatToString {
        float InFloat; // 0x0
        char pad_4[0x4];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_Conv_FloatToString params{};
    params.InFloat = (float)InFloat;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::Conv_ByteToString(uint8_t InByte) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_ByteToString"));
    struct Params_Conv_ByteToString {
        uint8_t InByte; // 0x0
        char pad_1[0x7];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_Conv_ByteToString params{};
    params.InByte = (uint8_t)InByte;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::Conv_BoolToString(bool InBool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.Conv_BoolToString"));
    struct Params_Conv_BoolToString {
        bool InBool; // 0x0
        char pad_1[0x7];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_Conv_BoolToString params{};
    params.InBool = (bool)InBool;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::BuildString_Vector2d(FString AppendTo, FString Prefix, FVector2D InVector2D, FString Suffix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.BuildString_Vector2d"));
    struct Params_BuildString_Vector2d {
        FString AppendTo; // 0x0
        FString Prefix; // 0x10
        FVector2D InVector2D; // 0x20
        FString Suffix; // 0x28
        FString ReturnValue; // 0x38
    }; // Size: 0x48
    Params_BuildString_Vector2d params{};
    params.AppendTo = (FString)AppendTo;
    params.Prefix = (FString)Prefix;
    params.InVector2D = (FVector2D)InVector2D;
    params.Suffix = (FString)Suffix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::BuildString_Rotator(FString AppendTo, FString Prefix, FRotator InRot, FString Suffix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.BuildString_Rotator"));
    struct Params_BuildString_Rotator {
        FString AppendTo; // 0x0
        FString Prefix; // 0x10
        FRotator InRot; // 0x20
        char pad_2c[0x4];
        FString Suffix; // 0x30
        FString ReturnValue; // 0x40
    }; // Size: 0x50
    Params_BuildString_Rotator params{};
    params.AppendTo = (FString)AppendTo;
    params.Prefix = (FString)Prefix;
    params.InRot = (FRotator)InRot;
    params.Suffix = (FString)Suffix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::BuildString_Object(FString AppendTo, FString Prefix, UObject* InObj, FString Suffix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.BuildString_Object"));
    struct Params_BuildString_Object {
        FString AppendTo; // 0x0
        FString Prefix; // 0x10
        UObject* InObj; // 0x20
        FString Suffix; // 0x28
        FString ReturnValue; // 0x38
    }; // Size: 0x48
    Params_BuildString_Object params{};
    params.AppendTo = (FString)AppendTo;
    params.Prefix = (FString)Prefix;
    params.InObj = (UObject*)InObj;
    params.Suffix = (FString)Suffix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::BuildString_Name(FString AppendTo, FString Prefix, FName InName, FString Suffix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.BuildString_Name"));
    struct Params_BuildString_Name {
        FString AppendTo; // 0x0
        FString Prefix; // 0x10
        FName InName; // 0x20
        FString Suffix; // 0x28
        FString ReturnValue; // 0x38
    }; // Size: 0x48
    Params_BuildString_Name params{};
    params.AppendTo = (FString)AppendTo;
    params.Prefix = (FString)Prefix;
    params.InName = (FName)InName;
    params.Suffix = (FString)Suffix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::BuildString_IntVector(FString AppendTo, FString Prefix, FIntVector InIntVector, FString Suffix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.BuildString_IntVector"));
    struct Params_BuildString_IntVector {
        FString AppendTo; // 0x0
        FString Prefix; // 0x10
        FIntVector InIntVector; // 0x20
        char pad_2c[0x4];
        FString Suffix; // 0x30
        FString ReturnValue; // 0x40
    }; // Size: 0x50
    Params_BuildString_IntVector params{};
    params.AppendTo = (FString)AppendTo;
    params.Prefix = (FString)Prefix;
    params.InIntVector = (FIntVector)InIntVector;
    params.Suffix = (FString)Suffix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::BuildString_Int(FString AppendTo, FString Prefix, int32_t inInt, FString Suffix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.BuildString_Int"));
    struct Params_BuildString_Int {
        FString AppendTo; // 0x0
        FString Prefix; // 0x10
        int32_t inInt; // 0x20
        char pad_24[0x4];
        FString Suffix; // 0x28
        FString ReturnValue; // 0x38
    }; // Size: 0x48
    Params_BuildString_Int params{};
    params.AppendTo = (FString)AppendTo;
    params.Prefix = (FString)Prefix;
    params.inInt = (int32_t)inInt;
    params.Suffix = (FString)Suffix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::BuildString_Float(FString AppendTo, FString Prefix, float InFloat, FString Suffix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.BuildString_Float"));
    struct Params_BuildString_Float {
        FString AppendTo; // 0x0
        FString Prefix; // 0x10
        float InFloat; // 0x20
        char pad_24[0x4];
        FString Suffix; // 0x28
        FString ReturnValue; // 0x38
    }; // Size: 0x48
    Params_BuildString_Float params{};
    params.AppendTo = (FString)AppendTo;
    params.Prefix = (FString)Prefix;
    params.InFloat = (float)InFloat;
    params.Suffix = (FString)Suffix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::BuildString_Color(FString AppendTo, FString Prefix, FLinearColor InColor, FString Suffix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.BuildString_Color"));
    struct Params_BuildString_Color {
        FString AppendTo; // 0x0
        FString Prefix; // 0x10
        FLinearColor InColor; // 0x20
        FString Suffix; // 0x30
        FString ReturnValue; // 0x40
    }; // Size: 0x50
    Params_BuildString_Color params{};
    params.AppendTo = (FString)AppendTo;
    params.Prefix = (FString)Prefix;
    params.InColor = (FLinearColor)InColor;
    params.Suffix = (FString)Suffix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringLibrary::BuildString_Bool(FString AppendTo, FString Prefix, bool InBool, FString Suffix) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringLibrary.BuildString_Bool"));
    struct Params_BuildString_Bool {
        FString AppendTo; // 0x0
        FString Prefix; // 0x10
        bool InBool; // 0x20
        char pad_21[0x7];
        FString Suffix; // 0x28
        FString ReturnValue; // 0x38
    }; // Size: 0x48
    Params_BuildString_Bool params{};
    params.AppendTo = (FString)AppendTo;
    params.Prefix = (FString)Prefix;
    params.InBool = (bool)InBool;
    params.Suffix = (FString)Suffix;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
