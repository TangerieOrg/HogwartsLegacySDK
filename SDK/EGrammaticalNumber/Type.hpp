#pragma once
#include <cstdint>
namespace EGrammaticalNumber {
#pragma pack(push, 1)
enum Type : uint8_t {
    Singular = 0,
    Plural = 1,
    EGrammaticalNumber_MAX = 2,
};
#pragma pack(pop)
}
