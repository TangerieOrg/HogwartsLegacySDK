#include "AActor.hpp"
#include "ACameraStackLookAtTargetActor.hpp"
#include "ECameraStackLookAtStrength.hpp"
#include "FVector.hpp"
#include "UCameraStackStatics.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixCameraStackStatics.hpp"
UPhoenixCameraStackStatics* UPhoenixCameraStackStatics::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixCameraStackStatics");
    return (UPhoenixCameraStackStatics*)res;
}
void UPhoenixCameraStackStatics::SetPlayerCameraLookAtActorForDuration(UObject* WorldContextObject, AActor* LookAtActor, float Duration, ECameraStackLookAtStrength LookAtStrength, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraStackStatics.SetPlayerCameraLookAtActorForDuration"));
    struct Params_SetPlayerCameraLookAtActorForDuration {
        UObject* WorldContextObject; // 0x0
        AActor* LookAtActor; // 0x8
        float Duration; // 0x10
        ECameraStackLookAtStrength LookAtStrength; // 0x14
        char pad_15[0x3];
        int32_t PlayerIndex; // 0x18
    }; // Size: 0x1c
    Params_SetPlayerCameraLookAtActorForDuration params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LookAtActor = (AActor*)LookAtActor;
    params.Duration = (float)Duration;
    params.LookAtStrength = (ECameraStackLookAtStrength)LookAtStrength;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
ACameraStackLookAtTargetActor* UPhoenixCameraStackStatics::SpawnCameraLookAtTargetActor(UObject* WorldContextObject, FVector WorldLocation, ECameraStackLookAtStrength LookAtStrength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraStackStatics.SpawnCameraLookAtTargetActor"));
    struct Params_SpawnCameraLookAtTargetActor {
        UObject* WorldContextObject; // 0x0
        FVector WorldLocation; // 0x8
        ECameraStackLookAtStrength LookAtStrength; // 0x14
        char pad_15[0x3];
        ACameraStackLookAtTargetActor* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_SpawnCameraLookAtTargetActor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.WorldLocation = (FVector)WorldLocation;
    params.LookAtStrength = (ECameraStackLookAtStrength)LookAtStrength;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ACameraStackLookAtTargetActor*)params.ReturnValue;
}
void UPhoenixCameraStackStatics::SetPlayerCameraLookAtActor(UObject* WorldContextObject, AActor* LookAtActor, ECameraStackLookAtStrength LookAtStrength, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraStackStatics.SetPlayerCameraLookAtActor"));
    struct Params_SetPlayerCameraLookAtActor {
        UObject* WorldContextObject; // 0x0
        AActor* LookAtActor; // 0x8
        ECameraStackLookAtStrength LookAtStrength; // 0x10
        char pad_11[0x3];
        int32_t PlayerIndex; // 0x14
    }; // Size: 0x18
    Params_SetPlayerCameraLookAtActor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LookAtActor = (AActor*)LookAtActor;
    params.LookAtStrength = (ECameraStackLookAtStrength)LookAtStrength;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraStackStatics::SetPlayerCameraLookAtLocationForDuration(UObject* WorldContextObject, FVector LookAtLocation, float Duration, ECameraStackLookAtStrength LookAtStrength, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraStackStatics.SetPlayerCameraLookAtLocationForDuration"));
    struct Params_SetPlayerCameraLookAtLocationForDuration {
        UObject* WorldContextObject; // 0x0
        FVector LookAtLocation; // 0x8
        float Duration; // 0x14
        ECameraStackLookAtStrength LookAtStrength; // 0x18
        char pad_19[0x3];
        int32_t PlayerIndex; // 0x1c
    }; // Size: 0x20
    Params_SetPlayerCameraLookAtLocationForDuration params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LookAtLocation = (FVector)LookAtLocation;
    params.Duration = (float)Duration;
    params.LookAtStrength = (ECameraStackLookAtStrength)LookAtStrength;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraStackStatics::ReleasePlayerCameraLookAt(UObject* WorldContextObject, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraStackStatics.ReleasePlayerCameraLookAt"));
    struct Params_ReleasePlayerCameraLookAt {
        UObject* WorldContextObject; // 0x0
        int32_t PlayerIndex; // 0x8
    }; // Size: 0xc
    Params_ReleasePlayerCameraLookAt params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraStackStatics::SetPlayerCameraLookAtLocation(UObject* WorldContextObject, FVector LookAtLocation, ECameraStackLookAtStrength LookAtStrength, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraStackStatics.SetPlayerCameraLookAtLocation"));
    struct Params_SetPlayerCameraLookAtLocation {
        UObject* WorldContextObject; // 0x0
        FVector LookAtLocation; // 0x8
        ECameraStackLookAtStrength LookAtStrength; // 0x14
        char pad_15[0x3];
        int32_t PlayerIndex; // 0x18
    }; // Size: 0x1c
    Params_SetPlayerCameraLookAtLocation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LookAtLocation = (FVector)LookAtLocation;
    params.LookAtStrength = (ECameraStackLookAtStrength)LookAtStrength;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPhoenixCameraStackStatics::PlayWorldCameraShakeScale(UObject* WorldContextObject, UClass* Shake, FVector epicenter, float InnerRadius, float OuterRadius, float Falloff, float InScale, bool bOrientShakeTowardsEpicenter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraStackStatics.PlayWorldCameraShakeScale"));
    struct Params_PlayWorldCameraShakeScale {
        UObject* WorldContextObject; // 0x0
        UClass* Shake; // 0x8
        FVector epicenter; // 0x10
        float InnerRadius; // 0x1c
        float OuterRadius; // 0x20
        float Falloff; // 0x24
        float InScale; // 0x28
        bool bOrientShakeTowardsEpicenter; // 0x2c
    }; // Size: 0x2d
    Params_PlayWorldCameraShakeScale params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Shake = (UClass*)Shake;
    params.epicenter = (FVector)epicenter;
    params.InnerRadius = (float)InnerRadius;
    params.OuterRadius = (float)OuterRadius;
    params.Falloff = (float)Falloff;
    params.InScale = (float)InScale;
    params.bOrientShakeTowardsEpicenter = (bool)bOrientShakeTowardsEpicenter;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
ACameraStackLookAtTargetActor* UPhoenixCameraStackStatics::GetLookAtTargetActorWithStrength(UObject* WorldContextObject, ECameraStackLookAtStrength LookAtStrength, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraStackStatics.GetLookAtTargetActorWithStrength"));
    struct Params_GetLookAtTargetActorWithStrength {
        UObject* WorldContextObject; // 0x0
        ECameraStackLookAtStrength LookAtStrength; // 0x8
        char pad_9[0x3];
        int32_t PlayerIndex; // 0xc
        ACameraStackLookAtTargetActor* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetLookAtTargetActorWithStrength params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LookAtStrength = (ECameraStackLookAtStrength)LookAtStrength;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ACameraStackLookAtTargetActor*)params.ReturnValue;
}
ACameraStackLookAtTargetActor* UPhoenixCameraStackStatics::GetHighestPriorityLookAtTargetActor(UObject* WorldContextObject, int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCameraStackStatics.GetHighestPriorityLookAtTargetActor"));
    struct Params_GetHighestPriorityLookAtTargetActor {
        UObject* WorldContextObject; // 0x0
        int32_t PlayerIndex; // 0x8
        char pad_c[0x4];
        ACameraStackLookAtTargetActor* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetHighestPriorityLookAtTargetActor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.PlayerIndex = (int32_t)PlayerIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ACameraStackLookAtTargetActor*)params.ReturnValue;
}
