#pragma once
#include <cstdint>
#include "UBlueprintHelper.hpp"
class USceneRig;
#pragma pack(push, 1)
class UBTT_Biped_Talk_Helper : public UBlueprintHelper {
public:
    static UBTT_Biped_Talk_Helper* StaticClass();
    static USceneRig* GetBTTBipedTalkSceneRig();
}; // Size: 0x28
#pragma pack(pop)
