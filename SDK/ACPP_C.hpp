#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
class AActor;
class ACPPActor_C;
#pragma pack(push, 1)
class ACPP_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    static ACPP_C* StaticClass();
    void PrintToModLoader(FString Message);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_CPP(int32_t EntryPoint, FTransform CallFunc_MakeTransform_ReturnValue, FString K2Node_CustomEvent_Message, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ACPPActor_C* CallFunc_FinishSpawningActor_ReturnValue, float K2Node_Event_DeltaSeconds);
}; // Size: 0x258
#pragma pack(pop)
