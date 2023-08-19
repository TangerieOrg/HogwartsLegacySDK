#pragma once
#include <cstdint>
#include "ERoundingMode.hpp"
#include "FLinearColor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
struct FPolyglotTextData;
struct FTransform;
class UObject;
struct FTimespan;
struct FDateTime;
#pragma pack(push, 1)
class UKismetTextLibrary : public UBlueprintFunctionLibrary {
public:
    static UKismetTextLibrary* StaticClass();
    static void TextTrimTrailing();
    static void TextTrimPrecedingAndTrailing();
    static void TextTrimPreceding();
    static void TextToUpper();
    static void TextToLower();
    static void TextIsTransient();
    static void TextIsFromStringTable();
    static void TextIsEmpty();
    static void TextIsCultureInvariant();
    static void TextFromStringTable(FName TableId, FString Key);
    static void StringTableIdAndKeyFromText();
    static void PolyglotDataToText(FPolyglotTextData& PolyglotData);
    static void NotEqual_TextText();
    static void NotEqual_IgnoreCase_TextText();
    static void IsPolyglotDataValid(FPolyglotTextData& PolyglotData, bool& IsValid);
    static void GetEmptyText();
    static void Format();
    static void FindTextInLocalizationTable(FString Namespace, FString Key);
    static void EqualEqual_TextText();
    static void EqualEqual_IgnoreCase_TextText();
    static void Conv_VectorToText(FVector InVec);
    static void Conv_Vector2dToText(FVector2D InVec);
    static void Conv_TransformToText(FTransform& InTrans);
    static void Conv_TextToString();
    static void Conv_StringToText(FString inString);
    static void Conv_RotatorToText(FRotator InRot);
    static void Conv_ObjectToText(UObject* InObj);
    static void Conv_NameToText(FName InName);
    static void Conv_IntToText(int32_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits);
    static void Conv_Int64ToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits);
    static void Conv_FloatToText(float Value, ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits);
    static void Conv_ColorToText(FLinearColor InColor);
    static void Conv_ByteToText(uint8_t Value);
    static void Conv_BoolToText(bool InBool);
    static void AsTimeZoneTime_DateTime(FDateTime& InDateTime, FString InTimeZone);
    static void AsTimeZoneDateTime_DateTime(FDateTime& InDateTime, FString InTimeZone);
    static void AsTimeZoneDate_DateTime(FDateTime& InDateTime, FString InTimeZone);
    static void AsTimespan_Timespan(FTimespan& InTimespan);
    static void AsTime_DateTime(FDateTime& In);
    static void AsPercent_Float(float Value, ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits);
    static void AsDateTime_DateTime(FDateTime& In);
    static void AsDate_DateTime(FDateTime& InDateTime);
    static void AsCurrencyBase(int32_t BaseValue, FString CurrencyCode);
    static void AsCurrency_Integer(int32_t Value, ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, FString CurrencyCode);
    static void AsCurrency_Float(float Value, ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, FString CurrencyCode);
}; // Size: 0x28
#pragma pack(pop)
