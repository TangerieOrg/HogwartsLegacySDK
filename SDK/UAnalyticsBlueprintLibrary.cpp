#include "FAnalyticsEventAttr.hpp"
#include "UAnalyticsBlueprintLibrary.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
void UAnalyticsBlueprintLibrary::SetGender(FString Gender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender"));
    struct Params_SetGender {
        FString Gender; // 0x0
    }; // Size: 0x10
    Params_SetGender params{};
    params.Gender = (FString)Gender;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FString UAnalyticsBlueprintLibrary::GetUserId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId"));
    struct Params_GetUserId {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetUserId params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UAnalyticsBlueprintLibrary::RecordErrorWithAttributes(FString Error, TArray<FAnalyticsEventAttr>& Attributes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes"));
    struct Params_RecordErrorWithAttributes {
        FString Error; // 0x0
        TArray<FAnalyticsEventAttr> Attributes; // 0x10
    }; // Size: 0x20
    Params_RecordErrorWithAttributes params{};
    params.Error = (FString)Error;
    params.Attributes = (TArray<FAnalyticsEventAttr>)Attributes;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Attributes = params.Attributes;
}
UAnalyticsBlueprintLibrary* UAnalyticsBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary");
    return (UAnalyticsBlueprintLibrary*)res;
}
bool UAnalyticsBlueprintLibrary::StartSessionWithAttributes(TArray<FAnalyticsEventAttr>& Attributes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes"));
    struct Params_StartSessionWithAttributes {
        TArray<FAnalyticsEventAttr> Attributes; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_StartSessionWithAttributes params{};
    params.Attributes = (TArray<FAnalyticsEventAttr>)Attributes;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Attributes = params.Attributes;
    return (bool)params.ReturnValue;
}
bool UAnalyticsBlueprintLibrary::StartSession() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession"));
    struct Params_StartSession {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_StartSession params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UAnalyticsBlueprintLibrary::SetUserId(FString UserId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId"));
    struct Params_SetUserId {
        FString UserId; // 0x0
    }; // Size: 0x10
    Params_SetUserId params{};
    params.UserId = (FString)UserId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsBlueprintLibrary::SetLocation(FString Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation"));
    struct Params_SetLocation {
        FString Location; // 0x0
    }; // Size: 0x10
    Params_SetLocation params{};
    params.Location = (FString)Location;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsBlueprintLibrary::SetSessionId(FString SessionId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId"));
    struct Params_SetSessionId {
        FString SessionId; // 0x0
    }; // Size: 0x10
    Params_SetSessionId params{};
    params.SessionId = (FString)SessionId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsBlueprintLibrary::SetBuildInfo(FString BuildInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo"));
    struct Params_SetBuildInfo {
        FString BuildInfo; // 0x0
    }; // Size: 0x10
    Params_SetBuildInfo params{};
    params.BuildInfo = (FString)BuildInfo;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FString UAnalyticsBlueprintLibrary::GetSessionId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId"));
    struct Params_GetSessionId {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetSessionId params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UAnalyticsBlueprintLibrary::SetAge(int32_t Age) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge"));
    struct Params_SetAge {
        int32_t Age; // 0x0
    }; // Size: 0x4
    Params_SetAge params{};
    params.Age = (int32_t)Age;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsBlueprintLibrary::EndSession() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession"));
    struct Params_EndSession {
    }; // Size: 0x0
    Params_EndSession params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsBlueprintLibrary::RecordSimpleItemPurchaseWithAttributes(FString ItemId, int32_t ItemQuantity, TArray<FAnalyticsEventAttr>& Attributes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes"));
    struct Params_RecordSimpleItemPurchaseWithAttributes {
        FString ItemId; // 0x0
        int32_t ItemQuantity; // 0x10
        char pad_14[0x4];
        TArray<FAnalyticsEventAttr> Attributes; // 0x18
    }; // Size: 0x28
    Params_RecordSimpleItemPurchaseWithAttributes params{};
    params.ItemId = (FString)ItemId;
    params.ItemQuantity = (int32_t)ItemQuantity;
    params.Attributes = (TArray<FAnalyticsEventAttr>)Attributes;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Attributes = params.Attributes;
}
void UAnalyticsBlueprintLibrary::RecordError(FString Error) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError"));
    struct Params_RecordError {
        FString Error; // 0x0
    }; // Size: 0x10
    Params_RecordError params{};
    params.Error = (FString)Error;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsBlueprintLibrary::RecordProgressWithAttributes(FString ProgressType, FString ProgressName, TArray<FAnalyticsEventAttr>& Attributes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes"));
    struct Params_RecordProgressWithAttributes {
        FString ProgressType; // 0x0
        FString ProgressName; // 0x10
        TArray<FAnalyticsEventAttr> Attributes; // 0x20
    }; // Size: 0x30
    Params_RecordProgressWithAttributes params{};
    params.ProgressType = (FString)ProgressType;
    params.ProgressName = (FString)ProgressName;
    params.Attributes = (TArray<FAnalyticsEventAttr>)Attributes;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Attributes = params.Attributes;
}
void UAnalyticsBlueprintLibrary::RecordSimpleItemPurchase(FString ItemId, int32_t ItemQuantity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase"));
    struct Params_RecordSimpleItemPurchase {
        FString ItemId; // 0x0
        int32_t ItemQuantity; // 0x10
    }; // Size: 0x14
    Params_RecordSimpleItemPurchase params{};
    params.ItemId = (FString)ItemId;
    params.ItemQuantity = (int32_t)ItemQuantity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FAnalyticsEventAttr UAnalyticsBlueprintLibrary::MakeEventAttribute(FString AttributeName, FString AttributeValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute"));
    struct Params_MakeEventAttribute {
        FString AttributeName; // 0x0
        FString AttributeValue; // 0x10
        FAnalyticsEventAttr ReturnValue; // 0x20
    }; // Size: 0x40
    Params_MakeEventAttribute params{};
    params.AttributeName = (FString)AttributeName;
    params.AttributeValue = (FString)AttributeValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FAnalyticsEventAttr)params.ReturnValue;
}
void UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchaseWithAttributes(FString GameCurrencyType, int32_t GameCurrencyAmount, TArray<FAnalyticsEventAttr>& Attributes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes"));
    struct Params_RecordSimpleCurrencyPurchaseWithAttributes {
        FString GameCurrencyType; // 0x0
        int32_t GameCurrencyAmount; // 0x10
        char pad_14[0x4];
        TArray<FAnalyticsEventAttr> Attributes; // 0x18
    }; // Size: 0x28
    Params_RecordSimpleCurrencyPurchaseWithAttributes params{};
    params.GameCurrencyType = (FString)GameCurrencyType;
    params.GameCurrencyAmount = (int32_t)GameCurrencyAmount;
    params.Attributes = (TArray<FAnalyticsEventAttr>)Attributes;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Attributes = params.Attributes;
}
void UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchase(FString GameCurrencyType, int32_t GameCurrencyAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase"));
    struct Params_RecordSimpleCurrencyPurchase {
        FString GameCurrencyType; // 0x0
        int32_t GameCurrencyAmount; // 0x10
    }; // Size: 0x14
    Params_RecordSimpleCurrencyPurchase params{};
    params.GameCurrencyType = (FString)GameCurrencyType;
    params.GameCurrencyAmount = (int32_t)GameCurrencyAmount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsBlueprintLibrary::RecordProgressWithFullHierarchyAndAttributes(FString ProgressType, TArray<FString>& ProgressNames, TArray<FAnalyticsEventAttr>& Attributes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes"));
    struct Params_RecordProgressWithFullHierarchyAndAttributes {
        FString ProgressType; // 0x0
        TArray<FString> ProgressNames; // 0x10
        TArray<FAnalyticsEventAttr> Attributes; // 0x20
    }; // Size: 0x30
    Params_RecordProgressWithFullHierarchyAndAttributes params{};
    params.ProgressType = (FString)ProgressType;
    params.ProgressNames = (TArray<FString>)ProgressNames;
    params.Attributes = (TArray<FAnalyticsEventAttr>)Attributes;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ProgressNames = params.ProgressNames;
    Attributes = params.Attributes;
}
void UAnalyticsBlueprintLibrary::RecordProgress(FString ProgressType, FString ProgressName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress"));
    struct Params_RecordProgress {
        FString ProgressType; // 0x0
        FString ProgressName; // 0x10
    }; // Size: 0x20
    Params_RecordProgress params{};
    params.ProgressType = (FString)ProgressType;
    params.ProgressName = (FString)ProgressName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsBlueprintLibrary::RecordCurrencyGiven(FString GameCurrencyType, int32_t GameCurrencyAmount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven"));
    struct Params_RecordCurrencyGiven {
        FString GameCurrencyType; // 0x0
        int32_t GameCurrencyAmount; // 0x10
    }; // Size: 0x14
    Params_RecordCurrencyGiven params{};
    params.GameCurrencyType = (FString)GameCurrencyType;
    params.GameCurrencyAmount = (int32_t)GameCurrencyAmount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsBlueprintLibrary::RecordItemPurchase(FString ItemId, FString Currency, int32_t PerItemCost, int32_t ItemQuantity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase"));
    struct Params_RecordItemPurchase {
        FString ItemId; // 0x0
        FString Currency; // 0x10
        int32_t PerItemCost; // 0x20
        int32_t ItemQuantity; // 0x24
    }; // Size: 0x28
    Params_RecordItemPurchase params{};
    params.ItemId = (FString)ItemId;
    params.Currency = (FString)Currency;
    params.PerItemCost = (int32_t)PerItemCost;
    params.ItemQuantity = (int32_t)ItemQuantity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsBlueprintLibrary::RecordEventWithAttributes(FString EventName, TArray<FAnalyticsEventAttr>& Attributes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes"));
    struct Params_RecordEventWithAttributes {
        FString EventName; // 0x0
        TArray<FAnalyticsEventAttr> Attributes; // 0x10
    }; // Size: 0x20
    Params_RecordEventWithAttributes params{};
    params.EventName = (FString)EventName;
    params.Attributes = (TArray<FAnalyticsEventAttr>)Attributes;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Attributes = params.Attributes;
}
void UAnalyticsBlueprintLibrary::RecordEventWithAttribute(FString EventName, FString AttributeName, FString AttributeValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute"));
    struct Params_RecordEventWithAttribute {
        FString EventName; // 0x0
        FString AttributeName; // 0x10
        FString AttributeValue; // 0x20
    }; // Size: 0x30
    Params_RecordEventWithAttribute params{};
    params.EventName = (FString)EventName;
    params.AttributeName = (FString)AttributeName;
    params.AttributeValue = (FString)AttributeValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsBlueprintLibrary::RecordEvent(FString EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent"));
    struct Params_RecordEvent {
        FString EventName; // 0x0
    }; // Size: 0x10
    Params_RecordEvent params{};
    params.EventName = (FString)EventName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsBlueprintLibrary::RecordCurrencyPurchase(FString GameCurrencyType, int32_t GameCurrencyAmount, FString RealCurrencyType, float RealMoneyCost, FString PaymentProvider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase"));
    struct Params_RecordCurrencyPurchase {
        FString GameCurrencyType; // 0x0
        int32_t GameCurrencyAmount; // 0x10
        char pad_14[0x4];
        FString RealCurrencyType; // 0x18
        float RealMoneyCost; // 0x28
        char pad_2c[0x4];
        FString PaymentProvider; // 0x30
    }; // Size: 0x40
    Params_RecordCurrencyPurchase params{};
    params.GameCurrencyType = (FString)GameCurrencyType;
    params.GameCurrencyAmount = (int32_t)GameCurrencyAmount;
    params.RealCurrencyType = (FString)RealCurrencyType;
    params.RealMoneyCost = (float)RealMoneyCost;
    params.PaymentProvider = (FString)PaymentProvider;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsBlueprintLibrary::RecordCurrencyGivenWithAttributes(FString GameCurrencyType, int32_t GameCurrencyAmount, TArray<FAnalyticsEventAttr>& Attributes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes"));
    struct Params_RecordCurrencyGivenWithAttributes {
        FString GameCurrencyType; // 0x0
        int32_t GameCurrencyAmount; // 0x10
        char pad_14[0x4];
        TArray<FAnalyticsEventAttr> Attributes; // 0x18
    }; // Size: 0x28
    Params_RecordCurrencyGivenWithAttributes params{};
    params.GameCurrencyType = (FString)GameCurrencyType;
    params.GameCurrencyAmount = (int32_t)GameCurrencyAmount;
    params.Attributes = (TArray<FAnalyticsEventAttr>)Attributes;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Attributes = params.Attributes;
}
void UAnalyticsBlueprintLibrary::FlushEvents() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents"));
    struct Params_FlushEvents {
    }; // Size: 0x0
    Params_FlushEvents params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
