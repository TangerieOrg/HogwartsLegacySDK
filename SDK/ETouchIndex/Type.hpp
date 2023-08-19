#pragma once
#include <cstdint>
namespace ETouchIndex {
#pragma pack(push, 1)
enum Type : uint8_t {
    Touch1 = 0,
    Touch2 = 1,
    Touch3 = 2,
    Touch4 = 3,
    Touch5 = 4,
    Touch6 = 5,
    Touch7 = 6,
    Touch8 = 7,
    Touch9 = 8,
    Touch10 = 9,
    CursorPointerIndex = 10,
    MAX_TOUCHES = 11,
    ETouchIndex_MAX = 12,
};
#pragma pack(pop)
}
