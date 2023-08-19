#include "AActor.hpp"
#include "ACharacter.hpp"
#include "ARiverVolume.hpp"
#include "AWaterVolumeBase.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "EWaterVfx.hpp"
#include "FBoxSphereBounds.hpp"
#include "FHitResult.hpp"
#include "FMultiFX2Handle.hpp"
#include "FVector.hpp"
#include "UAmbulatory_MovementComponent.hpp"
#include "UBoxComponent.hpp"
#include "UFunction.hpp"
#include "UObjectStateInfo.hpp"
#include "UPhoenixPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
#include "URagdollControlComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UWaterInteractionComponent.hpp"
AWaterVolumeBase* AWaterVolumeBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WaterVolumeBase");
    return (AWaterVolumeBase*)res;
}
void AWaterVolumeBase::UnDamp(UPrimitiveComponent* Mesh, UObjectStateInfo* ObjectState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterVolumeBase.UnDamp"));
    struct Params_UnDamp {
        UPrimitiveComponent* Mesh; // 0x0
        UObjectStateInfo* ObjectState; // 0x8
    }; // Size: 0x10
    Params_UnDamp params{};
    params.Mesh = (UPrimitiveComponent*)Mesh;
    params.ObjectState = (UObjectStateInfo*)ObjectState;
    ProcessEvent(func, &params);
}
void AWaterVolumeBase::SplashVFX(bool i_Char, EWaterVfx i_vfx, AActor* curActor, UPrimitiveComponent* PrimComp, float waterZ, FVector waterNorm, bool bShallow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterVolumeBase.SplashVFX"));
    struct Params_SplashVFX {
        bool i_Char; // 0x0
        EWaterVfx i_vfx; // 0x1
        char pad_2[0x6];
        AActor* curActor; // 0x8
        UPrimitiveComponent* PrimComp; // 0x10
        float waterZ; // 0x18
        FVector waterNorm; // 0x1c
        bool bShallow; // 0x28
    }; // Size: 0x29
    Params_SplashVFX params{};
    params.i_Char = (bool)i_Char;
    params.i_vfx = (EWaterVfx)i_vfx;
    params.curActor = (AActor*)curActor;
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    params.waterZ = (float)waterZ;
    params.waterNorm = (FVector)waterNorm;
    params.bShallow = (bool)bShallow;
    ProcessEvent(func, &params);
}
void AWaterVolumeBase::SetupCharacter(ACharacter* Character, UObjectStateInfo* ObjectState, URagdollControlComponent* RagdollComp, bool bSkipIgnore, bool bOverlappingLakeSphere) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterVolumeBase.SetupCharacter"));
    struct Params_SetupCharacter {
        ACharacter* Character; // 0x0
        UObjectStateInfo* ObjectState; // 0x8
        URagdollControlComponent* RagdollComp; // 0x10
        bool bSkipIgnore; // 0x18
        bool bOverlappingLakeSphere; // 0x19
    }; // Size: 0x1a
    Params_SetupCharacter params{};
    params.Character = (ACharacter*)Character;
    params.ObjectState = (UObjectStateInfo*)ObjectState;
    params.RagdollComp = (URagdollControlComponent*)RagdollComp;
    params.bSkipIgnore = (bool)bSkipIgnore;
    params.bOverlappingLakeSphere = (bool)bOverlappingLakeSphere;
    ProcessEvent(func, &params);
}
void AWaterVolumeBase::SetupObject(AActor* Actor, UPrimitiveComponent* Mesh, UObjectStateInfo* ObjectState, bool bShouldFloat, bool bSkipIgnore, bool bOverlappingLakeSphere, URagdollControlComponent* RagdollComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterVolumeBase.SetupObject"));
    struct Params_SetupObject {
        AActor* Actor; // 0x0
        UPrimitiveComponent* Mesh; // 0x8
        UObjectStateInfo* ObjectState; // 0x10
        bool bShouldFloat; // 0x18
        bool bSkipIgnore; // 0x19
        bool bOverlappingLakeSphere; // 0x1a
        char pad_1b[0x5];
        URagdollControlComponent* RagdollComp; // 0x20
    }; // Size: 0x28
    Params_SetupObject params{};
    params.Actor = (AActor*)Actor;
    params.Mesh = (UPrimitiveComponent*)Mesh;
    params.ObjectState = (UObjectStateInfo*)ObjectState;
    params.bShouldFloat = (bool)bShouldFloat;
    params.bSkipIgnore = (bool)bSkipIgnore;
    params.bOverlappingLakeSphere = (bool)bOverlappingLakeSphere;
    params.RagdollComp = (URagdollControlComponent*)RagdollComp;
    ProcessEvent(func, &params);
}
void AWaterVolumeBase::RemoveVFX(EWaterVfx i_vfx, AActor* curActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterVolumeBase.RemoveVFX"));
    struct Params_RemoveVFX {
        EWaterVfx i_vfx; // 0x0
        char pad_1[0x7];
        AActor* curActor; // 0x8
    }; // Size: 0x10
    Params_RemoveVFX params{};
    params.i_vfx = (EWaterVfx)i_vfx;
    params.curActor = (AActor*)curActor;
    ProcessEvent(func, &params);
}
bool AWaterVolumeBase::RemoveActors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterVolumeBase.RemoveActors"));
    struct Params_RemoveActors {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_RemoveActors params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AWaterVolumeBase::OnRagdollRecoveredInWater(URagdollControlComponent* RagdollControlComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterVolumeBase.OnRagdollRecoveredInWater"));
    struct Params_OnRagdollRecoveredInWater {
        URagdollControlComponent* RagdollControlComponent; // 0x0
    }; // Size: 0x8
    Params_OnRagdollRecoveredInWater params{};
    params.RagdollControlComponent = (URagdollControlComponent*)RagdollControlComponent;
    ProcessEvent(func, &params);
}
void AWaterVolumeBase::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterVolumeBase.OnOverlapEnd"));
    struct Params_OnOverlapEnd {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnOverlapEnd params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void AWaterVolumeBase::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterVolumeBase.OnOverlapBegin"));
    struct Params_OnOverlapBegin {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnOverlapBegin params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
FBoxSphereBounds AWaterVolumeBase::GetBounds(UPrimitiveComponent* Mesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterVolumeBase.GetBounds"));
    struct Params_GetBounds {
        UPrimitiveComponent* Mesh; // 0x0
        FBoxSphereBounds ReturnValue; // 0x8
    }; // Size: 0x24
    Params_GetBounds params{};
    params.Mesh = (UPrimitiveComponent*)Mesh;
    ProcessEvent(func, &params);
    return (FBoxSphereBounds)params.ReturnValue;
}
void AWaterVolumeBase::ExplosionVFX(AActor* curActor, UPrimitiveComponent* PrimComp, FVector Location, bool inWater, float InForce, float Radius, float Falloff) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterVolumeBase.ExplosionVFX"));
    struct Params_ExplosionVFX {
        AActor* curActor; // 0x0
        UPrimitiveComponent* PrimComp; // 0x8
        FVector Location; // 0x10
        bool inWater; // 0x1c
        char pad_1d[0x3];
        float InForce; // 0x20
        float Radius; // 0x24
        float Falloff; // 0x28
    }; // Size: 0x2c
    Params_ExplosionVFX params{};
    params.curActor = (AActor*)curActor;
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    params.Location = (FVector)Location;
    params.inWater = (bool)inWater;
    params.InForce = (float)InForce;
    params.Radius = (float)Radius;
    params.Falloff = (float)Falloff;
    ProcessEvent(func, &params);
}
void AWaterVolumeBase::Damp(UPrimitiveComponent* Mesh, UObjectStateInfo* ObjectState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterVolumeBase.Damp"));
    struct Params_Damp {
        UPrimitiveComponent* Mesh; // 0x0
        UObjectStateInfo* ObjectState; // 0x8
    }; // Size: 0x10
    Params_Damp params{};
    params.Mesh = (UPrimitiveComponent*)Mesh;
    params.ObjectState = (UObjectStateInfo*)ObjectState;
    ProcessEvent(func, &params);
}
void AWaterVolumeBase::CalcForce(AActor* Actor, UPrimitiveComponent* Mesh, float i_Mass, bool bEmplace, URagdollControlComponent* RagdollComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterVolumeBase.CalcForce"));
    struct Params_CalcForce {
        AActor* Actor; // 0x0
        UPrimitiveComponent* Mesh; // 0x8
        float i_Mass; // 0x10
        bool bEmplace; // 0x14
        char pad_15[0x3];
        URagdollControlComponent* RagdollComp; // 0x18
    }; // Size: 0x20
    Params_CalcForce params{};
    params.Actor = (AActor*)Actor;
    params.Mesh = (UPrimitiveComponent*)Mesh;
    params.i_Mass = (float)i_Mass;
    params.bEmplace = (bool)bEmplace;
    params.RagdollComp = (URagdollControlComponent*)RagdollComp;
    ProcessEvent(func, &params);
}
