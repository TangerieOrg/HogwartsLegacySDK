#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class ABiped_Player;
#pragma pack(push, 1)
class UBTT_Biped_SpellLearning_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    static UBTT_Biped_SpellLearning_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_SpellLearning(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue);
}; // Size: 0x158
#pragma pack(pop)
