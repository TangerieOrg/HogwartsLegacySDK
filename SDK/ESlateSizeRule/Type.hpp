#pragma once
#include <cstdint>
namespace ESlateSizeRule {
#pragma pack(push, 1)
enum Type : uint8_t {
    Automatic = 0,
    Fill = 1,
    ESlateSizeRule_MAX = 2,
};
#pragma pack(pop)
}
