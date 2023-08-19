#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UCognitionStimuliSourceComponent;
class UStaticMeshComponent;
class ABiped_Player;
class USplineComponent;
class USceneComponent;
class UClass;
#pragma pack(push, 1)
class ABP_RailTravel_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x250
    UStaticMeshComponent* CylinderOverlap; // 0x258
    USplineComponent* Spline; // 0x260
    USceneComponent* DefaultSceneRoot; // 0x268
    char pad_270[0x28];
    bool Loaded; // 0x298
    char pad_299[0x7];
    static ABP_RailTravel_C* StaticClass();
    void UserConstructionScript0(float offsetPerInterestPointActor);
    void OnLoaded_3760AC4F441A6F01D5ACA992D45BFB6A(UClass* Loaded);
    void ReceiveActorEndOverlap0(AActor* OtherActor);
    void ReceiveActorBeginOverlap0(AActor* OtherActor);
    void ReceiveBeginPlay0();
    void ReceiveTick0(float DeltaSeconds);
    void ExecuteUbergraph_BP_RailTravel(int32_t EntryPoint, UClass* Temp_class_Variable, AActor* K2Node_Event_OtherActor_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OtherActor, ABiped_Player* K2Node_DynamicCast_AsBiped_Player_1, bool K2Node_DynamicCast_bSuccess_1, UClass* K2Node_CustomEvent_Loaded);
}; // Size: 0x2a0
#pragma pack(pop)
