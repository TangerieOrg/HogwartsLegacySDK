#pragma once
#include <cstdint>
#include "FHermesMessageAdvancedDynamicPayload.hpp"
#include "USceneAction_HermesMessageAdvanced.hpp"
#pragma pack(push, 1)
class USceneAction_HermesMessageAdvancedStartEnd : public USceneAction_HermesMessageAdvanced {
public:
    FName StartMessage; // 0x88
    FHermesMessageAdvancedDynamicPayload StartData; // 0x90
    FName EndMessage; // 0xa8
    FHermesMessageAdvancedDynamicPayload EndData; // 0xb0
    static USceneAction_HermesMessageAdvancedStartEnd* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
