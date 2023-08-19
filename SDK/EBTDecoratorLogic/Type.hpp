#pragma once
#include <cstdint>
namespace EBTDecoratorLogic {
#pragma pack(push, 1)
enum Type : uint8_t {
    Invalid = 0,
    Test = 1,
    And = 2,
    Or = 3,
    Not = 4,
    EBTDecoratorLogic_MAX = 5,
};
#pragma pack(pop)
}
