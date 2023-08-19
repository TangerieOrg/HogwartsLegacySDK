#pragma once
#include <cstdint>
#include "ABP_InventoryObject_C.hpp"
#include "FRandomStream.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
class ABP_Knuts_SM_C : public ABP_InventoryObject_C {
public:
    int32_t Min_Knuts_Count; // 0x350
    int32_t Max_Knuts_Count; // 0x354
    FRandomStream Random_Seed; // 0x358
    static ABP_Knuts_SM_C* StaticClass();
    void UserConstructionScript(FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, int32_t CallFunc_RandomIntegerInRangeFromStream_ReturnValue);
}; // Size: 0x360
#pragma pack(pop)
