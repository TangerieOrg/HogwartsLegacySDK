#include "AActor.hpp"
#include "UAkGameObject.hpp"
#include "UAvaAudioCachedRTPC.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
void UAvaAudioCachedRTPC::AvaAudioSetGlobalState(FName StateName, FName StateValue, bool& bSuccess, bool bForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AvaAudioCachedRTPC.AvaAudioSetGlobalState"));
    struct Params_AvaAudioSetGlobalState {
        FName StateName; // 0x0
        FName StateValue; // 0x8
        bool bSuccess; // 0x10
        bool bForce; // 0x11
    }; // Size: 0x12
    Params_AvaAudioSetGlobalState params{};
    params.StateName = (FName)StateName;
    params.StateValue = (FName)StateValue;
    params.bSuccess = (bool)bSuccess;
    params.bForce = (bool)bForce;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
UAvaAudioCachedRTPC* UAvaAudioCachedRTPC::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AvaAudioCachedRTPC");
    return (UAvaAudioCachedRTPC*)res;
}
void UAvaAudioCachedRTPC::AvaAudioSetGlobalRTPC(FName RTPCName, float RTPCValue, bool& bSuccess, int32_t InterpolationTimeMilliseconds, float Threshold, bool bForce, bool bHoldMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AvaAudioCachedRTPC.AvaAudioSetGlobalRTPC"));
    struct Params_AvaAudioSetGlobalRTPC {
        FName RTPCName; // 0x0
        float RTPCValue; // 0x8
        bool bSuccess; // 0xc
        char pad_d[0x3];
        int32_t InterpolationTimeMilliseconds; // 0x10
        float Threshold; // 0x14
        bool bForce; // 0x18
        bool bHoldMax; // 0x19
    }; // Size: 0x1a
    Params_AvaAudioSetGlobalRTPC params{};
    params.RTPCName = (FName)RTPCName;
    params.RTPCValue = (float)RTPCValue;
    params.bSuccess = (bool)bSuccess;
    params.InterpolationTimeMilliseconds = (int32_t)InterpolationTimeMilliseconds;
    params.Threshold = (float)Threshold;
    params.bForce = (bool)bForce;
    params.bHoldMax = (bool)bHoldMax;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UAvaAudioCachedRTPC::AvaAudioSetGameObjectRTPC(UAkGameObject* AudioObject, FName RTPCName, float RTPCValue, bool& bSuccess, int32_t InterpolationTimeMilliseconds, float Threshold, bool bForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AvaAudioCachedRTPC.AvaAudioSetGameObjectRTPC"));
    struct Params_AvaAudioSetGameObjectRTPC {
        UAkGameObject* AudioObject; // 0x0
        FName RTPCName; // 0x8
        float RTPCValue; // 0x10
        bool bSuccess; // 0x14
        char pad_15[0x3];
        int32_t InterpolationTimeMilliseconds; // 0x18
        float Threshold; // 0x1c
        bool bForce; // 0x20
    }; // Size: 0x21
    Params_AvaAudioSetGameObjectRTPC params{};
    params.AudioObject = (UAkGameObject*)AudioObject;
    params.RTPCName = (FName)RTPCName;
    params.RTPCValue = (float)RTPCValue;
    params.bSuccess = (bool)bSuccess;
    params.InterpolationTimeMilliseconds = (int32_t)InterpolationTimeMilliseconds;
    params.Threshold = (float)Threshold;
    params.bForce = (bool)bForce;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UAvaAudioCachedRTPC::AvaAudioSetActorRTPC(AActor* Actor, FName RTPCName, float RTPCValue, bool& bSuccess, int32_t InterpolationTimeMilliseconds, float Threshold, bool bForce) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AvaAudioCachedRTPC.AvaAudioSetActorRTPC"));
    struct Params_AvaAudioSetActorRTPC {
        AActor* Actor; // 0x0
        FName RTPCName; // 0x8
        float RTPCValue; // 0x10
        bool bSuccess; // 0x14
        char pad_15[0x3];
        int32_t InterpolationTimeMilliseconds; // 0x18
        float Threshold; // 0x1c
        bool bForce; // 0x20
    }; // Size: 0x21
    Params_AvaAudioSetActorRTPC params{};
    params.Actor = (AActor*)Actor;
    params.RTPCName = (FName)RTPCName;
    params.RTPCValue = (float)RTPCValue;
    params.bSuccess = (bool)bSuccess;
    params.InterpolationTimeMilliseconds = (int32_t)InterpolationTimeMilliseconds;
    params.Threshold = (float)Threshold;
    params.bForce = (bool)bForce;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UAvaAudioCachedRTPC::AvaAudioResetGlobalState(FName StateName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AvaAudioCachedRTPC.AvaAudioResetGlobalState"));
    struct Params_AvaAudioResetGlobalState {
        FName StateName; // 0x0
    }; // Size: 0x8
    Params_AvaAudioResetGlobalState params{};
    params.StateName = (FName)StateName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAvaAudioCachedRTPC::AvaAudioResetGlobalRTPC(FName RTPCName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AvaAudioCachedRTPC.AvaAudioResetGlobalRTPC"));
    struct Params_AvaAudioResetGlobalRTPC {
        FName RTPCName; // 0x0
    }; // Size: 0x8
    Params_AvaAudioResetGlobalRTPC params{};
    params.RTPCName = (FName)RTPCName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAvaAudioCachedRTPC::AvaAudioResetGameObjectRTPC(UAkGameObject* AudioObject, FName RTPCName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AvaAudioCachedRTPC.AvaAudioResetGameObjectRTPC"));
    struct Params_AvaAudioResetGameObjectRTPC {
        UAkGameObject* AudioObject; // 0x0
        FName RTPCName; // 0x8
    }; // Size: 0x10
    Params_AvaAudioResetGameObjectRTPC params{};
    params.AudioObject = (UAkGameObject*)AudioObject;
    params.RTPCName = (FName)RTPCName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAvaAudioCachedRTPC::AvaAudioResetActorRTPC(AActor* Actor, FName RTPCName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AvaAudioCachedRTPC.AvaAudioResetActorRTPC"));
    struct Params_AvaAudioResetActorRTPC {
        AActor* Actor; // 0x0
        FName RTPCName; // 0x8
    }; // Size: 0x10
    Params_AvaAudioResetActorRTPC params{};
    params.Actor = (AActor*)Actor;
    params.RTPCName = (FName)RTPCName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAvaAudioCachedRTPC::AvaAudioGetGlobalState(FName StateName, bool& bSuccess, FName& StateValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AvaAudioCachedRTPC.AvaAudioGetGlobalState"));
    struct Params_AvaAudioGetGlobalState {
        FName StateName; // 0x0
        bool bSuccess; // 0x8
        char pad_9[0x3];
        FName StateValue; // 0xc
    }; // Size: 0x14
    Params_AvaAudioGetGlobalState params{};
    params.StateName = (FName)StateName;
    params.bSuccess = (bool)bSuccess;
    params.StateValue = (FName)StateValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
    StateValue = params.StateValue;
}
void UAvaAudioCachedRTPC::AvaAudioGetGlobalRTPC(FName RTPCName, bool& bSuccess, float& RTPCValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AvaAudioCachedRTPC.AvaAudioGetGlobalRTPC"));
    struct Params_AvaAudioGetGlobalRTPC {
        FName RTPCName; // 0x0
        bool bSuccess; // 0x8
        char pad_9[0x3];
        float RTPCValue; // 0xc
    }; // Size: 0x10
    Params_AvaAudioGetGlobalRTPC params{};
    params.RTPCName = (FName)RTPCName;
    params.bSuccess = (bool)bSuccess;
    params.RTPCValue = (float)RTPCValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
    RTPCValue = params.RTPCValue;
}
void UAvaAudioCachedRTPC::AvaAudioGetGameObjectRTPC(UAkGameObject* AudioObject, FName RTPCName, bool& bSuccess, float& RTPCValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AvaAudioCachedRTPC.AvaAudioGetGameObjectRTPC"));
    struct Params_AvaAudioGetGameObjectRTPC {
        UAkGameObject* AudioObject; // 0x0
        FName RTPCName; // 0x8
        bool bSuccess; // 0x10
        char pad_11[0x3];
        float RTPCValue; // 0x14
    }; // Size: 0x18
    Params_AvaAudioGetGameObjectRTPC params{};
    params.AudioObject = (UAkGameObject*)AudioObject;
    params.RTPCName = (FName)RTPCName;
    params.bSuccess = (bool)bSuccess;
    params.RTPCValue = (float)RTPCValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
    RTPCValue = params.RTPCValue;
}
void UAvaAudioCachedRTPC::AvaAudioGetActorRTPC(AActor* Actor, FName RTPCName, bool& bSuccess, float& RTPCValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AvaAudioCachedRTPC.AvaAudioGetActorRTPC"));
    struct Params_AvaAudioGetActorRTPC {
        AActor* Actor; // 0x0
        FName RTPCName; // 0x8
        bool bSuccess; // 0x10
        char pad_11[0x3];
        float RTPCValue; // 0x14
    }; // Size: 0x18
    Params_AvaAudioGetActorRTPC params{};
    params.Actor = (AActor*)Actor;
    params.RTPCName = (FName)RTPCName;
    params.bSuccess = (bool)bSuccess;
    params.RTPCValue = (float)RTPCValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
    RTPCValue = params.RTPCValue;
}
