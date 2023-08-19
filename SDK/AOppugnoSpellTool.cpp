#include "AActor.hpp"
#include "AChannelingSpellTool.hpp"
#include "AMunitionType_Base.hpp"
#include "AOppugnoSpellTool.hpp"
#include "EObjectSizeClass.hpp"
#include "FHitResult.hpp"
#include "FMunitionImpactData.hpp"
#include "FOppugnoLevelData.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UClass.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UMultiFX2_Base.hpp"
#include "UPrimitiveComponent.hpp"
AOppugnoSpellTool* AOppugnoSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.OppugnoSpellTool");
    return (AOppugnoSpellTool*)res;
}
void AOppugnoSpellTool::TriggerOnOppugnoImpact(AActor* InSrcActor, AActor* InTargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OppugnoSpellTool.TriggerOnOppugnoImpact"));
    struct Params_TriggerOnOppugnoImpact {
        AActor* InSrcActor; // 0x0
        AActor* InTargetActor; // 0x8
    }; // Size: 0x10
    Params_TriggerOnOppugnoImpact params{};
    params.InSrcActor = (AActor*)InSrcActor;
    params.InTargetActor = (AActor*)InTargetActor;
    ProcessEvent(func, &params);
}
void AOppugnoSpellTool::OnOppugnoMunitionImpact(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OppugnoSpellTool.OnOppugnoMunitionImpact"));
    struct Params_OnOppugnoMunitionImpact {
        AMunitionType_Base* MunitionInstance; // 0x0
        FMunitionImpactData MunitionImpactData; // 0x8
    }; // Size: 0xf8
    Params_OnOppugnoMunitionImpact params{};
    params.MunitionInstance = (AMunitionType_Base*)MunitionInstance;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
void AOppugnoSpellTool::SetThrowTarget(FVector InLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OppugnoSpellTool.SetThrowTarget"));
    struct Params_SetThrowTarget {
        FVector InLocation; // 0x0
    }; // Size: 0xc
    Params_SetThrowTarget params{};
    params.InLocation = (FVector)InLocation;
    ProcessEvent(func, &params);
}
void AOppugnoSpellTool::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OppugnoSpellTool.OnActorHit"));
    struct Params_OnActorHit {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
        FVector NormalImpulse; // 0x10
        FHitResult Hit; // 0x1c
    }; // Size: 0xa4
    Params_OnActorHit params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
