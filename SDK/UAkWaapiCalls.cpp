#include "FAKWaapiJsonObject.hpp"
#include "FAkWaapiSubscriptionId.hpp"
#include "FAkWaapiUri.hpp"
#include "UAkWaapiCalls.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
void UAkWaapiCalls::RegisterWaapiProjectLoadedCallback() {}
UAkWaapiCalls* UAkWaapiCalls::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkWaapiCalls");
    return (UAkWaapiCalls*)res;
}
void UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToText(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId) {}
FAKWaapiJsonObject UAkWaapiCalls::Unsubscribe(FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiCalls.Unsubscribe"));
    struct Params_Unsubscribe {
        FAkWaapiSubscriptionId SubscriptionId; // 0x0
        bool UnsubscriptionDone; // 0x8
        char pad_9[0x7];
        FAKWaapiJsonObject ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Unsubscribe params{};
    params.SubscriptionId = (FAkWaapiSubscriptionId)SubscriptionId;
    params.UnsubscriptionDone = (bool)UnsubscriptionDone;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SubscriptionId = params.SubscriptionId;
    UnsubscriptionDone = params.UnsubscriptionDone;
    return (FAKWaapiJsonObject)params.ReturnValue;
}
void UAkWaapiCalls::SubscribeToWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiOptions) {}
void UAkWaapiCalls::RegisterWaapiConnectionLostCallback() {}
void UAkWaapiCalls::SetSubscriptionID(FAkWaapiSubscriptionId& Subscription, int32_t ID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiCalls.SetSubscriptionID"));
    struct Params_SetSubscriptionID {
        FAkWaapiSubscriptionId Subscription; // 0x0
        int32_t ID; // 0x8
    }; // Size: 0xc
    Params_SetSubscriptionID params{};
    params.Subscription = (FAkWaapiSubscriptionId)Subscription;
    params.ID = (int32_t)ID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Subscription = params.Subscription;
}
int32_t UAkWaapiCalls::GetSubscriptionID(FAkWaapiSubscriptionId& Subscription) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiCalls.GetSubscriptionID"));
    struct Params_GetSubscriptionID {
        FAkWaapiSubscriptionId Subscription; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetSubscriptionID params{};
    params.Subscription = (FAkWaapiSubscriptionId)Subscription;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Subscription = params.Subscription;
    return (int32_t)params.ReturnValue;
}
FString UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToString(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString"));
    struct Params_Conv_FAkWaapiSubscriptionIdToString {
        FAkWaapiSubscriptionId INAkWaapiSubscriptionId; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_Conv_FAkWaapiSubscriptionIdToString params{};
    params.INAkWaapiSubscriptionId = (FAkWaapiSubscriptionId)INAkWaapiSubscriptionId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    INAkWaapiSubscriptionId = params.INAkWaapiSubscriptionId;
    return (FString)params.ReturnValue;
}
FAKWaapiJsonObject UAkWaapiCalls::CallWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiArgs, FAKWaapiJsonObject& WaapiOptions) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiCalls.CallWaapi"));
    struct Params_CallWaapi {
        FAkWaapiUri WaapiUri; // 0x0
        FAKWaapiJsonObject WaapiArgs; // 0x10
        FAKWaapiJsonObject WaapiOptions; // 0x20
        FAKWaapiJsonObject ReturnValue; // 0x30
    }; // Size: 0x40
    Params_CallWaapi params{};
    params.WaapiUri = (FAkWaapiUri)WaapiUri;
    params.WaapiArgs = (FAKWaapiJsonObject)WaapiArgs;
    params.WaapiOptions = (FAKWaapiJsonObject)WaapiOptions;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WaapiUri = params.WaapiUri;
    WaapiArgs = params.WaapiArgs;
    WaapiOptions = params.WaapiOptions;
    return (FAKWaapiJsonObject)params.ReturnValue;
}
