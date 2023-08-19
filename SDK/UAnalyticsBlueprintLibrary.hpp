#pragma once
#include <cstdint>
#include "FAnalyticsEventAttr.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UAnalyticsBlueprintLibrary* StaticClass();
    static bool StartSessionWithAttributes(TArray<FAnalyticsEventAttr>& Attributes);
    static bool StartSession();
    static void SetUserId(FString UserId);
    static void SetSessionId(FString SessionId);
    static void SetLocation(FString Location);
    static void SetGender(FString Gender);
    static void SetBuildInfo(FString BuildInfo);
    static void SetAge(int32_t Age);
    static void RecordSimpleItemPurchaseWithAttributes(FString ItemId, int32_t ItemQuantity, TArray<FAnalyticsEventAttr>& Attributes);
    static void RecordSimpleItemPurchase(FString ItemId, int32_t ItemQuantity);
    static void RecordSimpleCurrencyPurchaseWithAttributes(FString GameCurrencyType, int32_t GameCurrencyAmount, TArray<FAnalyticsEventAttr>& Attributes);
    static void RecordSimpleCurrencyPurchase(FString GameCurrencyType, int32_t GameCurrencyAmount);
    static void RecordProgressWithFullHierarchyAndAttributes(FString ProgressType, TArray<FString>& ProgressNames, TArray<FAnalyticsEventAttr>& Attributes);
    static void RecordProgressWithAttributes(FString ProgressType, FString ProgressName, TArray<FAnalyticsEventAttr>& Attributes);
    static void RecordProgress(FString ProgressType, FString ProgressName);
    static void RecordItemPurchase(FString ItemId, FString Currency, int32_t PerItemCost, int32_t ItemQuantity);
    static void RecordEventWithAttributes(FString EventName, TArray<FAnalyticsEventAttr>& Attributes);
    static void RecordEventWithAttribute(FString EventName, FString AttributeName, FString AttributeValue);
    static void RecordEvent(FString EventName);
    static void RecordErrorWithAttributes(FString Error, TArray<FAnalyticsEventAttr>& Attributes);
    static void RecordError(FString Error);
    static void RecordCurrencyPurchase(FString GameCurrencyType, int32_t GameCurrencyAmount, FString RealCurrencyType, float RealMoneyCost, FString PaymentProvider);
    static void RecordCurrencyGivenWithAttributes(FString GameCurrencyType, int32_t GameCurrencyAmount, TArray<FAnalyticsEventAttr>& Attributes);
    static void RecordCurrencyGiven(FString GameCurrencyType, int32_t GameCurrencyAmount);
    static FAnalyticsEventAttr MakeEventAttribute(FString AttributeName, FString AttributeValue);
    static FString GetUserId();
    static FString GetSessionId();
    static void FlushEvents();
    static void EndSession();
}; // Size: 0x28
#pragma pack(pop)
