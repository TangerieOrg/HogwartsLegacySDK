#pragma once
#include <cstdint>
#include "AActor.hpp"
class UChildActorComponent;
class ABP_SelfArrangingBooks_C;
class USplineComponent;
#pragma pack(push, 1)
class ABP_Sanc_SelfArrangingBooksBase_C : public AActor {
public:
    UChildActorComponent* BP_SelfArrangingBooks; // 0x248
    static ABP_Sanc_SelfArrangingBooksBase_C* StaticClass();
    void UserConstructionScript0(TArray<USplineComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, ABP_SelfArrangingBooks_C* K2Node_DynamicCast_AsBP_Self_Arranging_Books, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_Array_Length_ReturnValue);
}; // Size: 0x250
#pragma pack(pop)
