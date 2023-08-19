#include "ERoundingMode.hpp"
#include "FDateTime.hpp"
#include "FLinearColor.hpp"
#include "FPolyglotTextData.hpp"
#include "FRotator.hpp"
#include "FTimespan.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UKismetTextLibrary.hpp"
#include "UObject.hpp"
void UKismetTextLibrary::TextTrimPrecedingAndTrailing() {}
void UKismetTextLibrary::TextIsFromStringTable() {}
UKismetTextLibrary* UKismetTextLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.KismetTextLibrary");
    return (UKismetTextLibrary*)res;
}
void UKismetTextLibrary::TextTrimTrailing() {}
void UKismetTextLibrary::TextIsTransient() {}
void UKismetTextLibrary::Conv_ByteToText(uint8_t Value) {}
void UKismetTextLibrary::TextTrimPreceding() {}
void UKismetTextLibrary::TextToUpper() {}
void UKismetTextLibrary::EqualEqual_IgnoreCase_TextText() {}
void UKismetTextLibrary::TextToLower() {}
void UKismetTextLibrary::TextIsEmpty() {}
void UKismetTextLibrary::AsTime_DateTime(FDateTime& In) {}
void UKismetTextLibrary::TextIsCultureInvariant() {}
void UKismetTextLibrary::AsCurrencyBase(int32_t BaseValue, FString CurrencyCode) {}
void UKismetTextLibrary::TextFromStringTable(FName TableId, FString Key) {}
void UKismetTextLibrary::StringTableIdAndKeyFromText() {}
void UKismetTextLibrary::PolyglotDataToText(FPolyglotTextData& PolyglotData) {}
void UKismetTextLibrary::NotEqual_TextText() {}
void UKismetTextLibrary::NotEqual_IgnoreCase_TextText() {}
void UKismetTextLibrary::IsPolyglotDataValid(FPolyglotTextData& PolyglotData, bool& IsValid) {}
void UKismetTextLibrary::Conv_VectorToText(FVector InVec) {}
void UKismetTextLibrary::GetEmptyText() {}
void UKismetTextLibrary::Format() {}
void UKismetTextLibrary::FindTextInLocalizationTable(FString Namespace, FString Key) {}
void UKismetTextLibrary::Conv_TransformToText(FTransform& InTrans) {}
void UKismetTextLibrary::EqualEqual_TextText() {}
void UKismetTextLibrary::Conv_Vector2dToText(FVector2D InVec) {}
void UKismetTextLibrary::Conv_TextToString() {}
void UKismetTextLibrary::Conv_StringToText(FString inString) {}
void UKismetTextLibrary::Conv_RotatorToText(FRotator InRot) {}
void UKismetTextLibrary::Conv_ObjectToText(UObject* InObj) {}
void UKismetTextLibrary::AsCurrency_Integer(int32_t Value, ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, FString CurrencyCode) {}
void UKismetTextLibrary::Conv_NameToText(FName InName) {}
void UKismetTextLibrary::Conv_IntToText(int32_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits) {}
void UKismetTextLibrary::AsTimeZoneTime_DateTime(FDateTime& InDateTime, FString InTimeZone) {}
void UKismetTextLibrary::Conv_Int64ToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits) {}
void UKismetTextLibrary::Conv_FloatToText(float Value, ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits) {}
void UKismetTextLibrary::Conv_ColorToText(FLinearColor InColor) {}
void UKismetTextLibrary::Conv_BoolToText(bool InBool) {}
void UKismetTextLibrary::AsTimeZoneDateTime_DateTime(FDateTime& InDateTime, FString InTimeZone) {}
void UKismetTextLibrary::AsTimeZoneDate_DateTime(FDateTime& InDateTime, FString InTimeZone) {}
void UKismetTextLibrary::AsTimespan_Timespan(FTimespan& InTimespan) {}
void UKismetTextLibrary::AsPercent_Float(float Value, ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits) {}
void UKismetTextLibrary::AsDateTime_DateTime(FDateTime& In) {}
void UKismetTextLibrary::AsDate_DateTime(FDateTime& InDateTime) {}
void UKismetTextLibrary::AsCurrency_Float(float Value, ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, FString CurrencyCode) {}
