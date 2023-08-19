#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTService_AvaAITree.hpp"
class AActor;
#pragma pack(push, 1)
class UBTS_Student_TopLevel_C : public UBTService_AvaAITree {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xd0
    static UBTS_Student_TopLevel_C* StaticClass();
    void ServiceBegin0(AActor* OwnerActor);
    void ReceiveSearchStart(AActor* OwnerActor);
    void ExecuteUbergraph_BTS_Student_TopLevel(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, AActor* K2Node_Event_OwnerActor_1);
}; // Size: 0xd8
#pragma pack(pop)
