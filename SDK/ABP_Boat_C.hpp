#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEnvironment\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPropList.hpp"
#include "FRandomStream.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UStaticMeshComponent;
class UPhysicsConstraintComponent;
class USceneComponent;
class UCableComponent;
class UObjectStateComponent;
#pragma pack(push, 1)
class ABP_Boat_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UStaticMeshComponent* Occluder; // 0x250
    UPhysicsConstraintComponent* PhysicsConstraint; // 0x258
    USceneComponent* Root; // 0x260
    UStaticMeshComponent* Anchor; // 0x268
    UCableComponent* Cable; // 0x270
    UStaticMeshComponent* Boat; // 0x278
    UStaticMeshComponent* RopeKnot; // 0x280
    UObjectStateComponent* ObjectState; // 0x288
    EEnvironment::Type Environment; // 0x290
    char pad_291[0x3];
    int32_t PropIndex; // 0x294
    char pad_298[0x50];
    int32_t EnvInt; // 0x2e8
    bool bRope; // 0x2ec
    bool bRopeKnot; // 0x2ed
    char pad_2ee[0x2];
    FTransform RopeAttach; // 0x2f0
    TArray<void*> RopeMeshes; // 0x320
    TArray<void*> OccluderMeshes; // 0x330
    bool Disable_Physics_Simulation; // 0x340
    char pad_341[0x3];
    FRandomStream Random_Seed; // 0x344
    char pad_34c[0x4];
    static ABP_Boat_C* StaticClass();
    void UserConstructionScript0(FPropList Props, int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_Boat(int32_t EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
}; // Size: 0x350
#pragma pack(pop)
