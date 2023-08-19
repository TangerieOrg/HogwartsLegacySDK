#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
class UTextRenderComponent;
class ABiped_Player;
class USceneComponent;
#pragma pack(push, 1)
class ABP_CM_Text_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UTextRenderComponent* TextRender; // 0x250
    USceneComponent* Scene; // 0x258
    char pad_260[0x18];
    static ABP_CM_Text_C* StaticClass();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void StartText();
    void ExecuteUbergraph_BP_CM_Text(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}; // Size: 0x278
#pragma pack(pop)
