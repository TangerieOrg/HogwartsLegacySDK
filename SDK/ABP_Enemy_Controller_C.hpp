#pragma once
#include <cstdint>
#include "AEnemy_Controller.hpp"
#include "FPointerToUberGraphFrame.hpp"
class APawn;
#pragma pack(push, 1)
class ABP_Enemy_Controller_C : public AEnemy_Controller {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x460
    static ABP_Enemy_Controller_C* StaticClass();
    void ReceiveBeginPlay();
    void ReceivePossess(APawn* PossessedPawn);
    void ExecuteUbergraph_BP_Enemy_Controller(int32_t EntryPoint, APawn* K2Node_Event_PossessedPawn);
}; // Size: 0x468
#pragma pack(pop)
