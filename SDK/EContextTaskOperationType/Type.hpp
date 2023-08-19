#pragma once
#include <cstdint>
namespace EContextTaskOperationType {
#pragma pack(push, 1)
enum Type : uint8_t {
    SetAndClear = 0,
    ClearAndSet = 1,
    Set = 2,
    Clear = 3,
    EContextTaskOperationType_MAX = 4,
};
#pragma pack(pop)
}
