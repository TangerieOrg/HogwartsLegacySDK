#include "AActor.hpp"
#include "AFocusTrigger.hpp"
#include "ATriggerBox.hpp"
#include "EFocusTriggerType.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "SocialActionTypes.hpp"
#include "SocialSemanticIDs.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
void AFocusTrigger::SetTheActionProbablity(float InProbability) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FocusTrigger.SetTheActionProbablity"));
    struct Params_SetTheActionProbablity {
        float InProbability; // 0x0
    }; // Size: 0x4
    Params_SetTheActionProbablity params{};
    params.InProbability = (float)InProbability;
    ProcessEvent(func, &params);
}
void AFocusTrigger::SetTheReaction(SocialActionTypes InSocialAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FocusTrigger.SetTheReaction"));
    struct Params_SetTheReaction {
        SocialActionTypes InSocialAction; // 0x0
    }; // Size: 0x1
    Params_SetTheReaction params{};
    params.InSocialAction = (SocialActionTypes)InSocialAction;
    ProcessEvent(func, &params);
}
AFocusTrigger* AFocusTrigger::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FocusTrigger");
    return (AFocusTrigger*)res;
}
void AFocusTrigger::SetTheFocusProbablity(float InProbability) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FocusTrigger.SetTheFocusProbablity"));
    struct Params_SetTheFocusProbablity {
        float InProbability; // 0x0
    }; // Size: 0x4
    Params_SetTheFocusProbablity params{};
    params.InProbability = (float)InProbability;
    ProcessEvent(func, &params);
}
void AFocusTrigger::SetTheFocusOffset(FVector InFocusOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FocusTrigger.SetTheFocusOffset"));
    struct Params_SetTheFocusOffset {
        FVector InFocusOffset; // 0x0
    }; // Size: 0xc
    Params_SetTheFocusOffset params{};
    params.InFocusOffset = (FVector)InFocusOffset;
    ProcessEvent(func, &params);
}
void AFocusTrigger::SetTheFocusActor(AActor* InFocusActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FocusTrigger.SetTheFocusActor"));
    struct Params_SetTheFocusActor {
        AActor* InFocusActor; // 0x0
    }; // Size: 0x8
    Params_SetTheFocusActor params{};
    params.InFocusActor = (AActor*)InFocusActor;
    ProcessEvent(func, &params);
}
void AFocusTrigger::SetTheEmotion(SocialSemanticIDs InEmotion) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FocusTrigger.SetTheEmotion"));
    struct Params_SetTheEmotion {
        SocialSemanticIDs InEmotion; // 0x0
    }; // Size: 0x1
    Params_SetTheEmotion params{};
    params.InEmotion = (SocialSemanticIDs)InEmotion;
    ProcessEvent(func, &params);
}
void AFocusTrigger::SetPlayerFocusProbablity(float InProbability) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FocusTrigger.SetPlayerFocusProbablity"));
    struct Params_SetPlayerFocusProbablity {
        float InProbability; // 0x0
    }; // Size: 0x4
    Params_SetPlayerFocusProbablity params{};
    params.InProbability = (float)InProbability;
    ProcessEvent(func, &params);
}
void AFocusTrigger::SetPlayerActionProbablity(float InProbability) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FocusTrigger.SetPlayerActionProbablity"));
    struct Params_SetPlayerActionProbablity {
        float InProbability; // 0x0
    }; // Size: 0x4
    Params_SetPlayerActionProbablity params{};
    params.InProbability = (float)InProbability;
    ProcessEvent(func, &params);
}
void AFocusTrigger::SetAbsoluteExtents(FVector& InAbsoluteExtents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FocusTrigger.SetAbsoluteExtents"));
    struct Params_SetAbsoluteExtents {
        FVector InAbsoluteExtents; // 0x0
    }; // Size: 0xc
    Params_SetAbsoluteExtents params{};
    params.InAbsoluteExtents = (FVector)InAbsoluteExtents;
    ProcessEvent(func, &params);
    InAbsoluteExtents = params.InAbsoluteExtents;
}
void AFocusTrigger::Deactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FocusTrigger.Deactivate"));
    struct Params_Deactivate {
    }; // Size: 0x0
    Params_Deactivate params{};
    ProcessEvent(func, &params);
}
void AFocusTrigger::ActorOverlapEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FocusTrigger.ActorOverlapEndOverlap"));
    struct Params_ActorOverlapEndOverlap {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* Other; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_ActorOverlapEndOverlap params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.Other = (AActor*)Other;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void AFocusTrigger::ActorOverlapBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FocusTrigger.ActorOverlapBeginOverlap"));
    struct Params_ActorOverlapBeginOverlap {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* Other; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult OverlapInfo; // 0x20
    }; // Size: 0xa8
    Params_ActorOverlapBeginOverlap params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.Other = (AActor*)Other;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.OverlapInfo = (FHitResult)OverlapInfo;
    ProcessEvent(func, &params);
    OverlapInfo = params.OverlapInfo;
}
void AFocusTrigger::Activate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FocusTrigger.Activate"));
    struct Params_Activate {
    }; // Size: 0x0
    Params_Activate params{};
    ProcessEvent(func, &params);
}
