#pragma once
#include <cstdint>
#include "FAKWaapiJsonObject.hpp"
#include "UBlueprintFunctionLibrary.hpp"
struct FAkWaapiSubscriptionId;
struct FAkWaapiUri;
#pragma pack(push, 1)
class UAkWaapiCalls : public UBlueprintFunctionLibrary {
public:
    static UAkWaapiCalls* StaticClass();
    static FAKWaapiJsonObject Unsubscribe(FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone);
    static void SubscribeToWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiOptions);
    static void SetSubscriptionID(FAkWaapiSubscriptionId& Subscription, int32_t ID);
    static void RegisterWaapiProjectLoadedCallback();
    static void RegisterWaapiConnectionLostCallback();
    static int32_t GetSubscriptionID(FAkWaapiSubscriptionId& Subscription);
    static void Conv_FAkWaapiSubscriptionIdToText(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
    static FString Conv_FAkWaapiSubscriptionIdToString(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
    static FAKWaapiJsonObject CallWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiArgs, FAKWaapiJsonObject& WaapiOptions);
}; // Size: 0x28
#pragma pack(pop)
