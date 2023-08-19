#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#pragma pack(push, 1)
class ASUB_Audio_Hogwarts_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    int32_t HW_AudioVolumesOverlapped; // 0x258
    int32_t PotionsClassroomVolumesOverlapped; // 0x25c
    int32_t GreenhouseVolumesOverlapped; // 0x260
    int32_t GreatHallVolumesOverlapped; // 0x264
    static ASUB_Audio_Hogwarts_C* StaticClass();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_SUB_Audio_Hogwarts(int32_t EntryPoint);
}; // Size: 0x268
#pragma pack(pop)
