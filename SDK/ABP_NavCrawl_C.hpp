#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "FFallbackStruct.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UBoxComponent;
class USceneComponent;
class ABiped_Character;
class APlayerController;
class APhoenixHUD;
class AHUD;
#pragma pack(push, 1)
class ABP_NavCrawl_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    char pad_250[0x8];
    UBoxComponent* Crouch_Geo_Enforcer; // 0x258
    UBoxComponent* Ceiling_NavMesh_UnblockingBox; // 0x260
    UBoxComponent* Box; // 0x268
    USceneComponent* DefaultSceneRoot; // 0x270
    ETargetSpeedMode::Type SpeedMode; // 0x278
    bool GenerateAINavMesh; // 0x279
    bool RemoveCeiling; // 0x27a
    bool AddCrouchTriangles; // 0x27b
    bool DebugRemoveCeiling; // 0x27c
    ETargetSpeedMode::Type SpeedModifier; // 0x27d
    char pad_27e[0x2];
    static ABP_NavCrawl_C* StaticClass();
    bool GetDebugDiscardedTriangles();
    bool GetCrouchGeometryBoxComponents(TArray<UBoxComponent*>& OutBoxComponents, TArray<UBoxComponent*>& K2Node_MakeArray_Array, bool CallFunc_BooleanAND_ReturnValue);
    bool GetGeometryExclusionBoxComponents(TArray<UBoxComponent*>& OutBoxComponents, bool CallFunc_BooleanAND_ReturnValue, TArray<UBoxComponent*>& K2Node_MakeArray_Array);
    bool GetGeometryExclusionOOBBs(TArray<FFallbackStruct>& OutOOBBs);
    void UserConstructionScript0(bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
    void ReceiveActorBeginOverlap0(AActor* OtherActor);
    void ReceiveActorEndOverlap0(AActor* OtherActor);
    void ExecuteUbergraph_BP_NavCrawl(int32_t EntryPoint, APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, AActor* K2Node_Event_OtherActor_1, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess, ABiped_Character* K2Node_DynamicCast_AsBiped_Character, bool K2Node_DynamicCast_bSuccess_1);
}; // Size: 0x280
#pragma pack(pop)
