#pragma once
#include <cstdint>
#include "ESearchCase\Type.hpp"
#include "ESearchDir\Type.hpp"
#include "FIntPoint.hpp"
#include "FIntVector.hpp"
#include "FLinearColor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
struct FTransform;
class UObject;
struct FMatrix;
#pragma pack(push, 1)
class UKismetStringLibrary : public UBlueprintFunctionLibrary {
public:
    static UKismetStringLibrary* StaticClass();
    static FString TrimTrailing(FString SourceString);
    static FString Trim(FString SourceString);
    static FString ToUpper(FString SourceString);
    static FString ToLower(FString SourceString);
    static FString TimeSecondsToString(float InSeconds);
    static bool STARTSWITH(FString SourceString, FString InPrefix, ESearchCase::Type SearchCase);
    static bool Split(FString SourceString, FString InStr, FString& LeftS, FString& RightS, ESearchCase::Type SearchCase, ESearchDir::Type SearchDir);
    static FString RightPad(FString SourceString, int32_t ChCount);
    static FString RightChop(FString SourceString, int32_t Count);
    static FString Right(FString SourceString, int32_t Count);
    static FString Reverse(FString SourceString);
    static int32_t ReplaceInline(FString& SourceString, FString SearchText, FString ReplacementText, ESearchCase::Type SearchCase);
    static FString Replace(FString SourceString, FString From, FString To, ESearchCase::Type SearchCase);
    static TArray<FString> ParseIntoArray(FString SourceString, FString Delimiter, bool CullEmptyStrings);
    static bool NotEqual_StrStr(FString A, FString B);
    static bool NotEqual_StriStri(FString A, FString B);
    static FString Mid(FString SourceString, int32_t Start, int32_t Count);
    static bool MatchesWildcard(FString SourceString, FString Wildcard, ESearchCase::Type SearchCase);
    static int32_t Len(FString S);
    static FString LeftPad(FString SourceString, int32_t ChCount);
    static FString LeftChop(FString SourceString, int32_t Count);
    static FString Left(FString SourceString, int32_t Count);
    static FString JoinStringArray(TArray<FString>& SourceArray, FString Separator);
    static bool IsNumeric(FString SourceString);
    static bool IsEmpty(FString inString);
    static FString GetSubstring(FString SourceString, int32_t StartIndex, int32_t Length);
    static int32_t GetCharacterAsNumber(FString SourceString, int32_t Index);
    static TArray<FString> GetCharacterArrayFromString(FString SourceString);
    static int32_t FindSubstring(FString SearchIn, FString Substring, bool bUseCase, bool bSearchFromEnd, int32_t StartPosition);
    static bool EqualEqual_StrStr(FString A, FString B);
    static bool EqualEqual_StriStri(FString A, FString B);
    static bool ENDSWITH(FString SourceString, FString InSuffix, ESearchCase::Type SearchCase);
    static int32_t CullArray(FString SourceString, TArray<FString>& inArray);
    static FString Conv_VectorToString(FVector InVec);
    static FString Conv_Vector2dToString(FVector2D InVec);
    static FString Conv_TransformToString(FTransform& InTrans);
    static void Conv_StringToVector2D(FString inString, FVector2D& OutConvertedVector2D, bool& OutIsValid);
    static void Conv_StringToVector(FString inString, FVector& OutConvertedVector, bool& OutIsValid);
    static void Conv_StringToRotator(FString inString, FRotator& OutConvertedRotator, bool& OutIsValid);
    static FName Conv_StringToName(FString inString);
    static int32_t Conv_StringToInt(FString inString);
    static float Conv_StringToFloat(FString inString);
    static void Conv_StringToColor(FString inString, FLinearColor& OutConvertedColor, bool& OutIsValid);
    static FString Conv_RotatorToString(FRotator InRot);
    static FString Conv_ObjectToString(UObject* InObj);
    static FString Conv_NameToString(FName InName);
    static FString Conv_MatrixToString(FMatrix& InMatrix);
    static FString Conv_IntVectorToString(FIntVector InIntVec);
    static FString Conv_IntToString(int32_t inInt);
    static FString Conv_IntPointToString(FIntPoint InIntPoint);
    static FString Conv_FloatToString(float InFloat);
    static FString Conv_ColorToString(FLinearColor InColor);
    static FString Conv_ByteToString(uint8_t InByte);
    static FString Conv_BoolToString(bool InBool);
    static bool CONTAINS(FString SearchIn, FString Substring, bool bUseCase, bool bSearchFromEnd);
    static FString Concat_StrStr(FString A, FString B);
    static FString BuildString_Vector2d(FString AppendTo, FString Prefix, FVector2D InVector2D, FString Suffix);
    static FString BuildString_Vector(FString AppendTo, FString Prefix, FVector InVector, FString Suffix);
    static FString BuildString_Rotator(FString AppendTo, FString Prefix, FRotator InRot, FString Suffix);
    static FString BuildString_Object(FString AppendTo, FString Prefix, UObject* InObj, FString Suffix);
    static FString BuildString_Name(FString AppendTo, FString Prefix, FName InName, FString Suffix);
    static FString BuildString_IntVector(FString AppendTo, FString Prefix, FIntVector InIntVector, FString Suffix);
    static FString BuildString_Int(FString AppendTo, FString Prefix, int32_t inInt, FString Suffix);
    static FString BuildString_Float(FString AppendTo, FString Prefix, float InFloat, FString Suffix);
    static FString BuildString_Color(FString AppendTo, FString Prefix, FLinearColor InColor, FString Suffix);
    static FString BuildString_Bool(FString AppendTo, FString Prefix, bool InBool, FString Suffix);
}; // Size: 0x28
#pragma pack(pop)
