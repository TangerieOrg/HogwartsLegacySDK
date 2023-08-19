#pragma once
#include <cstdint>
namespace EAIOptionFlag {
#pragma pack(push, 1)
enum Type : uint8_t {
    Default = 0,
    Enable = 1,
    Disable = 2,
    MAX = 3,
};
#pragma pack(pop)
}
