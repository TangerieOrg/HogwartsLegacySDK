#pragma once
#include <cstdint>
#include "ABP_InventoryObject_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FVector.hpp"
class UBTService_AvaAITree;
class UObject;
#pragma pack(push, 1)
class ABP_CoinPouch_C : public ABP_InventoryObject_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0x350
    int32_t Max_Knut_Count; // 0x358
    int32_t Min_Knut_Count; // 0x35c
    FRandomStream Random_Seed; // 0x360
    static ABP_CoinPouch_C* StaticClass();
    void UserConstructionScript(FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue);
    void Interact(UBTService_AvaAITree* AvaService);
    void ReceiveBeginPlay0();
    void ShowNonCinematicElements(UObject* Caller);
    void HideNonCinematicElements(UObject* Caller);
    void ExecuteUbergraph_BP_CoinPouch(int32_t EntryPoint);
}; // Size: 0x368
#pragma pack(pop)
