#pragma once
#include <cstdint>
#include "ARiverVolume.hpp"
#include "EDrawDebugTrace\Type.hpp"
#pragma pack(push, 1)
class ABP_RiverVolume_C : public ARiverVolume {
public:
    static ABP_RiverVolume_C* StaticClass();
    void UserConstructionScript(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, EDrawDebugTrace::Type Temp_byte_Variable, EDrawDebugTrace::Type Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue_1, EDrawDebugTrace::Type K2Node_Select_Default);
}; // Size: 0x558
#pragma pack(pop)
