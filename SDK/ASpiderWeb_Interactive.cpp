#include "AAble_Character.hpp"
#include "AActor.hpp"
#include "ABiped_Character.hpp"
#include "ACharacter.hpp"
#include "ASpiderWeb_Interactive.hpp"
#include "AWorldObject.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "FHitResult.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UAmbulatory_MovementComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObjectStateInfo.hpp"
#include "UPrimitiveComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USphereComponent.hpp"
ASpiderWeb_Interactive* ASpiderWeb_Interactive::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpiderWeb_Interactive");
    return (ASpiderWeb_Interactive*)res;
}
void ASpiderWeb_Interactive::OnFireOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.OnFireOverlapBegin"));
    struct Params_OnFireOverlapBegin {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnFireOverlapBegin params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ASpiderWeb_Interactive::StartSkeletalMat(ABiped_Character* SkelActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.StartSkeletalMat"));
    struct Params_StartSkeletalMat {
        ABiped_Character* SkelActor; // 0x0
    }; // Size: 0x8
    Params_StartSkeletalMat params{};
    params.SkelActor = (ABiped_Character*)SkelActor;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Interactive::WebThaw() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.WebThaw"));
    struct Params_WebThaw {
    }; // Size: 0x0
    Params_WebThaw params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_Interactive::UnDamp(UPrimitiveComponent* PrimComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.UnDamp"));
    struct Params_UnDamp {
        UPrimitiveComponent* PrimComp; // 0x0
    }; // Size: 0x8
    Params_UnDamp params{};
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Interactive::WebFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.WebFreeze"));
    struct Params_WebFreeze {
    }; // Size: 0x0
    Params_WebFreeze params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_Interactive::WebBurn(FVector burnLoc) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.WebBurn"));
    struct Params_WebBurn {
        FVector burnLoc; // 0x0
    }; // Size: 0xc
    Params_WebBurn params{};
    params.burnLoc = (FVector)burnLoc;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Interactive::WakeCompBody(UPrimitiveComponent* PrimComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.WakeCompBody"));
    struct Params_WakeCompBody {
        UPrimitiveComponent* PrimComp; // 0x0
    }; // Size: 0x8
    Params_WakeCompBody params{};
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Interactive::StartPhysicsMat(UPrimitiveComponent* HitComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.StartPhysicsMat"));
    struct Params_StartPhysicsMat {
        UPrimitiveComponent* HitComp; // 0x0
    }; // Size: 0x8
    Params_StartPhysicsMat params{};
    params.HitComp = (UPrimitiveComponent*)HitComp;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Interactive::SkeletalMat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.SkeletalMat"));
    struct Params_SkeletalMat {
    }; // Size: 0x0
    Params_SkeletalMat params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_Interactive::PhysicsMat() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.PhysicsMat"));
    struct Params_PhysicsMat {
    }; // Size: 0x0
    Params_PhysicsMat params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_Interactive::OnFullyCharred(bool bCharred) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.OnFullyCharred"));
    struct Params_OnFullyCharred {
        bool bCharred; // 0x0
    }; // Size: 0x1
    Params_OnFullyCharred params{};
    params.bCharred = (bool)bCharred;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Interactive::PhysicsHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.PhysicsHit"));
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
void ASpiderWeb_Interactive::OnWebOverlapEnd(AActor* OtherActor, UPrimitiveComponent* OtherComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.OnWebOverlapEnd"));
    struct Params_OnWebOverlapEnd {
        AActor* OtherActor; // 0x0
        UPrimitiveComponent* OtherComp; // 0x8
    }; // Size: 0x10
    Params_OnWebOverlapEnd params{};
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Interactive::OnWebOverlapBegin(AActor* OtherActor, UPrimitiveComponent* OtherComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.OnWebOverlapBegin"));
    struct Params_OnWebOverlapBegin {
        AActor* OtherActor; // 0x0
        UPrimitiveComponent* OtherComp; // 0x8
    }; // Size: 0x10
    Params_OnWebOverlapBegin params{};
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Interactive::OnFireOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.OnFireOverlapEnd"));
    struct Params_OnFireOverlapEnd {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnFireOverlapEnd params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Interactive::InitFireOverlap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.InitFireOverlap"));
    struct Params_InitFireOverlap {
    }; // Size: 0x0
    Params_InitFireOverlap params{};
    ProcessEvent(func, &params);
}
FTransform ASpiderWeb_Interactive::GetRelativeTransform(UPrimitiveComponent* PrimComp, FVector FireLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.GetRelativeTransform"));
    struct Params_GetRelativeTransform {
        UPrimitiveComponent* PrimComp; // 0x0
        FVector FireLocation; // 0x8
        char pad_14[0xc];
        FTransform ReturnValue; // 0x20
    }; // Size: 0x50
    Params_GetRelativeTransform params{};
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    params.FireLocation = (FVector)FireLocation;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
FVector ASpiderWeb_Interactive::GetCollisionScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.GetCollisionScale"));
    struct Params_GetCollisionScale {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetCollisionScale params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void ASpiderWeb_Interactive::DestroyWeb() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.DestroyWeb"));
    struct Params_DestroyWeb {
    }; // Size: 0x0
    Params_DestroyWeb params{};
    ProcessEvent(func, &params);
}
void ASpiderWeb_Interactive::CreatePhysicsConstraint(UPrimitiveComponent* PrimComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.CreatePhysicsConstraint"));
    struct Params_CreatePhysicsConstraint {
        UPrimitiveComponent* PrimComp; // 0x0
    }; // Size: 0x8
    Params_CreatePhysicsConstraint params{};
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    ProcessEvent(func, &params);
}
void ASpiderWeb_Interactive::CreateBonePhysicsConstraint(USkeletalMeshComponent* skelComp, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpiderWeb_Interactive.CreateBonePhysicsConstraint"));
    struct Params_CreateBonePhysicsConstraint {
        USkeletalMeshComponent* skelComp; // 0x0
        FName BoneName; // 0x8
    }; // Size: 0x10
    Params_CreateBonePhysicsConstraint params{};
    params.skelComp = (USkeletalMeshComponent*)skelComp;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
