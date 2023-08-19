#include "AAble_Character.hpp"
#include "AActor.hpp"
#include "ABiped_Character.hpp"
#include "ACharacter.hpp"
#include "ASpiderWeb_Spitter.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UAmbulatory_MovementComponent.hpp"
#include "UBoxComponent.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObjectStateInfo.hpp"
#include "UPoseableMeshComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "USkeletalMeshComponent.hpp"
void ASpiderWeb_Spitter::CreatePhysicsConstraint(UPrimitiveComponent* PrimComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.CreatePhysicsConstraint"));
    struct Params_CreatePhysicsConstraint {
        UPrimitiveComponent* PrimComp; // 0x0
    }; // Size: 0x8
    Params_CreatePhysicsConstraint params{};
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Spitter::WebDestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.WebDestroyed"));
    struct Params_WebDestroyed {
    }; // Size: 0x0
    Params_WebDestroyed params{};
    ProcessEvent(func, &params);
}
ASpiderWeb_Spitter* ASpiderWeb_Spitter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpiderWeb_Spitter");
    return (ASpiderWeb_Spitter*)res;
}
void ASpiderWeb_Spitter::StartPhysicsMat(UPrimitiveComponent* HitComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.StartPhysicsMat"));
    struct Params_StartPhysicsMat {
        UPrimitiveComponent* HitComp; // 0x0
    }; // Size: 0x8
    Params_StartPhysicsMat params{};
    params.HitComp = (UPrimitiveComponent*)HitComp;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Spitter::WebFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.WebFreeze"));
    struct Params_WebFreeze {
    }; // Size: 0x0
    Params_WebFreeze params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_Spitter::WebThaw() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.WebThaw"));
    struct Params_WebThaw {
    }; // Size: 0x0
    Params_WebThaw params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_Spitter::WebRegened() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.WebRegened"));
    struct Params_WebRegened {
    }; // Size: 0x0
    Params_WebRegened params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_Spitter::UnDamp(UPrimitiveComponent* PrimComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.UnDamp"));
    struct Params_UnDamp {
        UPrimitiveComponent* PrimComp; // 0x0
    }; // Size: 0x8
    Params_UnDamp params{};
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Spitter::StartSkeletalMat(ABiped_Character* SkelActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.StartSkeletalMat"));
    struct Params_StartSkeletalMat {
        ABiped_Character* SkelActor; // 0x0
    }; // Size: 0x8
    Params_StartSkeletalMat params{};
    params.SkelActor = (ABiped_Character*)SkelActor;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Spitter::SkeletalMat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.SkeletalMat"));
    struct Params_SkeletalMat {
    }; // Size: 0x0
    Params_SkeletalMat params{};
    ProcessEvent(func, &params);
}
FVector ASpiderWeb_Spitter::SetWebEnd(bool i_Retract, bool i_Lerp, float i_Alpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.SetWebEnd"));
    struct Params_SetWebEnd {
        bool i_Retract; // 0x0
        bool i_Lerp; // 0x1
        char pad_2[0x2];
        float i_Alpha; // 0x4
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_SetWebEnd params{};
    params.i_Retract = (bool)i_Retract;
    params.i_Lerp = (bool)i_Lerp;
    params.i_Alpha = (float)i_Alpha;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void ASpiderWeb_Spitter::OnPushOverlapBegin(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.OnPushOverlapBegin"));
    struct Params_OnPushOverlapBegin {
        AActor* OtherActor; // 0x0
    }; // Size: 0x8
    Params_OnPushOverlapBegin params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Spitter::SetMeshTick(bool i_Tick) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.SetMeshTick"));
    struct Params_SetMeshTick {
        bool i_Tick; // 0x0
    }; // Size: 0x1
    Params_SetMeshTick params{};
    params.i_Tick = (bool)i_Tick;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Spitter::SetAIBlocker(bool i_block) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.SetAIBlocker"));
    struct Params_SetAIBlocker {
        bool i_block; // 0x0
    }; // Size: 0x1
    Params_SetAIBlocker params{};
    params.i_block = (bool)i_block;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Spitter::PushBack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.PushBack"));
    struct Params_PushBack {
    }; // Size: 0x0
    Params_PushBack params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_Spitter::PhysicsMat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.PhysicsMat"));
    struct Params_PhysicsMat {
    }; // Size: 0x0
    Params_PhysicsMat params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_Spitter::PhysicsHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.PhysicsHit"));
    struct Params_PhysicsHit {
        UPrimitiveComponent* HitComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        FVector NormalImpulse; // 0x18
        FHitResult Hit; // 0x24
    }; // Size: 0xac
    Params_PhysicsHit params{};
    params.HitComp = (UPrimitiveComponent*)HitComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
void ASpiderWeb_Spitter::OnStickyOverlapEnd(AActor* OtherActor, UPrimitiveComponent* OtherComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.OnStickyOverlapEnd"));
    struct Params_OnStickyOverlapEnd {
        AActor* OtherActor; // 0x0
        UPrimitiveComponent* OtherComp; // 0x8
    }; // Size: 0x10
    Params_OnStickyOverlapEnd params{};
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Spitter::OnStickyOverlapBegin(AActor* OtherActor, UPrimitiveComponent* OtherComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.OnStickyOverlapBegin"));
    struct Params_OnStickyOverlapBegin {
        AActor* OtherActor; // 0x0
        UPrimitiveComponent* OtherComp; // 0x8
    }; // Size: 0x10
    Params_OnStickyOverlapBegin params{};
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Spitter::OnPushOverlapEnd(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.OnPushOverlapEnd"));
    struct Params_OnPushOverlapEnd {
        AActor* OtherActor; // 0x0
    }; // Size: 0x8
    Params_OnPushOverlapEnd params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Spitter::InitOverlap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.InitOverlap"));
    struct Params_InitOverlap {
    }; // Size: 0x0
    Params_InitOverlap params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_Spitter::CreateBonePhysicsConstraint(USkeletalMeshComponent* skelComp, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Spitter.CreateBonePhysicsConstraint"));
    struct Params_CreateBonePhysicsConstraint {
        USkeletalMeshComponent* skelComp; // 0x0
        FName BoneName; // 0x8
    }; // Size: 0x10
    Params_CreateBonePhysicsConstraint params{};
    params.skelComp = (USkeletalMeshComponent*)skelComp;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
