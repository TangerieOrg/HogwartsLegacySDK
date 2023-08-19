#pragma once
#include <cstdint>
namespace EBlackBoardEntryComparison {
#pragma pack(push, 1)
enum Type : uint8_t {
    Equal = 0,
    NotEqual = 1,
    EBlackBoardEntryComparison_MAX = 2,
};
#pragma pack(pop)
}
