#pragma once
#include <cstdint>
namespace EGrammaticalGender {
#pragma pack(push, 1)
enum Type : uint8_t {
    Neuter = 0,
    Masculine = 1,
    Feminine = 2,
    Mixed = 3,
    EGrammaticalGender_MAX = 4,
};
#pragma pack(pop)
}
