#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGameLogicEditorPanel : uint8_t {
    BoolVars = 0,
    Int32Vars = 1,
    Int32Props = 2,
    FloatVars = 3,
    FloatProps = 4,
    Expressions = 5,
    TimerVars = 6,
    EnumVars = 7,
    EnumPropz = 8,
    StringVars = 9,
    StringProps = 10,
    BitfieldVars = 11,
    BitfieldProps = 12,
    EGameLogicEditorPanel_MAX = 13,
};
#pragma pack(pop)
