#pragma once
#include <cstdint>
namespace ESlateCheckBoxType {
#pragma pack(push, 1)
enum Type : uint8_t {
    CheckBox = 0,
    ToggleButton = 1,
    ESlateCheckBoxType_MAX = 2,
};
#pragma pack(pop)
}
