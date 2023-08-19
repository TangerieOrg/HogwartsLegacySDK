#pragma once
#include <cstdint>
#include "APhoenixPlayerController.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UUIManager;
#pragma pack(push, 1)
class ABP_Phoenix_Player_Controller_C : public APhoenixPlayerController {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x9a0
    char pad_9a8[0x8];
    static ABP_Phoenix_Player_Controller_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Phoenix_Player_Controller(int32_t EntryPoint, UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetPlatformName_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_5);
}; // Size: 0x9b0
#pragma pack(pop)
