#pragma once
#include <cstdint>
#include "ABP_Foragable_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "EForageableState.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UAkComponent;
class USphereComponent;
class UABP_Leech_C;
class USkeletalMeshComponent;
#pragma pack(push, 1)
class ABP_LeechForagable_C : public ABP_Foragable_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0x2f0
    UAkComponent* AkComponent; // 0x2f8
    USphereComponent* RevelioSphere; // 0x300
    USkeletalMeshComponent* SkeletalMesh; // 0x308
    UABP_Leech_C* ABP_Leech; // 0x310
    EForageableState CurrentState; // 0x318
    char pad_319[0x7];
    static ABP_LeechForagable_C* StaticClass();
    bool ResetState(EForageableState NextState, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_ResetState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_ResetState_ReturnValue_1, bool CallFunc_ResetState_ReturnValue_2);
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void OnPickedUp0();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_LeechForagable(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x320
#pragma pack(pop)
